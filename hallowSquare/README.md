# HallowSquare Program

This is a simple C program that generates a hollow square pattern using characters. It's part of a collection of C programming exercises designed to help you learn and practice programming concepts.
[Return to C Programming Exercises](https://github.com/AliJavadi1997/c-programming-exercises/blob/main/README.md)

## What Is a Hollow Square?

A hollow square is a pattern where only the border characters are printed, leaving the inside empty. For example, a 5×5 hollow square using '*' characters looks like:

```
*****
*   *
*   *
*   *
*****
```

The hollow square has characters on all four edges, with empty spaces in the middle.

### Pattern Recognition

Pattern printing exercises like this one help you learn:
- Nested loops (outer and inner loops)
- Conditional logic within loops
- Coordinate-based thinking (row, column relationships)
- Boundary conditions

### Common Approaches to Creating Patterns
1. Edge Detection
   - Check if the current position is on any edge of the square
   - If so, print the character; otherwise, print a space

2. Coordinate-Based Logic
   - Use row and column indices to determine what to print
   - First and last rows/columns get the pattern character

3. Mathematical Relationships
   - Express the pattern using mathematical relationships between indices

## Algorithmic Definition
**Input:** Integer n (size of the square).

**Output:** A hollow square pattern of size n×n.

**Constraints:** n must be a positive integer.

### Algorithm:

For each row i from 0 to n-1:
  For each column j from 0 to n-1:
    If i is 0 or i is n-1 or j is 0 or j is n-1:
      Print the pattern character
    Else:
      Print a space
  Print a newline after each row

### Pseudocode

```pseudocode
FUNCTION PrintHollowSquare(n, character):
    FOR i FROM 0 TO n-1 DO
        FOR j FROM 0 TO n-1 DO
            IF i = 0 OR i = n-1 OR j = 0 OR j = n-1 THEN
                PRINT character
            ELSE
                PRINT " "
            END IF
        END FOR
        PRINT newline
    END FOR
END FUNCTION
```

## Types and Variables in C Implementation

### Variable Descriptions

- `size`: stores the size of the square (number of rows and columns)
- `i`: loop variable for rows
- `j`: loop variable for columns
- `scanf("%d", &size)`: reads the size; error-checks against non-numeric or non-positive input

## Usage

To get started with this program:

1. Download the source files to your local machine
2. Open the files in your favorite code editor (like VSCode, Cursor, or vim)
3. Compile the program using gcc:
   ```bash
   gcc main.c -o hallowSquare
   ```
4. Run the compiled program:
   ```bash
   ./hallowSquare
   ```

The program will prompt you to enter the size of the square and the character to use. It will then display the hollow square pattern using your specified character.
