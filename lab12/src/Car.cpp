#include "Car.h"


 std::ostream& operator<<(std::ostream& out,const Car& car){
    out<<"typ: "<<car._x<<", ilosc sztuk: "<<car._y<<std::endl;
    return out;
 }
  Car& Car::operator++(){
    ++_y;
    return *this;
 }
 const Car Car::operator++(int){
    ++_y;
    return *this;
 }
 Car& Car::operator--(){
    if(_y>0)
        --_y;
    return *this;
 }
 const Car Car::operator--(int){
    if(_y>0)
        --_y;
    return *this;
 }
 Car& Car::operator+(int value){
     _y+=value;
     return *this;
 }
 Car& Car::operator-(int value){
    if(_y>=value)
        _y-=value;
    else
         _y=0;
     return *this;
 }
 Car& Car::operator*(int value){
     _y*=value;
     return *this;
 }