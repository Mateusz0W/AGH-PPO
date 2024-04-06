#ifndef CAR_H
#define CAR_H

#include <string>

class Car{
 
public:
    Car() : _x(0), _y(0) {}
    Car(int x, int y): _x(x),_y(y){}
    void Print() const;

private:
    int _x;
    int _y;
};

#endif





