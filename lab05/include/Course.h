#ifndef COURSE_H
#define COURSE_H

#include<string>


class Course{
    private:
        std::string _Name;
        double _x;
        double _y;
    public:
        Course();
        void Presentation();
        void SetName(std::string name);
        Course(std::string name);
        void SetX(double x);
        void SetY(double y);
        Course(std::string name,double x,double y );
};

#endif