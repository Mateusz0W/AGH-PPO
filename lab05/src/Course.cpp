#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(){
    _x=0; _y=0;
}

void Course::Presentation(){
    cout<<"### Prezentacja kursu ###"<<endl<<endl;
    cout<<"Nazwa "<<_Name<<endl;
    cout<<"Liczba punktow wewnetrznych za kurs: "<<_x<<endl;
    cout<<"Liczba punktow ECTS za kurs: "<<_y<<endl;

}
void Course::SetName(string name){
    _Name=name;
}
Course::Course(std::string name){
    _Name=name;
    _x=0;
    _y=0;
}
void Course::SetX(double x){
    _x=x;
}
void Course::SetY(double y){
    _y=y;
}
Course::Course(std::string name,double x,double y ){
     _Name=name;
     _x=x;
     _y=y;
}