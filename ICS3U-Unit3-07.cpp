// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Unit3-07.cpp File,
// learning and...or... statements in C++.

#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string age;
    int ageInt;

    // input
    std::cout << "Input your age: ";
    std::cin >> age;

    // process and output
    std::cout << "\n";
    try {
        ageInt = std::stoi(age);
        if (ageInt > 25 && ageInt < 40) {
            std::cout << "You are an acceptable age.";
        } else if (ageInt <= 0 || ageInt >= 120) {
            std::cout << "Type in a valid age.";
        } else {
            std::cout << "You are not an acceptable age.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, "
                  << "please try again following the requirements.";
    }

    std::cout << "\n\n\nDone.\n";
}
