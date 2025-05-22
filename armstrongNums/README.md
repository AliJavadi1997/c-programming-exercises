# Armstrong Numbers Program

This is a simple C program that generates all three-digit Armstrong numbers. It's part of a collection of C programming exercises designed to help you learn and practice programming concepts.
[Return to C Programming Exercises](https://github.com/AliJavadi1997/c-programming-exercises/blob/main/README.md)

## What Is an Armstrong Number?

An Armstrong number (also known as a narcissistic number) is a number that is the sum of the cubes of its digits. For three-digit numbers, this means:

```
153 = 1^3 + 5^3 + 3^3
370 = 3^3 + 7^3 + 0^3
371 = 3^3 + 7^3 + 1^3
407 = 4^3 + 0^3 + 7^3
```

### Common Approaches to Finding Armstrong Numbers

1. **Digit Extraction**: Extract each digit using the modulus operator (`%`) and integer division.
2. **Range Iteration**: Loop through the fixed range of three-digit numbers (100–999).
3. **Power Calculation**: Compute the cube of each digit and accumulate the sum.

## Algorithmic Definition

**Input:** None (the program checks numbers from 100 to 999).
**Output:** Prints all three-digit Armstrong numbers found in the range.

### Algorithm:

1. For each number `num` from 100 to 999:

   1. Set `original ← num` and `sum ← 0`.
   2. While `original > 0`:

      * `digit ← original % 10`
      * `sum ← sum + digit^3`
      * `original ← original / 10`
   3. If `sum = num`, print `num`.

### Pseudocode

```pseudocode
FOR num FROM 100 TO 999 DO
    original ← num
    sum ← 0
    WHILE original > 0 DO
        digit ← original % 10
        sum ← sum + digit^3
        original ← original / 10
    END WHILE
    IF sum = num THEN
        PRINT num
    END IF
END FOR
```

## Types and Variables in C Implementation

* `int num`: current number in the range being evaluated.
* `int digit`: individual digit extracted from the number.
* `int original`: copy of `num` used for digit extraction without modifying `num`.
* `int sum`: accumulator for the sum of cubes of the digits.

## Usage

To compile and run this program on your local machine:

1. **Compile** the source code:

   ```bash
   gcc main.c -o armstrongNumbers
   ```
2. **Run** the compiled program:

   ```bash
   ./armstrongNumbers
   ```

The program will output the three-digit Armstrong numbers to the console.
