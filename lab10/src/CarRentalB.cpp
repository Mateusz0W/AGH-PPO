#include "CarRentalB.h"


CarRentalB& CarRentalB::operator=(const CarRentalB& other){
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

CarRentalB::~CarRentalB() {
    delete[] tab;
}

void CarRentalB::Add(const Car& car) {
    if (_size == _minimum) {
        Resize();
    }
    tab[_size++] = car;
}

void CarRentalB::Remove() {
    if (_size > 0) {
        --_size;
    } else {
        std::cout << "BLAD: Pusto!" << std::endl;
    }
}

void CarRentalB::Clear() {
    _size = 0;
}

void CarRentalB::Print() const {
    std::cout << "---" << std::endl;
    std::cout << "# Zawartosc/sklad:" << std::endl;
        for (size_t i = 0; i < _size; ++i) {
            tab[i].Print();
        }
    std::cout << "---" << std::endl;
}
int CarRentalB::GetSize(){
    return _size;
}
int CarRentalB::GetMinimum(){
    return _minimum;
}

void CarRentalB::Resize() {
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

