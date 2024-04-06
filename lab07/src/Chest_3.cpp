  #include "Chest_3.h"
  #include <iostream>

using namespace std;
  
Chest_3::Chest_3(int i){
  _tab= new int [i];
  _size=0;
  _size2=0;
}
int Chest_3::Remove(){
  int r;
  int *new_tab;
    if(_size!=0){
      _size--;
      if(_size==0){
        _tab=nullptr;
        return 0;
      }
      else {
        _size2++;
        new_tab=new int [_size];
        r= _tab[_size+1];
        for(int i=0;i<_size;i++)
            new_tab[i]=_tab[i];
        delete []_tab;
        _tab=new_tab;
          return r;
      }

    }
  else{ 
      cout<<"#BLAD: Obiekt pusty\n";
        return 0;
  }
       

}
std::string Chest_3::IsEmpty(){
    string zero="0";
    string one="1";
    if(_size==0)
        return one;
    else    
        return zero;

}
std::string Chest_3::IsFull(){
    string zero="0";
    string one="1";
     if(_size==4)
        return one;
    else    
        return zero;
}
void Chest_3::Add(int i){
  
  int *New_tab=new int[_size+1];
  for(int j=0;j<_size;j++)
    New_tab[j]=_tab[j];
  _size++;
  New_tab[_size-1]=i;
  delete  [] _tab;
  _tab=New_tab;

  
}
void Chest_3::Print(){
    cout<<"#Zawartosc obiektu:\n";
    for(int i=0;i<_size;i++)
        cout<<_tab[i]<<",";
    cout<<endl;

}
 int Chest_3::Size(){
   return _size;
 }
void Chest_3::Clear(){
  delete [] _tab;
  _tab=nullptr;
  _size = 0;
}
Chest_3::~Chest_3(){
   delete [] _tab;
}
