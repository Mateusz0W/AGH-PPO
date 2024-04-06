#ifndef CARRENTALC_H
#define CARRENTALC_H

#include "Car.h"

#include <iostream>

class CarRentalC{
    private:
        Car *tab;
        int _size;
        int _minimum;
    public:
        /** @brief konstruktor CarRentalB
* @return  nic nie zwraca
*/
        CarRentalC(): tab(new Car[10]),_size(0),_minimum(10){}
            /** @brief konstruktor CarRentalB kopiujacy
* @return  nic nie zwraca
*/
        CarRentalC(const CarRentalC &other): tab(new Car[other._minimum]),_size(other._size),_minimum(other._minimum){
            for(int i=0;i<_size;i++)
                tab[i]=other.tab[i];
        }
            /** @brief konstruktor CarRentalB przenoszacy
* @return  nic nie zwraca 
*/
        CarRentalC(CarRentalC&& other) noexcept: tab(other.tab), _size(other._size), _minimum(other._minimum) {
            other.tab = nullptr;
            other._size = 0;
            other._minimum = 0;
        }
            /** @brief operator przeniesienia
* @return  nic nie zwraca
*/
        CarRentalC& operator=(CarRentalC&& other) noexcept;
                   /** @brief destruktor
* @return  nic nie zwraca
*/
        ~CarRentalC();
                   /** @brief operator przypisania
* @return  nic nie zwraca
*/
        CarRentalC& operator=(const CarRentalC& other);
        void Add(const Car& product) ;
                    /** @brief funkcja usuwajaca
* @return  nic nie zwraca
*/
        void Remove(); 
                    /** @brief funkcja usuwajaca
* @return  nic nie zwraca
*/
        void Print() const ;
                    /** @brief funkcja wpisujaca
* @return  nic nie zwraca
*/
        void Clear(); 
                           /** @brief funkcja 
* @return  zwraca minimum
*/
        void Resize();
                           /** @brief funkcja 
* @return  zwraca minimum
*/
        int GetSize();
                           /** @brief funkcja 
* @return  zwraca minimum
*/
        int GetMinimum();
};

#endif