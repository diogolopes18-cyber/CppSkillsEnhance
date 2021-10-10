#include <string>
#include <iostream>
#include <map>
#include <bits/stdc++.h>
#include "CreditCardInfo.h"

void specifyCreditCardInfo()
{
    char cardDetermine;

    //Create new object for class CreditCardInfo
    CreditCard card(20221232, 222, "CGD");
    if(card.creditCardIsValid(card.creditCardNumber) == true) {
        std::cout << "Valid card!" << std::endl;

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

void CreditCard::typeOfCard(int creditCardNumber) {

    //Defines a dictionary with the available types of IIN numbers for credit cards
    /*std::map<char, int> availableTypes = {
            {'A', 3},
            {'V', 4},
            {'M', 5},
            {'D', 6}
    };*/

    int availableTypes[] = {3, 4, 5, 6};
    int firstDigit = (creditCardNumber % 10) / 10;

    //STILL NEED FIX

    //Loop through map to find a match between the first number
    // in the credit card and the values of the keys in the map
    for(int cardNum = 0; cardNum < 3; cardNum++)
    {
        if( firstDigit == availableTypes[cardNum])
        {
            switch (firstDigit) {
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