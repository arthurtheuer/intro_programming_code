print("Hello World!")

a <- c(1, 2, 3, 4, 5)
b <- t(c(6, 7, 8, 9, 10))

a*b

a%*%b
b%*%a

counter <- 0

my_function <- function(counter) {
  print(counter)
}

while (counter <= 10) {
  my_function(counter)
  counter = counter + 1
}