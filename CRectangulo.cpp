#include "CRectangulo.h"

CRectangulo::CRectangulo(){

}
        CRectangulo::CRectangulo(float b, float a){
            Base = b;
            Altura = a;
        }
        CRectangulo::~CRectangulo(){
        }

        float CRectangulo::fGetBase(){
            return Base;
        }
        void CRectangulo::vSetBase(float b){
            if(b > 0)
            Base = b;

        }
        float CRectangulo::fGetAltura(){
            return Altura;
        }
        void CRectangulo::vSetAltura(float a){
            if (a>0)
                Altura = a;
        }
        double CRectangulo::dCalcArea(){
            return Base*Altura;
        }

        void CRectangulo::vImprimir(ostream& os){
            os << "Soy un Rectangulo de Base: " << Base;
            os << "Altura: " << Altura;
        }


        void CRectangulo::SetValores(float, float){
        }
