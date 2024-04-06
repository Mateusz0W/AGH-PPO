#pragma once 
#include "Figura.h"
#include <vector>

class Figury{
    private:
        std::vector<Figura*> _vec;
    public:
        void DodajFigure(Figura *f);
        void Rysuj();
};