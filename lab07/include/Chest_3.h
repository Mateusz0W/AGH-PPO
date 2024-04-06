#ifndef CHEST_3_H
#define CHEST_3_H

#include<string>

class Chest_3{
    private:
        int *_tab;
        int _size;
        int _size2;
    public:
    /** @brief konstruktor Chest3
* @param[in] i rozmiar tablicy
* @return  ustawia parametry size
*/
        Chest_3(int i);
/** @brief destruktor chest3
* @return nic nie zwraca
*/
        ~Chest_3();
/** @brief funkcja usuwa element
* @return zwraca usuniety element
*/
        int Remove();
/** @brief funkcja sprawdza czy tablica jest pusta
* @return zwraca 1 lub 0
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