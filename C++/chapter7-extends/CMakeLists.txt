cmake_minimum_required(VERSION 3.12)
project(chapter7_extends)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter7_extends main.cpp Account.cpp Account.h SavingsAccount.cpp SavingsAccount.h Accumulator.cpp Accumulator.h CreditAccount.cpp CreditAccount.h Date.cpp Date.h)