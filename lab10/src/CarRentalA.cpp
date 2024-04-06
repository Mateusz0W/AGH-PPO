#include "CarRentalA.h"
#include<iostream>


CarRentalA& CarRentalA::operator=(const CarRentalA& other) {
    if (this != &other) {
        myArray = other.myArray;
        _size = other._size;
    }
    return *this;
}

void CarRentalA::Add(const Car& car) {
    if (_size < myArray.size()) {
        myArray[_size++] = car;
    } else {
        std::cout << "BLAD: Przekroczono maksymalny rozmiar!" << std::endl;
    }
}

void CarRentalA::Remove() {
    if (_size > 0) {
        --_size;
    } else {
        std::cout << "BLAD: Pusto!" << std::endl;
    }
}

void CarRentalA::Print() const {
    std::cout << "---" << std::endl;
    std::cout << "# Zawartosc/sklad:" << std::endl;
    for (int i = 0; i < _size; ++i) {
        myArray[i].Print();
    }
    std::cout << "---" << std::endl;
}

void CarRentalA::Clear() {
    _size = 0;
}