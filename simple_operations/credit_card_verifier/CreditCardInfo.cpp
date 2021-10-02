#include <string>
#include <iostream>
#include <map>
#include "CreditCardInfo.h"

void specifyCreditCardInfo()
{
    //Without constructor
    /*CreditCard card;
    card.creditCardNumber = 2102120;
    card.cvcNumber = 222;
    card.bankNam = "CGD";*/

    //Create new object for class CreditCardInfo
    CreditCard card(20221232, 222, "CGD");
    if(card.creditCardIsValid(card.creditCardNumber) == true)
        std::cout << "Valid card!" << std::endl;
    else
        std::cout << "Invalid card! Please insert a new card";

}

bool CreditCard::creditCardIsValid(int creditCardNumber) {

    int cnt = 0;
    while(creditCardNumber != 0)
    {
        creditCardNumber /= 10;
        cnt++;
    }

    if (cnt != 16)
        perror("Should contain 16 digits!");
    else
        return true;

    return false;
}

std::string CreditCard::typeOfCard(int creditCardNumber) {

    //Defines a dictionary with the available types of IIN numbers for credit cards
    std::map<char, int> availableTypes = {
            {'American Express', 3},
            {'Visa', 4},
            {'MasterCard', 5},
            {'Diners Club', 6}
    };

    //STILL NEED FIX

    //Loop through map to find a match between the first number
    // in the credit card and the values of the keys in the map
    for (auto it=availableTypes.begin(); it!=availableTypes.end(); ++it)
    {
        if(availableTypes.value_comp(it) == creditCardNumber)
            std::cout << availableTypes.find(creditCardNumber);
    }
}