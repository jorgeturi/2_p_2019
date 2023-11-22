#include "ManejadorFiguras.h"

using namespace std;
#include <limits>

int multiplicar(int a, int b) {
    // Comprobar si la multiplicación causará un desbordamiento
    if (a > std::numeric_limits<int>::max() / b || a < std::numeric_limits<int>::min() / b) {
        throw std::overflow_error("Desbordamiento durante la multiplicación");
    }

    return a * b;
}


int main()
{
    try {
       // int resultado = multiplicar(1000000, 1000000);
       int a = 111109099999999*999999990090;
       cout << a ;
     //   std::cout << "El resultado es: " << resultado << std::endl;
    } catch (const std::overflow_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }





    ManejadorFiguras mf;
    mf.CargarFiguras();

    mf.ImprimirFiguras();
    cout << "Area total = " << mf.TotalArea() << endl;
    ofstream of("salida.txt");
    mf.Get(1)->SetValores(2.0); //cambio el valor del radio del círculo.
    mf.Ordenar();


    mf.ImprimirFiguras(of);
    of << "Area total = " << mf.TotalArea() << endl;
    of.close();

    return 0;

}
