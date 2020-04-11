/*
 * CENTS CALCULATOR
 */

#include <iostream>

int main() {
    const int DOLLAR_VALUE {100};
    const int QUARTER_VALUE {25};
    const int DIME_VALUE {10};
    const int NICKEL_VALUE {5};
    const int PENNY_VALUE {1};
    int cents {};
    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;
    std::cout << "dollars:\t" << (cents / DOLLAR_VALUE) << std::endl;
    cents %= DOLLAR_VALUE;
    std::cout << "quarters:\t" << (cents / QUARTER_VALUE) << std::endl;
    cents %= QUARTER_VALUE;
    std::cout << "dimes:\t\t" << (cents / DIME_VALUE) << std::endl;
    cents %= DIME_VALUE;
    std::cout << "nickels:\t" << (cents / NICKEL_VALUE) << std::endl;
    cents %= NICKEL_VALUE;
    std::cout << "pennies:\t" << (cents / PENNY_VALUE) << std::endl;
    // In the end we should be left with no cents
    if (cents != 0) {
        std::cout << "There has been an error in the calculation.";
        exit(1);
    }
    return 0;
}
