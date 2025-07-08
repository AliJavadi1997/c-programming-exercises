# Quadratic Equation Solver

This program solves quadratic equations of the form `ax^2 + bx + c = 0`. It is part of the C programming exercises collection.
[Return to C Programming Exercises](https://github.com/AliJavadi1997/c-programming-exercises/blob/main/README.md)

## What Is a Quadratic Equation?

A quadratic equation includes an `x^2` term and can have one or two real or complex roots. The standard form is `ax^2 + bx + c = 0` where `a`, `b`, and `c` are coefficients and `a` is nonzero for a true quadratic.

### Common Solution Methods

1. **Factoring** – works if the quadratic factors nicely.
2. **Completing the Square** – rewrites the equation as `(x + p)^2 = q`.
3. **Quadratic Formula** – reliable for any coefficients: `x = (-b ± √(b^2 - 4ac)) / (2a)`.

This program implements the quadratic formula and also handles the degenerate linear case when `a` is zero.

## Algorithmic Definition

**Input:** Coefficients `a`, `b`, and `c` entered by the user.

**Output:** The real or complex roots of the equation, or a message if no valid equation exists.

### Algorithm

1. Read `a`, `b`, and `c` from standard input.
2. If `a` equals `0`, treat the equation as linear:
   - If `b` is also `0`, print "Not an equation".
   - Otherwise compute `x = -c / b`.
3. Otherwise compute the discriminant `d = b^2 - 4ac` and `two_a = 2a`.
   - If `d > 0`, print two real roots.
   - If `d == 0`, print one repeated real root.
   - If `d < 0`, print two complex conjugate roots using the imaginary part `√(-d) / two_a`.

### Pseudocode

```pseudocode
READ a, b, c
IF a == 0 THEN
    IF b == 0 THEN
        PRINT "Not an equation"
    ELSE
        x ← -c / b
        PRINT x
    END IF
ELSE
    d ← b*b - 4*a*c
    two_a ← 2*a
    IF d > 0 THEN
        x1 ← (-b + sqrt(d)) / two_a
        x2 ← (-b - sqrt(d)) / two_a
        PRINT x1, x2
    ELSE IF d == 0 THEN
        x ← -b / two_a
        PRINT x
    ELSE
        real ← -b / two_a
        imag ← sqrt(-d) / two_a
        PRINT real ± imag * i
    END IF
END IF
```

## Types and Variables in C Implementation

- `double a, b, c` – coefficients entered by the user.
- `double discriminant` – value of `b*b - 4*a*c`.
- `double two_a` – denominator `2*a` for the formula.
- `double realPart, imagPart` – used for complex solutions when `discriminant` is negative.

## Usage

Compile and run the program with `gcc` (or your preferred C compiler):

```bash
gcc quadratic.c -lm -o quadratic
./quadratic
```

The program will prompt for `a`, `b`, and `c` and then display the corresponding roots.
