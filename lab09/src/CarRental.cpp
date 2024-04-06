#include "CarRental.h"
#include <iostream>

using namespace std;


void CarRental::Print() const{
    cout<<"----\n";
    cout<<"# Zawartosc/sklad:\n";
    for(int i=0;i<_Vec.size();i++)
        _Vec[i].Print();
    cout<<"----\n";
}

void CarRental::Remove(){
     if(_Vec.size()==0)
    {
        cout<<"BLAD: Pusto !\n";
    }
    else{
        _Vec.pop_back();
    }
}
void CarRental::Add(Car& a){
    _Vec.push_back(a);
}
void CarRental::Clear(){
    _Vec.clear();
}
int CarRental::Get(int i) const{
    return _Vec[i].Get_y();
};