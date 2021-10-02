//
// Created by diogo on 02/10/2021.
//

#ifndef UNTITLED_SIMPLE_OPERATIONS_H
#define UNTITLED_SIMPLE_OPERATIONS_H

#endif //UNTITLED_SIMPLE_OPERATIONS_H


int choose_num(int num);
void findIndexOnString(std::string myString);
int workWithArrays(int size);

int choose_num(int num)
{
    if(num % 2 == 0)
        std::cout << "Your number is even\n";

    else
        std::cout << "Your number is odd\n";

    std::cout << "You chose the number: " << num << std::endl;
    return num;
}

void findIndexOnString(std::string myString)
{
    if(myString == "")
        exit(-1);
    else
    {
        std::string string_choice;

        //Check which word to find in a sentence
        std::cout << "Which word you want to find in the sentence?\n";
        getline(std::cin, string_choice);

        //Find word
        std::cout << "Your word is at index: \n" << myString.find(string_choice);
    }
}

int workWithArrays(int size)
{
    double myArray [size];
    int cnt = 0;

    for(int i = 0; i<size; i++)
    {
        myArray[i] = cnt;
        cnt++;
        std::cout << myArray[i] << std::endl;
    }

    return 0;
}