#include <iostream>
#include <string>
#include "simple_operations.h"
#include "credit_card_verifier/CreditCardInfo.h"
#include "dynamic_arrays/dynamicArrays.h"

int main() {

    std::cout << "Welcome, select a number please\n1 - Even number\n2 - String finder\n3 - Work with arrays\n4 - Credit Card Verifier\n5 - Dynamic Arrays" << std::endl;
    int choice, menu;
    std::string myStringChoice;

    //Choose menu
    std::cin >> menu;

    switch (menu) {
        case 1:
            {
                std::cout << "Please select a number\n";
                std::cin >> choice;
                choose_num(choice);
            }
            break;

        case 2:
        {
            std::cout << "Please insert a sentence of your choice\n";
            std::cin >> myStringChoice;
            findIndexOnString(myStringChoice);
        }
            break;

        case 3:
            workWithArrays(20);
            break;

        case 4:
            specifyCreditCardInfo();
            break;

        case 5:
            createDynamicArray();
            break;
    }

    return 0;
}