#ifndef CREDIT_CARD_VERIFIER_CARDINFO_H
#define CREDIT_CARD_VERIFIER_CARDINFO_H

#include <string>
#include <iostream>

class CreditCard
{
public:
    double creditCardNumber;
    int cvcNumber;
    std::string bankNam;
};

void specifyCreditCardInfo();

#endif //CREDIT_CARD_VERIFIER_CARDINFO_H
