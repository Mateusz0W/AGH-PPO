#include "Chest_4.h"
#include <iostream>

using namespace std;

Chest_4::Chest_4(){
    _size=0;
}
int Chest_4::Remove(){
    int r;
    if(_size!=0){
        r=_my_vector.back();
        _size--;
        _my_vector.pop_back();
        _my_vector.shrink_to_fit();
        return r;
    }
    else{
        cout<<"#BLAD: Obiekt pusty\n";
        return 0;
    }
}
std::string Chest_4::IsEmpty(){
    string zero="0";
    string one="1";
    if(_size==0)
        return one;
    else    
        return zero;

}
std::string Chest_4::IsFull(){
    string zero="0";
    string one="1";
     if(_size==4)
        return one;
    else    
        return zero;
}
void Chest_4::Add(int i){
    _size++;
   // _my_vector.push_back(i);
    _my_vector.insert(_my_vector.begin(),i);
}


void Chest_4::Print(){
    cout<<"#Zawartosc obiektu:\n";
    //for(auto it=_my_vector.begin();it!=_my_vector.end();it++)
       // cout<<*it<<",";
    for(auto it=_my_vector.rbegin();it!=_my_vector.rend();it++)
        cout<<*it<<",";
    cout<<endl;

}
int Chest_4::Size(){
    return _my_vector.size();
}
void Chest_4::Clear(){
    _size=0;
    _my_vector.clear();
}