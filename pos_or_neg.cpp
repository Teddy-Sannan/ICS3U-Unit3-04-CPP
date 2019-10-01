// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 2019
// This program says if a number is pos or neg

#include <iostream>

int main() {
    // variable declaration
    int number;

    // input
    std::cout << "Please enter a posistve or negative number: ";
    std::cin >> number;

    // process & output
    if (number < 0) {
        std::cout << "" << std::endl;
        std::cout << "-"<< std::endl;
    } else if (number == 0) {
        // output
        std::cout << "" << std::endl;
        std::cout << "0"<< std::endl;
    } else {
        // output
        std::cout << "" << std::endl;
        std::cout << "+"<< std::endl;
    }
}
