#ifndef CARRENTALB_H
#define CARRENTALB_H

#include "Car.h"

#include <iostream>

class CarRentalB{
    private:
        Car *tab;
        int _size;
        int _minimum;
    public:
      /** @brief konstruktor CarRentalB
* @return  nic nie zwraca
*/
        CarRentalB(): tab(new Car[10]),_size(0),_minimum(10){}
                        /** @brief konstruktor kopiujacy 
           
* @return  nic nie zwraca
*/
        CarRentalB(const CarRentalB &other): tab(new Car[other._minimum]),_size(other._size),_minimum(other._minimum){
            for(int i=0;i<_size;i++)
                tab[i]=other.tab[i];
        }
                        /** @brief destruktor
           
* @return  nic nie zwraca
*/
        ~CarRentalB();
                    /** @brief operator przypisania 
           
* @return  nic nie zwraca
*/
        CarRentalB& operator=(const CarRentalB& other);
                      /** @brief funkcja usuwajaca
* @return  nic nie zwraca
*/
        void Add(const Car& product) ;
            /** @brief funkcja wypisujaca
* @return  nic nie zwraca
*/
        void Remove(); 
            /** @brief funkcja usuwajaca
* @return  nic nie zwraca
*/
        void Print() const ;
            /** @brief funkcja czyszcaca
* @return  nic nie zwraca
*/
        void Clear(); 
            /** @brief funkcja zmiana rozmiaru
* @return  nic nie zwraca
*/
        void Resize();
            /** @brief funkcja 
* @return  zwraca size
*/
        int GetSize();
                   /** @brief funkcja 
* @return  zwraca minimum
*/
        int GetMinimum();

};

#endif