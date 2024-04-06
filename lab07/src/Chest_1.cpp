#include "Chest_1.h"
#include<iostream>

using namespace std;

Chest_1::Chest_1(){
    _size=0;
    _size2=0;
}
int Chest_1::Remove(){
    if(_size!=0){
        _size--;
        _size2++;
        return _tab[_size+1];
    }
    else{
        cout<<"#BLAD: Obiekt pusty\n";
        return 0;
    }
}
std::string Chest_1::IsEmpty(){
    string zero="0";
    string one="1";
    if(_size==0)
        return one;
    else    
        return zero;

}
std::string Chest_1::IsFull(){
    string zero="0";
    string one="1";
    if(_size==4)
        return one;
    else    
        return zero;
}
void Chest_1::Add(int i){
    
    if(_size<4){
        _tab[_size]=i;
        _size++;
        }
    else{
        cout<<"#BLAD: Obiekt zapelniony\n";
    }
   // cout<<_size<<" "<<_size2<<endl;
    
}


void Chest_1::Print(){
    cout<<"#Zawartosc obiektu:\n";
    for(int i=_size2;i<_size+_size2;i++)
        cout<<_tab[i]<<",";
    cout<<endl;

}
int Chest_1::Size(){
    return _size;
}
void Chest_1::Clear(){
    _size=0;
}