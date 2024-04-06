#ifndef CHEST_2_H
#define CHEST_2_H

#include<string>
#include<array>

class Chest_2{
    private:
        std::array<int,4> _myarray;
        int _size;
        int _size2;
    public:
    /** @brief konstruktor Chest2
* @return  ustawia parametry size
*/
        Chest_2();
/** @brief funkcja usuwa element
* @return zwraca usuniety element
*/
        int Remove();
/** @brief funkcja sprawdza czy tablica jest pusta
* @return nic nie zwraca
*/
        std::string IsEmpty();
/** @brief funkcja sprawdza czy tablica jest pelna
* @return zwraca 1 lub 0
*/
        std::string IsFull();
/** @brief procedura dodaje nowy element do listy
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