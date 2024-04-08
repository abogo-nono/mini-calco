# Mini Calculator (MiniCalco)

## Overview

This is a simple command-line calculator program written in C, aptly named MiniCalco. It provides basic arithmetic operations such as addition, subtraction, division, multiplication, as well as some additional functionalities like calculating powers and squares.

## Features

- Addition: Add two numbers together.
- Subtraction: Subtract one number from another.
- Division: Divide one number by another.
- Multiplication: Multiply two numbers.
- Power: Calculate the result of raising a number to a power.
- Square: Calculate the square of a number.

## Getting Started

To use MiniCalco, follow these steps:

1. Clone this repository to your local machine:

   ```
   git clone https://github.com/abogo-nono/mini-calco.git
   ```

2. Navigate to the directory where you cloned the repository:

   ```
   cd mini-calco
   ```

3. Compile the source code using a C compiler (e.g., GCC):

   ```
   gcc src/*.c -o ../bin/my_program
   ```
   or using make

   ```
   make -f makefile
   ```

4. Run the compiled executable:

   ```
   ./bin/my_program
   ```

## Folder structure

```
mini-calco/
│
├── src/
│   ├── main.c
│   └── calco.c
│
├── inc/
│   └── calco.h
│
├── bin/
│   └── my_program
│
└── obj/
    ├── main.o
    └── calco.o
```

- **src/**: This directory contains the source code files for your project.
  - **main.c**: The main program file.
  - **calco.c**: The implementation file for the calculator functions.
  
- **inc/**: This directory contains header files.
  - **calco.h**: Header file declaring the functions and structures used in `calco.c`.

- **bin/**: This directory will contain the compiled executable file after compilation.
  - **minicalco**: Compiled executable.

- **obj/**: This directory will contain the object files generated during compilation.
  - **main.o**: Object file for `main.c`.
  - **calco.o**: Object file for `calco.c`.

## Usage

Once you run MiniCalco, you will be prompted to choose an operation and input the required numbers. Follow the on-screen instructions to perform calculations.

## Supported Operations

1. Addition (+)
2. Subtraction (-)
3. Division (/)
4. Multiplication (*)
5. Power (^)
6. Square (s)

## Example Usage

```
Welcome to MiniCalco!

Choose an operation:
  1. Addition
  2. Subtraction
  3. Division
  4. Multiplication
  5. Power
  6. Square
  0. Exit

Enter your choice? 2
Enter the first number: 3
Enter the second number: 2

3 - 2 = 1
```

## Contributing

If you want to contribute to MiniCalco, feel free to fork this repository and submit a pull request with your changes. All contributions are welcome!

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by the need for a simple calculator program.
- Built with a passion for C programming.
