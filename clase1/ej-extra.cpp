#include <iostream>
using namespace std;

int main() {
    int valorInicial, valorDeIncremento, cantidadIncrementos;
    int valor;

    cout << "Ingrese valor inicial: ";
    cin >> valorInicial;
    cout << "Ingrese valor de incremento: ";
    cin >> valorDeIncremento;
    cout << "Ingrese cantidad de incremento: ";
    cin >> cantidadIncrementos;

    valor = valorInicial;

    for(int i = 0; i <= cantidadIncrementos; i++) {
        valor += valorDeIncremento;
        cout << valor << endl;
    }

    return 0;
}
