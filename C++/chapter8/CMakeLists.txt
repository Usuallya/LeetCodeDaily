cmake_minimum_required(VERSION 3.12)
project(chapter8)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chapter8
        Account.cpp
        Account.h
        AccountException.cpp
        AccountException.h
        Accumulator.cpp
        Accumulator.h
        CreditAccount.cpp
        CreditAccount.h
        Date.cpp
        Date.h
        main.cpp
        SavingsAccount.cpp
        SavingsAccount.h)
