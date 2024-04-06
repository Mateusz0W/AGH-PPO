#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"

class Student{
    private:
        std::string _Name;
        Course *_courses;
        int _num_courses;
    public:
        Student();
        void Presentation();
        void SetName(std::string name);
        Student(std::string name);
        Student(std::string name,Course p1,Course p2,Course p3);
        Student(std::string name,Course p1,Course p2,Course p3,Course p4);
        Student(std::string name,int num,Course *points);
        Course *GetCourses();
        void SetNewCourses(int num,Course *a);
        void SetCourse(double p1,std::string name,double p2, double p3);



};

#endif