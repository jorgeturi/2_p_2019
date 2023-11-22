#include "CCirculo.h"
#include <math.h>

  CCirculo::CCirculo(){

 }
        CCirculo::~CCirculo(){
 }
        double CCirculo::dCalcArea(){
            return M_PI*Radio;
 }
        float CCirculo::fGetRadio(){
            return Radio;
 }
        void CCirculo::vSetRadio(float r){
            Radio = r;
 }
        void CCirculo::vImprimir(ostream& os){
            os<<"soy un Cirulo de radio: " <<Radio<<endl;

 }
        void CCirculo::SetValores(float r ){
            cout << "estoy en SetValores de circulo" << endl;
            Radio = r;

 }
