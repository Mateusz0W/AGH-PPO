#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(){
  _num_courses=0;
}

void Student::Presentation(){
  cout<<"### Prezentacja studenta ###"<<endl<<endl;
  cout<<"Imie i nazwisko: "<<_Name<<endl;
  cout<<"Liczba realizowanych kursow: "<<_num_courses<<endl;
  if(_num_courses>0){
    for(int i=0;i<_num_courses;i++)
      _courses[i].Presentation();
  }
}
 void Student::SetName(std::string name){
  _Name=name;
 }
Student::Student(std::string name){
  _Name=name;
  _num_courses=0;
}
 Student::Student(std::string name,Course p1,Course p2,Course p3){
  _Name=name;
  _courses=new Course[3];
  _courses[0]=p1;
  _courses[1]=p2;
  _courses[2]=p3;
  _num_courses=3;
 }
 Student::Student(std::string name,Course p1,Course p2,Course p3,Course p4){
   _Name=name;
  _courses=new Course[4];
  _courses[0]=p1;
  _courses[1]=p2;
  _courses[2]=p3;
  _courses[3]=p4;
  _num_courses=4;
 }
Student::Student(std::string name,int num,Course *points){
   _Name=name;
   _num_courses=num;
    _courses=new Course[num];
    for(int i=0;i<num;i++)
        _courses[i]=points[i];
  }
Course* Student::GetCourses(){
  return 0;
  }
 void Student::SetNewCourses(int num,Course *a){

 }
void Student::SetCourse(double p1,std::string name,double p2, double p3){

}