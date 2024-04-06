#ifndef CHEST_1_H
#define CHEST_1_H

#include<string>

class Chest_1{
    private:
        int _tab[4];
        int _size;
        int _size2;
        
    public:

/** @brief konstruktor Chest1
* @return  ustawia parametry size
*/
        Chest_1();
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