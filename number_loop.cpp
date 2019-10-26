// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This is program loop number adder

#include <iostream>
#include <string>

main() {
    // This will calculate the number added up to number

    // variables
    int answer = 0;
    int repeater = 0;
    int number = 0;

    // Welcome statement
    std::cout << "Welcome, I will add up numbers up to the number that you tell"
                 " me." << std::endl;
    std::cout << "Ex. 1 + 2 + 3 + 4 = 13" << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is your number: " << std::endl;
    std::cin >> number;

    // process & output
    while (repeater <= number) {
        answer = answer + repeater;
        repeater += 1;
    }
    std::cout << "The answer is " << answer << "." << std::endl;
}
