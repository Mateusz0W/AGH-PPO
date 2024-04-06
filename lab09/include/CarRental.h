#ifndef CARRENTAL_H
#define CARRENTAL_H

#include <vector>
#include "Car.h"


class CarRental{
    private:
        std::vector<Car> _Vec;
    public:
    /** @brief konstruktor CarRental
* @return  nic nie zwraca
*/
        CarRental(){}
          /** @brief konstruktor CarRental 
           * @param[in] a referencja na obiekt Car
* @return  nic nie zwraca
*/
        CarRental(const Car& a){
            _Vec.push_back(a);
        }
            /** @brief konstruktor CarRental 
           * @param[in] a referencja na obiekt Car
           * @param[in] b referencja na obiekt Car
* @return  nic nie zwraca
*/
        CarRental(const Car& a ,const Car& b){
            _Vec.push_back(a);
            _Vec.push_back(b);
        }
          /** @brief konstruktor CarRental 
           * @param[in] size wielkosc tablicy
           * @param[in] t tablica wskaznikow
* @return  nic nie zwraca
*/
        
        CarRental(int size, Car *t[]){
            for(int i=0;i<size;i++)
                _Vec.push_back(*t[i]);
        }
          /** @brief konstruktor CarRental 
           * @param[in] a referencja na klase vector
* @return  nic nie zwraca
*/
        
        CarRental(std::vector<Car> &a): _Vec(a){}
          /** @brief procedura wypisujaca 
* @return  nic nie zwraca
*/
        void Print () const;
          /** @brief procedura usuwajoca element 
* @return  nic nie zwraca
*/
        void Remove();
          /** @brief procedura dodajaca element
           * @param[in] a referencja na klase Car
* @return  nic nie zwraca
*/
        void Add(Car& a);
          /** @brief procedura opruzniajoca klase vector
* @return  nic nie zwraca
*/
      void Clear();

              /** @brief zwarca _y
* @return   zwraca _y
*/
      int Get(int i) const;

                    /** @brief operator sumowania
* @return   zwraca sume
*/

      operator int() const{
        int sum=0;
        for(int i=0;i<_Vec.size();i++)
          sum+=Get(i);
        return sum;
      }

};
#endif