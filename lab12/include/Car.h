#pragma once 
#include <iostream>

class Car{
    private:
        int _x;
        int _y;
    public:
                  /** @brief konstruktor tworzocy obekt car przyjmujocy dwa inty
* @return  nic nie zwraca
*/
    Car(int x,int y):_x(x),_y(y){}
                  /** @brief konstruktor tworzocy obekt car przyjmujocy dwa inty
* @return  nic nie zwraca
*/
    friend std::ostream & operator<<(std::ostream& out,const Car& car);
                    /** @brief operator przecazenia ++ 
                     *   * @param[in] out
                     *   * @param[in] car referencja na klase Car
* @return  zwraca referencje na Car
*/
    Car& operator++();
                    /** @brief operator przecazenia ++
* @return  zwraca referencje na Car
*/
    const Car operator++(int);
                    /** @brief operator przecazenia --
* @return  zwraca referencje na Cart
*/
    Car& operator--();
                    /** @brief operator przecazenia -- 
* @return  zwraca referencje na Car
*/
    const Car operator--(int);
                    /** @brief operator przecazenia +
                     *  *   * @param[in] a value
* @return  zwraca referencje na Car
*/
    Car& operator+(int value);
                        /** @brief operator przecazenia -
                         *   * @param[in] a value
* @return  zwraca referencje na Car
*/
    Car& operator-(int value);
                        /** @brief operator przecazenia *
                         *  *   * @param[in] a value
* @return  zwraca referencje na Car
*/
    Car& operator*(int value);
};