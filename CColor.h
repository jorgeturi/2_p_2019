#ifndef CCOLOR_H_INCLUDED
#define CCOLOR_H_INCLUDED
#include <ostream>
using namespace std;

class CColor
{
public:
    CColor();
    CColor(int);
    unsigned char GetRed();
    unsigned char GetGreen();
    unsigned char GetBlue();
    unsigned char GetAlpha();
    int GetColor();
    void SetRed(unsigned char);
    void SetGreen(unsigned char);
    void SetBlue(unsigned char);
    void SetAlpha(unsigned char);
    void SetColor(int);
    friend ostream& operator<< (ostream&, CColor&);
private:
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char alpha;
    union
    {
        int valor;     //ej valor = 0x11223344
        unsigned char byte[4];  //byte[1]= 33, AL REVES EN MEMORIA
    } color;
};


#endif // CCOLOR_H_INCLUDED
