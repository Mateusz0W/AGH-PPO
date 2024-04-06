#ifndef CHEST_4_H
#define CHEST_4_H

#include<string>
#include <vector>

class Chest_4{
    private:
        std::vector<int> _my_vector;
        int _size;
    public:
    /** @brief konstruktor Chest4
* @param[in] i rozmiar tablicy
* @return  ustawia parametry size
*/
        Chest_4();
/** @brief funkcja sprawdza czy tablica jest pusta
* @return zwraca 1 lub 0
*/        
        int Remove();
/** @brief funkcja sprawdza czy tablica jest pelna
* @return zwraca 1 lub 0
*/
        std::string IsEmpty();
/** @brief procedura dodaje nowy element do listy
 *  @param[in] i wartosc elementu
* @return zwraca 1 lub 0
*/
        std::string IsFull();
/** @brief procedura dodaje nowy element do listy
 *  @param[in] i wartosc elementu
* @return zwraca 1 lub 0
*/
        void Add(int i);
/** @brief funkcja wypisujaca
* @return nic nie zwraca
*/
        void Print();
/** @brief funkcja zwrazajoca rozmiar
* @return zwraca rozmiar
*/ 
        int Size();
 /** @brief funkcja czyszczaca
* @return nic nie zwraca
*/   
        void Clear();
};

#endif