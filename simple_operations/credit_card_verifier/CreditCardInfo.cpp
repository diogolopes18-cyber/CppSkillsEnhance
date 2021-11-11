#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include "CreditCardInfo.h"

void specifyCreditCardInfo()
{
    char cardDetermine;
    long int creditNumber;

    //Insert card number
    std::cout << "Please insert your card number" << std::endl;
    std::cin >> creditNumber;

    //Create new object for class CreditCardInfo
    CreditCard card(creditNumber, 222, "CGD");
    if(card.creditCardIsValid(card.creditCardNumber)) {
        std::cout << "Valid card!\n";

        //Choose to proceed with card determination
        std::cout << "Proceed with card determination?\n";
        std::cin >> cardDetermine;

        if(cardDetermine == 'y')
            card.typeOfCard(card.creditCardNumber);
        else
            std::cout << "Exiting";
    }

    else
        std::cout << "Invalid card! Please insert a new card\n";
}

bool CreditCard::creditCardIsValid(long int creditCardNumber) {

    std::string nums = std::to_string(creditCardNumber);
    int numDigits = nums.length();

    if (numDigits != 16)
    {
        return false;
    }
    else
        return true;
}

int firstDigitCard(long int creditCardNumber) {

    int digits = (int)log10(creditCardNumber);
    creditCardNumber = (int)(creditCardNumber / pow(10, digits));

    return creditCardNumber;
}

void CreditCard::typeOfCard(long int creditCardNumber) {

    int availableTypes[4] = {3, 4, 5, 6};
    int first_digit = firstDigitCard(creditCardNumber);
    bool firstDigitExists = std::find(std::begin(availableTypes),
                                      std::end(availableTypes), first_digit) != std::end(availableTypes);

    int availableTypes[] = {3, 4, 5, 6};
    long int digits[15];

    if(firstDigitExists == true)
    {
        switch (first_digit) {
            default:
                std::cout << "No matching card";
                break;

            case 3:
                std::cout << "American Express Card" << std::endl;
                break;

            case 4:
                std::cout << "Visa Card" << std::endl;
                break;

            case 5:
                std::cout << "MasterCard" << std::endl;
                break;

            case 6:
                std::cout << "Diners Club Card" << std::endl;
                break;
        }
    }

    else
        exit(-1);

}