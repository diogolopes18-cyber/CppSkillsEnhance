#include <iostream>
#include <string>
#include "simple_operations.h"
#include "credit_card_verifier/CreditCardInfo.h"

int main() {

    //Call to class method
    specifyCreditCardInfo();

    std::cout << "Welcome, select a number please\n1 - Even number\n2 - String finder\n3 - Work with arrays" << std::endl;
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
    }

    return 0;
}