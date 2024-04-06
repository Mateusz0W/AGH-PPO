#include "CarRental.h"


std::ostream& operator<<(std::ostream& os,const CarRental& carRental){
 os << "---" << std::endl;
    os << "# Zawartosc/sklad:" << std::endl;
    if (carRental._vec.empty()) {
        os << "BLAD: Pusto !" << std::endl;
    } else {
        for (const auto& car : carRental._vec) {
            os << car;
        }
    }
    os << "---" << std::endl;
    return os;
}
void CarRental::Add(const Car& car){
    _vec.push_back(car);
}
void CarRental::Remove(){
    if(!_vec.empty())
        _vec.pop_back();
}
Car& CarRental::operator[](int value){
    return _vec[value];
}
CarRental& CarRental::operator-(int value){
    for(auto &car : _vec)
        car-value;
    return *this;
}
CarRental& CarRental::operator+(int value){
    for(auto &car : _vec)
        car+value;
    return *this;
}
CarRental& CarRental::operator*(int value){
    for(auto &car : _vec)
        car*value;
    return *this;
}
void CarRental::Clear(){
    _vec.clear();
}