# Semester 1 Problem Set

This repository contains simple C exercises from the Phitron Batch 9 Semester 1 problems. All source files are in the `PhitronOj/` folder.

## Problems

### Basic Problems (`PhitronOj/`)

1. **`FirstProgram.c`**
    - Output: `I Love Practice`
    - Description: A basic C program that prints a fixed string.

2. **`floatingPointNumber.c`**
    - Reads a floating-point number from input.
    - Prints the number rounded to 3 decimal places.
    - Example: input `3.14159` prints `3.142`.

3. **`handwritingMarks.c`**
    - Reads an integer.
    - If the number is between -1 and 100, adds 5 and prints the result.
    - Example: input `10` prints `15`.

4. **`multipleOrNot.c`**
    - Reads two integers `a` and `b`.
    - Prints `Yes` if either `a` is a multiple of `b` or `b` is a multiple of `a`.
    - Prints `No` otherwise.

5. **`variables.c`**
    - Reads 4 values: an `int`, a `long long`, a `float`, and a `char`.
    - Prints each value on its own line.
    - The float is displayed with 2 decimal places.

6. **`ZeroOrNonZero.c`**
    - Reads an integer.
    - Prints `Zero` if the number is 0, otherwise prints `Non Zero`.

7. **`NTimes.c`**
    - Reads an integer `n`.
    - Prints `I Love Practice` exactly `n` times, each on a new line.

8. **`sumOfTwoNumbers.c`**
    - Reads two integers.
    - Prints their sum.
    - Example: input `3 7` prints `10`.

9. **`Pattern1.c`**
    - Reads an integer `n`.
    - Prints a left-aligned numeric triangle with rows `1` to `n`.
    - Example for `n = 3`:
        ```
        1
        1 2
        1 2 3
        ```

10. **`Pattern2.c`**
    - Reads an integer `n`.
    - Prints a reversed numeric triangle starting from `n`.
    - Example for `n = 3`:
        ```
        3 2 1
        2 1
        1
        ```

11. **`Pattern3.c`**
    - Reads an integer `n`.
    - Prints `n` rows of repeated letters.
    - Each row `i` uses the `i`th letter starting from `A`.
    - Example for `n = 3`:
        ```
        A
        B B
        C C C
        ```

12. **`Pattern4.c`**
    - Reads an integer `a`.
    - Prints a pyramid of `*` characters with `a` rows.
    - Each row `i` contains `2*i - 1` stars.

### Assignment 03 Problems (`PhitronOj/AssignMent03/`)

13. **`Count_Before_One.c`**
    - Reads an integer `a` and an array of `a` integers.
    - Counts how many elements come before the first occurrence of `1`.
    - Example: input `5 2 3 1 4 5` prints `2`.

14. **`Even_and_Odd.c`**
    - Reads an integer `a` and an array of `a` integers.
    - Counts the number of even and odd numbers (note: the code swaps even/odd counts).
    - Prints the counts separated by space.

15. **`Is_Palindrome.c`**
    - Reads a string.
    - Checks if the string is a palindrome.
    - Prints "Palindrome" or "Not Palindrome".

16. **`Pattern.c`**
    - Reads an integer `a`.
    - Prints a diamond pattern with `a` rows (increasing then decreasing), using `#` for odd rows and `-` for even rows.

17. **`Pattern_2.c`**
    - Reads an integer `a`.
    - Prints a right-aligned numeric triangle with decreasing numbers.
    - Example for `n = 3`:
        ```
          1
         21
        321
        ```

### Final Exam C Problems (`PhitronOj/FinalExamC/`)

18. **`Difference_Array.c`**
    - Reads `t` test cases.
    - For each test case, reads `n` integers.
    - Sorts the array, then computes the absolute difference between each element in the original array and the sorted array.
    - Prints the resulting difference array.

19. **`Find_the_Missing_Number.c`**
    - Reads `r` test cases.
    - For each test case, reads 4 integers `a, b, c, d`.
    - Computes `product = b * c * d`.
    - If `a` is divisible by `product`, prints `a / product`.
    - Otherwise, prints `-1`.

20. **`Jadu_Matrix.c`**
    - Reads matrix dimensions `r` and `c`.
    - Reads a matrix of size `r x c`.
    - Checks if the matrix is a "Jadu Matrix" (square matrix with 1s on both diagonals and 0s everywhere else).
    - Prints "YES" or "NO".

21. **`Magical_Tree.c`**
    - Reads an integer `n`.
    - Prints a tree shape: a triangular canopy and a trunk.
    - Canopy height is `(n + 11) / 2`.
    - Trunk is 5 rows tall and `n` characters wide.

22. **`Matrix_Again.c`**
    - Reads matrix dimensions `r` and `c`.
    - Reads a matrix of size `r x c`.
    - Prints the last row of the matrix.
    - Prints the last column of the matrix.

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
gcc PhitronOj/AssignMent03/Count_Before_One.c -o Count_Before_One
gcc PhitronOj/AssignMent03/Even_and_Odd.c -o Even_and_Odd
gcc PhitronOj/AssignMent03/Is_Palindrome.c -o Is_Palindrome
gcc PhitronOj/AssignMent03/Pattern.c -o AssignMent03_Pattern
gcc PhitronOj/AssignMent03/Pattern_2.c -o AssignMent03_Pattern_2
gcc PhitronOj/FinalExamC/Difference_Array.c -o Difference_Array
gcc PhitronOj/FinalExamC/Find_the_Missing_Number.c -o Find_the_Missing_Number
gcc PhitronOj/FinalExamC/Jadu_Matrix.c -o Jadu_Matrix
gcc PhitronOj/FinalExamC/Magical_Tree.c -o Magical_Tree
gcc PhitronOj/FinalExamC/Matrix_Again.c -o Matrix_Again
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
./Count_Before_One
./Even_and_Odd
./Is_Palindrome
./AssignMent03_Pattern
./AssignMent03_Pattern_2
./Difference_Array
./Find_the_Missing_Number
./Jadu_Matrix
./Magical_Tree
./Matrix_Again
```

## Notes

- The problem solutions are simple, beginner-level C programs.
- The repository also contains some `.cph/` files for IDE integration, but the main implementations are in `PhitronOj/`.
