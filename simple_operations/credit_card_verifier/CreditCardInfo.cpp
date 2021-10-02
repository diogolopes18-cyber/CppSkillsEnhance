#include <string>
#include <iostream>
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
