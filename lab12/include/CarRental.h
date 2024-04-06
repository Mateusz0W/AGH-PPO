#pragma once
#include <iostream>
#include <vector>
#include "Car.h"

class CarRental{
    private:
        std::vector<Car> _vec;
    public:
                      /** @brief konstruktor tworzocy obekt car przyjmujocy dwa inty
* @return  nic nie zwraca
*/
        friend std::ostream & operator<<(std::ostream& out,const CarRental& carRental);
            /** @brief procedura dodajaca element
           * @param[in] a referencja na klase Car
* @return  nic nie zwraca
*/      
        void Add(const Car& car);
            /** @brief procedura usuwajoca element 
* @return  nic nie zwraca
*/      
        void Remove();
            /** @brief operator przeciazenia []
           * @param[in] value 
* @return  zwarca referencje na car
*/
        Car& operator[](int value);
                    /** @brief operator przeciazenia -
           * @param[in] value 
* @return  zwarca referencje na carRental
*/
        CarRental& operator-(int value);
                            /** @brief operator przeciazenia +
           * @param[in] value 
* @return  zwarca referencje na carRental
*/
        CarRental& operator+(int value);
                            /** @brief operator przeciazenia *
           * @param[in] value 
* @return  zwarca referencje na carRental
*/
        CarRental& operator*(int value);
                  /** @brief procedura opruzniajoca klase vector
* @return  nic nie zwraca
*/
        void Clear();
};