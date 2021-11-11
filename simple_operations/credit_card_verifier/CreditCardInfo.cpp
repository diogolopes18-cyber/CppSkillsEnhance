#include <string>
#include <iostream>
#include <map>
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

    //Defines a dictionary with the available types of IIN numbers for credit cards
    /*std::map<char, int> availableTypes = {
            {'A', 3},
            {'V', 4},
            {'M', 5},
            {'D', 6}
    };*/

    int availableTypes[] = {3, 4, 5, 6};
    long int digits[15];

    for(int i = 0; i < 15; i++)
    {
        digits[i] = creditCardNumber % 10;
        creditCardNumber /= 10;
    }

    std::cout << digits[0];
    //STILL NEED FIX

    //Loop through map to find a match between the first number
    // in the credit card and the values of the keys in the map
    for(int cardNum = 0; cardNum < 3; cardNum++)
    {
        if( digits[0] == availableTypes[cardNum])
        {
            switch (digits[0]) {
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
}