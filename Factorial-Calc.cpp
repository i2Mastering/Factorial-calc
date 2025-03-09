// Factorial Calculation in C++
// Author: Ike Iloegbu

#include <iostream>

/**
 * Calculates the factorial of a given positive integer.
 *
 * @return 0 upon successful execution.
 */
int fact() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    
    // Validate input to ensure non-negative integer
    while (n < 0) {
        std::cout << "Sorry, only positive numbers are allowed. Enter again: ";
        std::cin >> n;
    }
    
    // Handle base case where factorial of 0 is 1
    if (n == 0) {
        std::cout << "The factorial of 0 is 1" << std::endl;
    } else {
        // Compute factorial using iterative approach
        long double f = 1;
        for (int i = 1; i <= n; ++i) {
            f *= i;
        }
        
        // Display the factorial result
        std::cout << "The factorial of " << n << " is " << f << std::endl;
    }
    return 0;
}

/**
 * Main function to execute the factorial calculation.
 *
 * @return 0 upon successful execution.
 */
int main() {
    fact();
    return 0;
}

