// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on January 2021
// This program takes a number and returns it's digits

#include <iostream>
#include <iomanip>
#include <string>
#include <list>


int digitList(std::list<int> &listOfDigits, int userInt) {
    // this function returns the digits

    // process
    while (userInt) {
        listOfDigits.push_front(userInt % 10);
        userInt /= 10;
    }
}


int main() {
    // this function gets user input and returns output
    std::cout << "This program takes a number and returns its digits."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string userInput;
    int userInt;
    std::list<int> listOfDigits;

    // input
    while (true) {
        try {
            std::cout << "Enter any number: ";
            std::cin >> userInput;
            userInt = std::stoi(userInput);
            std::cout << "" << std::endl;

            if (userInt > 0) {
                // call function
                digitList(listOfDigits, userInt);

                std::cout << "The digits that make up "
                          << userInput << " are:" << std::endl;
                std::cout << "" << std::endl;

                // printing out each digit from the list
                std::cout << "[";

                for (int digits : listOfDigits) {
                    std::cout << digits;
                    std::cout << ", ";
                }

                std::cout << "]" << std::endl;

                break;

            } else {
                std::cout << "Enter a positive integer," <<
                             " try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Enter a number, try again."
                      << std::endl;
        }
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
