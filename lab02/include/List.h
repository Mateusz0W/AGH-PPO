#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};

/** @brief inicjowanie glowy listy.
*
* Funkcja ustawia glowe na NULL
*
* @param[in] list  wskaznik do listy
* @return 
*/

void init(slist * list);

/** @brief dodawanie nowego elementu na ostatnie miejsce
*
* funkcja przechodzi przez wszystkie elementy i dodaje nowo zaalkowany element na koniec listy
*
* @param[in] list  wskaznik do listy
* @return 
*/

void push_back(slist * list, char c);

/** @brief dodawanie elementu za element przekazany w procedurze.
*
* Funkcja  tworzy oraz dodaje nowy elemnt za elemen listy w przekazany jako argument procedury oraz przypisuje mu wartosc
*
* @param[in] list  wskaznik do listy
* @param[in] c wartosc dla nowego elementu
* @return 
*/

void insert_after(slistEl * e, char c);

/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);

/** @brief Wypisywanie listy.
*
* Funkcja wwypisuje liste.
*
* @param[in] list  wskaznik do listy

* @return na wyjsciu pojawia sie wypisana lista 
*/


void printl(slist * list);



#endif
