# Semester 1 Problem Set

This repository contains simple C exercises from the Phitron Batch 9 Semester 1 problems. All source files are in the `PhitronOj/` folder.

## Problems

### 1. `PhitronOj/FirstProgram.c`

- Output: `I Love Practice`
- Description: A basic C program that prints a fixed string.

### 2. `PhitronOj/floatingPointNumber.c`

- Reads a floating-point number from input.
- Prints the number rounded to 3 decimal places.
- Example: input `3.14159` prints `3.142`.

### 3. `PhitronOj/handwritingMarks.c`

- Reads an integer.
- If the number is between -1 and 100, adds 5 and prints the result.
- Example: input `10` prints `15`.

### 4. `PhitronOj/multipleOrNot.c`

- Reads two integers `a` and `b`.
- Prints `Yes` if either `a` is a multiple of `b` or `b` is a multiple of `a`.
- Prints `No` otherwise.

### 5. `PhitronOj/variables.c`

- Reads 4 values: an `int`, a `long long`, a `float`, and a `char`.
- Prints each value on its own line.
- The float is displayed with 2 decimal places.

### 6. `PhitronOj/ZeroOrNonZero.c`

- Reads an integer.
- Prints `Zero` if the number is 0, otherwise prints `Non Zero`.

## How to compile

From the repository root, use a C compiler such as `gcc`:

```bash
gcc PhitronOj/FirstProgram.c -o FirstProgram
gcc PhitronOj/floatingPointNumber.c -o floatingPointNumber
gcc PhitronOj/handwritingMarks.c -o handwritingMarks
gcc PhitronOj/multipleOrNot.c -o multipleOrNot
gcc PhitronOj/variables.c -o variables
gcc PhitronOj/ZeroOrNonZero.c -o ZeroOrNonZero
```

## How to run

Run the compiled executable and provide input via standard input:

```bash
./FirstProgram
./floatingPointNumber
./handwritingMarks
./multipleOrNot
./variables
./ZeroOrNonZero
```

## Notes

- The problem solutions are simple, beginner-level C programs.
- The repository also contains some `input.txt` and `output.txt` files for reference, but the main implementations are in `PhitronOj/`.
