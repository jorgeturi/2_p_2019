#include "CFigura.h"
#include "CColor.h"

CFigura::CFigura()
{
}
CFigura::~CFigura()
{
}
CColor CFigura::colGetForeColor()
{
    return Color_linea;
}
CColor CFigura::colGetBackColor()
{
    return Color_fondo;
}
void CFigura::vSetForeColor(CColor co)
{
    Color_linea = co;
}
void CFigura::vSetBackColor(CColor co)
{
    Color_fondo = co;
}
double CFigura::dCalcArea()
{

}
ostream& operator<< (ostream& os, CFigura& fig)
{
    fig.vImprimir(os);
    os << "y area " <<fig.dCalcArea() << endl;
    CColor aux = fig.colGetBackColor();
    os << "BackColor: " << endl <<  aux;

    aux = fig.colGetForeColor();
    os << "Forecolor: " << endl << aux;



    return os;
}

void CFigura::vImprimir(ostream& os)
{


    os << "y area " << Area;

}
void CFigura::SetValores(float, float)
{
}
void CFigura::SetValores(float)
{
}
