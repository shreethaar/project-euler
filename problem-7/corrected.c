#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int count = 6; // Start with the first 6 primes already known
    int current_number = 14; // Start checking from 14
    int last_prime = 0;

    while (count != 10001) {
        bool is_prime = true;

        for (int i = 2; i <= sqrt(current_number); i++) {
            if (current_number % i == 0) {
                is_prime = false;
                break; // Exit loop if not prime
            }
        }

        if (is_prime) {
            count++; // Increment count for a prime number
            last_prime = current_number; // Store the prime
        }

        current_number++; // Move to the next number
    }

    printf("The 10001st prime number is: %d\n", last_prime);
    return 0;
}
