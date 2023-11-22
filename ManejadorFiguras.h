#ifndef MANEJADORFIGURAS_H_INCLUDED
#define MANEJADORFIGURAS_H_INCLUDED

#include <vector>
#include <cstdint>
#include <ostream>
#include <fstream>
#include "CFigura.h"

class ManejadorFiguras
{
    public:
        void CargarFiguras();
        void ImprimirFiguras(ostream& os=cout);
        double TotalArea();
        void AgregarFigura(CFigura*);
        CFigura* Get(uint8_t);
        void Ordenar();


    protected:
    private:
        vector<CFigura*> Figuras;
};

#endif // MANEJADORFIGURAS_H_INCLUDED
