#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>

/** @brief inicjowanie tablicy Array.
*
* Funkcja inicjalizuje tablice Array na rozmiar ArraySize
*
* @param[in] arraysize rozmiar jaki przyjmie nowa tablica
* @return funkcja zwraca wskanik do nowo utworzonej tablicy
*/

int *InitArray(int);

/** @brief procedura tworzy sekwencje poteg liczby 2.
*
* Funkcja wypelnia utworzona tablice array potegami 2
*
* @param[in] Array wskaznik do tablicy array
* @param[in] arraySize rozmiar tablicy
* @return procedura nie zwraca nic
*/

void CreateSequence(int *,int);

/** @brief Funkcja zmienia rozmiar tablicy
*
* Funkcja towrzy nowa tablice przekopiowuje  zawartosc starej tablicy do nowej usuwa stara tablice i zwraca nowo 
*
* @param[in] Array wskaznik do (starej) tablicy array
* @param[in] arraySize rozmiar (starej) tablicy
* @param[in] newArraySize rozmiar (nowej) tablicy 
* @return funkcja zwraca wskaznik nowej tablicy
*/

int *ChangeArraySize(int *, int, int);

/** @brief usuwanie tablicy Array.
*
* funkcja zwalnia pamiec zaalkowanom na tablice array
*
* @param[in] array wskaznik do tablicy
* @return funkcja nic nie zwraca
*/


void DeleteArray(int *);

#endif