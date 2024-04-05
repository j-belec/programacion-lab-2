#include <iostream>
using namespace std;

class Incrementador {
    private:
        int _valorInicial;
        int _valorDeIncremento;
        int _valor;
    public:
        Incrementador(int valorIni, int valorInc) {
            _valorInicial = valorIni;
            _valorDeIncremento = valorInc;
        }
        void getValorInicial() {
            cout << "Valor inicial: " << _valorInicial;
        }
        void getValorDeIcremento() {
            cout << "Valor inicial: " << _valorInicial;
        }
        void getValor() {
            cout << "Valor: " << _valor;
        }
        void setValor() {
            _valor = _valorInicial;
        }
        void incrementar() {
            _valor += _valorDeIncremento;
        }
        void reset() {
            _valor = _valorInicial;
        }

};

int main() {
    Incrementador miIncre(0, 10);

    miIncre.setValor();
    miIncre.incrementar();
    miIncre.incrementar();
    miIncre.incrementar();
    miIncre.getValor();
    miIncre.reset();
    miIncre.getValor();

    return 0;
}
