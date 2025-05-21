# IsPrime Program

This is a simple C program that helps you determine whether a number is prime or not. It's part of a collection of C programming exercises designed to help you learn and practice programming concepts.

## What Is a Prime Number?

A prime number is an integer greater than 1 whose only positive divisors are 1 and itself. Examples: 2, 3, 5, 7, 11…
Non-primes (composite numbers) have additional divisors: e.g. 12 is divisible by 2, 3, 4, 6.

### Finding vs. Checking

**Finding primes:** Generate all primes in a range (e.g. 1…N) → often uses sieving (e.g. Sieve of Eratosthenes).

**Checking primality:** Determine whether one specific number n is prime → typically uses trial division or more advanced tests.

### Common Primality-Testing Methods
1. Trial Division
    - Divide n by all integers from 2 up to √n.
    - If any division is exact (n % i == 0), n is composite.
    - Simple but O(√n) time.

2. Optimized Trial Division
    - Only test i = 2, then odd i from 3 to √n.
    - Skip even divisors to halve operations.
    - Skip even divisors to halve operations.

3. Sieve-Based Check

    - Precompute primes up to √n by sieve, then divide by that prime list.

4. Probabilistic Tests (for very large n)

    - Fermat test, Miller–Rabin → trade tiny error probability for speed (poly-logarithmic time).


## Algorithmic Definition
**Input:** Integer n.

**Output:** Boolean isPrime (true if n is prime; false otherwise).

**Constraints:** n may be negative, zero, or positive.

### Algorithm:

If n ≤ 1, immediately return false (not prime).

Initialize isPrime ← true.

For each integer i from 2 up to ⌊√n⌋:

If n mod i == 0, set isPrime ← false and exit loop.

Return isPrime.

### Pseudocode

```pseudocode
FUNCTION CheckPrime(n):
    IF n ≤ 1 THEN
        RETURN false
    END IF

    maxDivisor ← floor(sqrt(n))
    FOR i FROM 2 TO maxDivisor DO
        IF n mod i == 0 THEN
            RETURN false
        END IF
    END FOR

    RETURN true
END FUNCTION
```

## Types and Variables in C Implementation

```
#include <stdio.h>
#include <math.h>      // optional, for clarity if using sqrt()

int main() {
    int num;           // holds the user's input
    int isPrime = 1;   // flag: 1 = prime, 0 = not prime
    int i;             // loop counter

    printf("Please write an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        // only need to test up to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number!\n", num);
    else
        printf("%d is not a prime number!\n", num);

    return 0;
}
```

### Variable Descriptions

- `num`: stores the integer input by the user
- `isPrime`: acts as a boolean (1 = true, 0 = false)
- `i`: loop variable for trial division
- `scanf("%d", &num)`: reads one integer; error-checks against non-numeric input
- `i * i <= num`: avoids calling sqrt() by comparing squares, slightly faster

## Usage

To get started with this program:

1. Download the source files to your local machine
2. Open the files in your favorite code editor (like VSCode, Cursor, or vim)
3. Compile the program using gcc:
   ```bash
   gcc main.c -o isPrime
   ```
4. Run the compiled program:
   ```bash
   ./isPrime
   ```

Feel free to modify the code and experiment with different implementations. The program will prompt you to enter a number and tell you whether it's prime or not.