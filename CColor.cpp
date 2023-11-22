#include "CColor.h"

CColor::CColor(){
    color.valor = 0x0;
}
    CColor::CColor(int val){
        color.valor = val;
        r = color.byte[0];
        g = color.byte[1];
        b = color.byte[2];
        alpha = color.byte[3];
    }
    unsigned char CColor::GetRed(){
        return color.byte[0];
    }
    unsigned char CColor::GetGreen(){
        return color.byte[1];
    }
    unsigned char CColor::GetBlue(){
                return color.byte[2];

    }
    unsigned char CColor::GetAlpha(){
                return color.byte[3];

    }

    int CColor::GetColor(){
        return color.valor;
    }
    void CColor::SetRed(unsigned char red){
        r = red;
    }
    void CColor::SetGreen(unsigned char green){
        g = green;
    }
    void CColor::SetBlue(unsigned char blue){
        b = blue;
    }
    void CColor::SetAlpha(unsigned char alpha){
        alpha = alpha;
    }
    void CColor::SetColor(int col){
        color.valor = col;
        r = color.byte[0];
        g = color.byte[1];
        b = color.byte[2];
        alpha = color.byte[3];
    }
    ostream& operator<< (ostream& os, CColor& col){

        os << "componente rojo: " << (int)col.r << endl;
        os << "componente verde: " << (int)col.g << endl;
        os << "componente azul: " << (int)col.b << endl;
        os << "componente alfa: " << (int)col.alpha << endl;
    }
