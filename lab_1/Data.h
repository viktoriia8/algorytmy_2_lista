#pragma once
#include<iostream>
#include<type_traits>

template <typename T>
class Data
{
public:
    T value;
    Data() {
        if (std::is_arithmetic<T>::value)
        {
            this->value = static_cast<T>(rand());
        }
        else {
            char randomChar = 'a' + (rand() % 26);
            this->value = static_cast<T>(randomChar);
        }
    };
    bool operator==(const Data<T>& other) const {
        return value == other.value;
    }
};