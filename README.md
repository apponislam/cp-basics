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

### 7. `PhitronOj/NTimes.c`

- Reads an integer `n`.
- Prints `I Love Practice` exactly `n` times, each on a new line.

### 8. `PhitronOj/sumOfTwoNumbers.c`

- Reads two integers.
- Prints their sum.
- Example: input `3 7` prints `10`.

### 9. `PhitronOj/Pattern1.c`

- Reads an integer `n`.
- Prints a left-aligned numeric triangle with rows `1` to `n`.
- Example for `n = 3`:
    ```
    1
    1 2
    1 2 3
    ```

### 10. `PhitronOj/Pattern2.c`

- Reads an integer `n`.
- Prints a reversed numeric triangle starting from `n`.
- Example for `n = 3`:
    ```
    3 2 1
    2 1
    1
    ```

### 11. `PhitronOj/Pattern3.c`

- Reads an integer `n`.
- Prints `n` rows of repeated letters.
- Each row `i` uses the `i`th letter starting from `A`.
- Example for `n = 3`:
    ```
    A
    B B
    C C C
    ```

### 12. `PhitronOj/Pattern4.c`

- Reads an integer `a`.
- Prints a pyramid of `*` characters with `a` rows.
- Each row `i` contains `2*i - 1` stars.

## How to compile

From the repository root, use a C compiler such as `gcc`:

```bash
gcc PhitronOj/FirstProgram.c -o FirstProgram
gcc PhitronOj/floatingPointNumber.c -o floatingPointNumber
gcc PhitronOj/handwritingMarks.c -o handwritingMarks
gcc PhitronOj/multipleOrNot.c -o multipleOrNot
gcc PhitronOj/variables.c -o variables
gcc PhitronOj/ZeroOrNonZero.c -o ZeroOrNonZero
gcc PhitronOj/NTimes.c -o NTimes
gcc PhitronOj/sumOfTwoNumbers.c -o sumOfTwoNumbers
gcc PhitronOj/Pattern1.c -o Pattern1
gcc PhitronOj/Pattern2.c -o Pattern2
gcc PhitronOj/Pattern3.c -o Pattern3
gcc PhitronOj/Pattern4.c -o Pattern4
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
./NTimes
./sumOfTwoNumbers
./Pattern1
./Pattern2
./Pattern3
./Pattern4
```

## Notes

- The problem solutions are simple, beginner-level C programs.
- The repository also contains some `input.txt` and `output.txt` files for reference, but the main implementations are in `PhitronOj/`.
