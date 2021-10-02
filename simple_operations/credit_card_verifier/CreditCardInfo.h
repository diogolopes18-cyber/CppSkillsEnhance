#ifndef CREDIT_CARD_VERIFIER_CARDINFO_H
#define CREDIT_CARD_VERIFIER_CARDINFO_H

#include <string>
#include <iostream>

class CreditCard
{
public:
    int creditCardNumber;
    int cvcNumber;
    std::string bankNam;

    //Create a constructor
    CreditCard(int cardNumber, int cvcNum, std::string name){
        creditCardNumber = cardNumber;
        cvcNumber = cvcNum;
        bankNam = name;
    }

    bool creditCardIsValid(int creditCardNumber);
    std::string typeOfCard(int creditCardNumber);
};

void specifyCreditCardInfo();

#endif //CREDIT_CARD_VERIFIER_CARDINFO_H
