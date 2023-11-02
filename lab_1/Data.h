#pragma once
#include<iostream>
#include<type_traits>

template <typename T1>
class Data
{
public:
    T1 value;
    Data() {
        if (std::is_arithmetic<T1>::value)
        {
            this->value = static_cast<T1>(rand());
        }
        else {
            char randomChar = 'a' + (rand() % 26);
            this->value = static_cast<T1>(randomChar);
        }
    };
};