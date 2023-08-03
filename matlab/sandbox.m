A = [1, 2, 3; 4, 5, 6; 7, 8, 10] % first matrix
B = (10:12)' % column vector

A' % transposed matrix
A*B % matrix product (inner product)
A./B % element-wise division

inv(A) % matrix inverse


% if statement test:
fun_statement = 1;

if fun_statement == 0
    disp("No fun statement found.")
else
    disp("Here is a fun if statement!")
end

% Call function main.m:
main

% BMI calculator:

h = input("Enter vour height in m: ")
w = input("Enter vour weight in kg: ")

BMI = w/h^2;

fprintf("Your BMI is %f\n", BMI)