#include "Figury.h"
#include <iostream>

void Figury::DodajFigure(Figura *f){
    _vec.push_back(f);
}
void Figury::Rysuj(){
    for(int i=0;i<_vec.size();i++)
        _vec[i]->Rysuj();
}