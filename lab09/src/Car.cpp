#include "Car.h"
#include <iostream>

using namespace std;

void Car::Print() const{
    cout<<"typ: "<<_x<<", ilosc sztuk: "<<_y<<endl;

}
void Car::SetCard(int n) {
    _y=n;
}

//nowe

int Compare(const Car& a,const Car& b){
    if(a._y<b._y)
        return -1;
    else    
        return 1;
}
std::string Car::ToString() const{
    return  "<typ="+to_string(_x)+", ilosc="+to_string(_y)+">";
}