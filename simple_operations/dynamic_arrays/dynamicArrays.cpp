#include <stdio.h>
#include <iostream>

//Simple program to illustrate the usage of dynamic arrays

int specifySize()
{
    int size;
    std::cout << "Please insert the size of your array: \n";
    std::cin >> size;

    return size;
}

void createDynamicArray()
{
    int arraySize = specifySize();

    //Create a dynamic array
    //In order to create a new dynamic array, we use the keyword new
    //We declare a pointer to the new dynamic array

    int* myArray = new int [arraySize];

    //Fill in the array
    for(int i = 0; i < arraySize; i++)
    {
        std::cin >> myArray[i];
    }

    std::string choice;
    std::cout << "Do you still wish to add content to the array?\n";
    std::cin >> choice;

    if(choice == "y" || choice == "yes")
    {
        delete[]myArray;
        myArray = NULL;
        specifySize();
    }
    else {
        delete[]myArray;
        myArray = NULL;
    }
}