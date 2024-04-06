#ifndef CARRENTALA_H
#define CARRENTALA_H

#include "Car.h"
#include<array>
#include <iostream>

class CarRentalA{
    private:
        std::array<Car,10> myArray;
        int _size;
    public:
            /** @brief konstruktor CarRental domyslny
* @return  nic nie zwraca
*/
        CarRentalA():_size(0){}
                /** @brief konstruktor kopiujacy 
           
* @return  nic nie zwraca
*/
        CarRentalA(const CarRentalA& other): myArray(other.myArray),_size(other._size){}
            /** @brief operator przypisania 
           
* @return  nic nie zwraca
*/
        CarRentalA& operator=(const CarRentalA& other);
                /** @brief funkcja dodajaca 
           * @param[in] product
* @return  nic nie zwraca
*/
        void Add(const Car& car) ;
                /** @brief funkcja usuwajaca
* @return  nic nie zwraca
*/
        void Remove();                /** @brief funkcja wypisujaca
* @return  nic nie zwraca
*/
        
        void Print() const ;
                       /** @brief funkcja czyszczaca
* @return  nic nie zwraca
*/
        void Clear(); 
};

#endif


