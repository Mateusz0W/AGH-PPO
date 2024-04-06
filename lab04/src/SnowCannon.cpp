#include"SnowCannon.h"
#include <iostream>


using namespace std;

void SnowCannon::SetID(int id){
    ID=id;
}
void SnowCannon::SetState(bool state){
    STATE=state;
}
void SnowCannon::SetCapacity(double capacity){
    CAPACITY=capacity;
}
void SnowCannon::SetConsumption(double consumption){
    CONSUMPTION=consumption;
}
void SnowCannon::SetWater(double water){
    WATER=water;
}
 void SnowCannon::Presentation(){
    cout<<"### Prezentacja ###"<<endl;
    cout<<"Identyfikator armatki snieznej: "<<ID<<endl;
    if(STATE!=true)
        cout<<"Armatka sniezna jest wylaczona"<<endl;
    else 
        cout<<"Armatka sniezna jest wlaczona"<<endl;
    cout<<"Pojemnosc zbiornika armatki wynosi "<<CAPACITY<<" metrow szesciennych"<<endl;
    cout<<"Srednia wydajnosc wynosi "<<CONSUMPTION<<" metrow szesciennych wody na 1 metr szescienny sniegu"<<endl;
    cout<<"W zbiorniku armatki jest "<<WATER<<" metrow szesciennych wody"<<endl<<endl;

 }
 void SnowCannon::Make(double amount){
    cout<<"### Robienie sniegu ###"<<endl<<endl;
    if(amount>0){
        if(STATE)
            cout<<"armatka wlaczanoa"<<endl;
        else
            cout<<"BLAD: Wlacz armatke sniezna"<<endl;
    }
    else{
        cout<<"BLAD: Niepoprawna ilosc metrow szesciennych"<<endl;
    }
   
 }
 void SnowCannon::Start(){
    cout<<"### Uruchomienie armatki snieznej ###"<<endl<<endl;
      if (!STATE && WATER > 0) {
        STATE = true;
        cout << "armatka zostala wloczona" << endl;
    } else if (WATER <= 0) {
        cout << "BLAD: Brak wody, dolej do zbiornika zasilajacego" << endl;
    }

 }
 void SnowCannon::Reload(double water){
    cout<<"### Uzupelnienie zbiornika armatki snieznej woda ###"<<endl<<endl;
    WATER=water;
    cout<<"Uzupelniles "<< WATER<<"metrow szesciennych wody";
 }
void SnowCannon::Stop(){
    
}

