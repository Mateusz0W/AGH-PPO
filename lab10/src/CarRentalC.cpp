#include "CarRentalC.h"

CarRentalC& CarRentalC::operator=(CarRentalC&& other) noexcept {
    if (this != &other) {
        delete[] tab;
        tab = other.tab;
        _size = other._size;
        _minimum = other._minimum;
        other.tab = nullptr;
        other._size = 0;
        other._minimum = 0;
    }
    return *this;
}


CarRentalC& CarRentalC::operator=(const CarRentalC& other){
    if(this!= &other){
        delete [] tab;
        _size=other._size;
        _minimum=other._minimum;
        tab=new Car[_minimum];
         for(int i=0;i<_size;i++)
                tab[i]=other.tab[i];
    }
    return *this;
}

CarRentalC::~CarRentalC() {
    delete[] tab;
}

void CarRentalC::Add(const Car& car) {
    if (_size == _minimum) {
        Resize();
    }
    tab[_size++] = car;
}

void CarRentalC::Remove() {
    if (_size > 0) {
        --_size;
    } else {
        std::cout << "BLAD: Pusto!" << std::endl;
    }
}

void CarRentalC::Clear() {
    _size = 0;
}

void CarRentalC::Print() const {
    std::cout << "---" << std::endl;
    std::cout << "# Zawartosc/sklad:" << std::endl;
        for (size_t i = 0; i < _size; ++i) {
            tab[i].Print();
        }
    std::cout << "---" << std::endl;
}
int CarRentalC::GetSize(){
    return _size;
}
int CarRentalC::GetMinimum(){
    return _minimum;
}

void CarRentalC::Resize() {
    int _minimum=GetMinimum();
    int _size=GetSize();
    _minimum ++;
    Car* newTab = new Car[_minimum];
    for (size_t i = 0; i < _size; ++i) {
        newTab[i] = tab[i];
    }
    delete[] tab;
    tab = newTab;
}

