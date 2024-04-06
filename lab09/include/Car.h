#ifndef CAR_H
#define CAR_H

#include <string>

class Car{
    private:
        int _x,_y;
    public:
              /** @brief konstruktor tworzocy obekt car przyjmujocy dwa inty
* @return  nic nie zwraca
*/
        Car(int x,int y): _x(x),_y(y){}
              /** @brief Procedura wypisujoca
               * @param[in] x liczba int
               *  @param[in] y liczba int
* @return  nic nie zwraca
*/
        void Print() const;
              /** @brief Procedura zmieniajoca wartosc _y
               * @param[in] n liczba int
* @return  nic nie zwraca
*/
        void SetCard(int n);

        //nowe
              /** @brief  konstruktor ustawiajocy jedno wartosc nat typr_id druga na zero
* @return  nic nie zwraca
*/
        explicit Car(int type_id):_x(type_id),_y(0){}

                /** @brief funkcja poruwnujoca
               * @param[in] a referencja na pierwszy obiekt
               * @param[in] b referencja na drugi obiekt
* @return   zwraca 1 lub -1
*/

        friend int Compare(const Car& a, const Car& b);
               /** @brief funkcja konwertujoca na ciag znakow
* @return   zwraca ciag znaku
*/

        std::string ToString() const;

        /** @brief operator rzutowania
* @return   zwraca _x
*/

        operator int() const {
            return _x;
        }
              /** @brief operator konwersji
* @return   zwraca string
*/
        operator std::string() const{
            return ToString();
        }

              /** @brief zwraca y
* @return   zwraca _y
*/
        int Get_y() const{
            return _y;
        }
}; 





#endif