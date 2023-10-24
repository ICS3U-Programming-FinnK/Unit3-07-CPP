// Created by : Finn Kitor
// Created on : October 24th, 2023
// this program tells the user if they are older then 25 or younger then 40 to get married.

#include <iostream>

int main() {
    int older_age, younger_age;
    // user inputs the age of the person who wants to get married
    std::cout << "Enter your age if you are older than 25: ";
    std::cin >> older_age;

    std::cout << "Enter your age if you are younger than 40: ";
    std::cin >> younger_age;

    std::cout << std::endl;
    // terminal will process of the age is older then 25 and younger then 40
    if (younger_age >= 25 && older_age >= 25) {
        std::cout << "You can get married!" << std::endl;
    } else {
        std::cout << "You cannot get married." << std::endl;
    }

    return 0;
}
