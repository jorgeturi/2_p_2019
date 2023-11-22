#include "ManejadorFiguras.h"
#include "CRectangulo.h"
#include "CCirculo.h"
#include "algorithm"


  void ManejadorFiguras::CargarFiguras(){

    CRectangulo *MyRec = new CRectangulo();
    float base = 1.2, altura = 2.5;
    int color = 0x0A0BFE42;
    MyRec->vSetBase(base);
    MyRec->vSetAltura(altura);
    MyRec->vSetForeColor(color);
    color = 0x0BFE0A42;
    MyRec->vSetBackColor(color);
    Figuras.push_back(MyRec);

    CCirculo *MyCir = new CCirculo();
    float radio = 1.0;
    color = 0xFFFF0010;
    MyCir->vSetRadio(radio);
    MyCir->vSetForeColor(color);
    color = 0xFF00FF10;
    MyCir->vSetBackColor(color);
    Figuras.push_back(MyCir);

    MyRec = new CRectangulo();
    base = 0.7; altura = 0.3;
    color = 0x03FAAF00;
    MyRec->vSetBase(base);
    MyRec->vSetAltura(altura);
    MyRec->vSetForeColor(color);
    color = 0xFA03AF00;
    MyRec->vSetBackColor(color);
    Figuras.push_back(MyRec);


  }
        void ManejadorFiguras::ImprimirFiguras(ostream& os){

            int cantidad = Figuras.size();
            for(int i=0; i<cantidad; i++){

                os << *this->Get(i)<< endl;

            }

        }
        double ManejadorFiguras::TotalArea(){
            double resultado = 0;

            int cantidad = Figuras.size();
            for(int i=0; i<cantidad; i++){

                resultado = resultado + (*this->Get(i)).dCalcArea();

            }


            return resultado;
        }
        void ManejadorFiguras::AgregarFigura(CFigura*){

        }
        CFigura* ManejadorFiguras::Get(uint8_t i){

            return Figuras[i];
        }
        void ManejadorFiguras::Ordenar(){

            sort(Figuras.begin(), Figuras.end());
        }
