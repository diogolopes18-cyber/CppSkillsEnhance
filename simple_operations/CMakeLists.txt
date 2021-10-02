cmake_minimum_required(VERSION 3.20)
project(simple_operations)

set(CMAKE_CXX_STANDARD 14)

add_executable(simple_operations main.cpp simple_operations.h
        credit_card_verifier/CreditCardInfo.cpp
        credit_card_verifier/CreditCardInfo.h)
