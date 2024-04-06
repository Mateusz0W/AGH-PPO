#include "Chest_2.h"
#include<iostream>

using namespace std;

Chest_2::Chest_2(){
    _size=0;
}
int Chest_2::Remove(){
    if(_size!=0){
        _size--;
        _size2++;
        return _myarray[_size+1];
    }
    else{
        cout<<"#BLAD: Obiekt pusty\n";
        return 0;
    }
    
}
std::string Chest_2::IsEmpty(){
    string zero="0";
    string one="1";
    if(_size==0)
        return one;
    else    
        return zero;

}
std::string Chest_2::IsFull(){
    string zero="0";
    string one="1";
    if(_size==4)
        return one;
    else    
        return zero;
}
void Chest_2::Add(int i){
    if(_size<4){
        _myarray[_size]=i;
        _size++;
        }
    else{
        cout<<"#BLAD: Obiekt zapelniony\n";
    }
    
}


void Chest_2::Print(){
    cout<<"#Zawartosc obiektu:\n";
    for(int i=0;i<_size;i++)
        cout<<_myarray[i]<<",";
    cout<<endl;

}
int Chest_2::Size(){
    return _size;
}
void Chest_2::Clear(){
    _size=0;
}