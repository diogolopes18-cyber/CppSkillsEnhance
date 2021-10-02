#include <string>
#include <iostream>
#include "CreditCardInfo.h"

void specifyCreditCardInfo()
{
    CreditCard card;
    card.creditCardNumber = 2102120;
    card.cvcNumber = 222;
    card.bankNam = "CGD";

    std::cout << card.bankNam;
}