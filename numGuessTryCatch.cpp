// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Nov. 8, 2023
// This program asks the user to guess a randomly generated
// number then tells user if the guess was correct. It will
// also catch input errors with a try catch.

#include <cstdlib>
#include <iostream>

int main() {
    // define variables
    int answer;
    int guessAsInt;

    // set random number

    srand((unsigned)time(NULL));

    answer = rand() % 9 + 0;

    // get user input
    std::string guessAsString;

    std::cout << "Guess random number between 0 and 9 number: " << std::endl;
    std::cin >> guessAsString;
    std::cout << "";

    // check if guess is correct
    try {
        guessAsInt = std::stoi(guessAsString);

        if (guessAsInt == answer) {
            std::cout << "Your guess was correct!" << std::endl;
        } else {
            std::cout << "Your guess was incorrect!" << std::endl;
        }
    }   catch (std::invalid_argument) {
        std::cout << "Please enter a valid integer.";
    }

    std::cout << "The correct number was " << answer << std::endl;
}
