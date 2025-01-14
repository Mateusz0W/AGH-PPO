// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab07/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane wg formatu wprowadzonego 
// * na wcześniejszych zajęciach
// * kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod) i cpp (definicje)
// * poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja) 
// * ! w zadaniu na najwyższą liczbę punktów należy dodatkowo:
//   - wykonać zadanie zgodnie z komentarzami zawartymi w funkkcji main()
//   - w przypadku obiektow z biblioteki standardowej C++ wykorzystać jak najwięcej możliwości oferowanych przez te obiekty 
//     (np. uzyc gotowych iteratorow itp.)



#include <iostream>
#include "Chest_1.h"
#include "Chest_2.h"
#include "Chest_3.h"
#include "Chest_4.h"
using namespace std;


int main(int argc, char** argv) 
{
	int r;

	// Obiekt oparty o tablice statyczna rozmiaru 4	
	cout << endl << "--------------------------------"<< endl;
	Chest_1 C_1;
	C_1.Remove();
	cout << C_1.IsEmpty() << endl;
	cout << C_1.IsFull() << endl;
	for(int i = 1; i <= 6; i++)
		C_1.Add(i);
	C_1.Print();
	cout << C_1.IsEmpty() << endl;
	cout << C_1.IsFull() << endl;
	r = C_1.Remove();
	r = C_1.Remove();
	C_1.Print();
	C_1.Add(10);
	C_1.Print();
	cout << C_1.Size() << endl;
	cout << C_1.IsEmpty() << endl;
	cout << C_1.IsFull() << endl;
	C_1.Clear();
	C_1.Print();
		
	// Obiekt oparty o std::array rozmiaru 4	
	cout << endl << "--------------------------------"<< endl;
	Chest_2 C_2;
	C_2.Remove();
	cout << C_2.IsEmpty() << endl;
	cout << C_2.IsFull() << endl;
	for(int i = 1; i <= 6; i++)
		C_2.Add(i);
	C_2.Print();
	cout << C_2.IsEmpty() << endl;
	cout << C_2.IsFull() << endl;
	r = C_2.Remove();
	r = C_2.Remove();
	C_2.Print();
	C_2.Add(10);
	C_2.Print();
	cout << C_2.Size() << endl;
	cout << C_2.IsEmpty() << endl;
	cout << C_2.IsFull() << endl;
	C_2.Clear();
	C_2.Print();

	// Obiekt oparty o tablice dynamiczna o rozmiarze poczatkowym podanym w konstruktorze
	// W przypadku zapelnienia tablica jest re-alokowana do nowego, dwukrotnie wiekszego rozmiaru 	
	cout << endl << "--------------------------------"<< endl;
	Chest_3 C_3(4);
	C_3.Remove();
	cout << C_3.IsEmpty() << endl;
	cout << C_3.IsFull() << endl;
	for(int i = 1; i <= 6; i++)
		C_3.Add(i);
	C_3.Print();
	cout << C_3.IsEmpty() << endl;
	cout << C_3.IsFull() << endl;
	r = C_3.Remove();
	r = C_3.Remove();
	C_3.Print();
	C_3.Add(10);
	C_3.Print();
	cout << C_3.Size() << endl;
	cout << C_3.IsEmpty() << endl;
	cout << C_3.IsFull() << endl;
	C_3.Clear();
	C_3.Print();
	
	// Obiekt oparty o std::vector 	
	cout << endl << "--------------------------------"<< endl;
	Chest_4 C_4;
	C_4.Remove();
	cout << C_4.IsEmpty() << endl;
	cout << C_4.IsFull() << endl;
	for(int i = 1; i <= 6; i++)
		C_4.Add(i);
	C_4.Print();
	cout << C_4.IsEmpty() << endl;
	cout << C_4.IsFull() << endl;
	r = C_4.Remove();
	r = C_4.Remove();
	C_4.Print();
	C_4.Add(10);
	C_4.Print();
	cout << C_4.Size() << endl;
	cout << C_4.IsEmpty() << endl;
	cout << C_4.IsFull() << endl;
	C_4.Clear();
	C_4.Print();


	return 0;
}

/** Wynik dzialania programu:

--------------------------------
#BLAD: Obiekt pusty
1
0
#BLAD: Obiekt zapelniony
#BLAD: Obiekt zapelniony
#Zawartosc obiektu:
1,2,3,4,
0
1
#Zawartosc obiektu:
3,4,
#Zawartosc obiektu:
3,4,10,
3
0
0
#Zawartosc obiektu:


--------------------------------
#BLAD: Obiekt pusty
1
0
#BLAD: Obiekt zapelniony
#BLAD: Obiekt zapelniony
#Zawartosc obiektu:
1,2,3,4,
0
1
#Zawartosc obiektu:
3,4,
#Zawartosc obiektu:
3,4,10,
3
0
0
#Zawartosc obiektu:


--------------------------------
#BLAD: Obiekt pusty
1
0
#Zawartosc obiektu:
1,2,3,4,5,6,
0
0
#Zawartosc obiektu:
3,4,5,6,
#Zawartosc obiektu:
3,4,5,6,10,
5
0
0
#Zawartosc obiektu:


--------------------------------
#BLAD: Obiekt pusty
1
0
#Zawartosc obiektu:
1,2,3,4,5,6,
0
0
#Zawartosc obiektu:
3,4,5,6,
#Zawartosc obiektu:
3,4,5,6,10,
5
0
0
#Zawartosc obiektu:

*/
