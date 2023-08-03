import pygame
import numpy as np

# Colors:
BORN = (255, 255, 255)  # cells that are born
LIVE = (200, 200, 200)  # cells that are alive
FADE = (50, 50, 50)     # cells that are dying (= conditions not fulfilled)
DEAD = (0, 0, 0)        # cells that are dead (= background)
GRID = (30, 30, 30)     # grid for the cells

# Starting parameters:
p_alive = 0.1  # fraction of living cells at the start
world_x = 135  # world width
world_y = 135  # world height
size = 6  # size of the cells (scaling)
FPS = 12  # refresh rate


def update(cur, size, world):
    """Function for evaluating the living conditions and updating the world."""
    nxt = np.zeros_like(cur)  # initialize next frame as dead

    for row, col in np.ndindex(cur.shape):
        # Count number of neighboring live cells:
        n_LIVE = np.sum(cur[row-1:row+2, col-1:col+2]) - cur[row, col]

        pixel = DEAD  # initialize color to background and update below

        if cur[row, col] == 1 and (n_LIVE < 2 or n_LIVE > 3):  # cell dies
            pixel = FADE
            nxt[row, col] = 0  # redundant
        elif cur[row, col] == 1 and 2 <= n_LIVE <= 3:  # cell stays alive
            pixel = LIVE
            nxt[row, col] = 1
        elif cur[row, col] == 0 and n_LIVE == 3:  # cell is born
            pixel = BORN
            nxt[row, col] = 1

        # Draw the pixel with the right color:
        pygame.draw.rect(world, pixel, (col*size, row*size, size-1, size-1))

    return nxt  # output the next array after rendering


def grid(x, y, p):
    """Create the starting grid with a random number generator."""
    return np.random.default_rng().choice([0, 1], size=(x, y), p=[(1-p), p])


def main(x_dim, y_dim, cell_size, fps):
    """Main code for controlling the other functions."""
    pygame.init()
    world = pygame.display.set_mode((x_dim*cell_size, y_dim*cell_size))
    pygame.display.set_caption("Arthur's Game of Life")

    cells = grid(x_dim, y_dim, p_alive)

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                return

        world.fill(GRID)
        cells = update(cells, cell_size, world)
        pygame.display.update()

        pygame.time.Clock().tick(fps)


if __name__ == "__main__":
    main(world_x, world_y, size, FPS)
