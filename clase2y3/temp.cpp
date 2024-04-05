#include <iostream>
using namespace std;

class Temporizador {
    private:
        int _horas;
        int _minutos;
        int _segundos;

    public:
        Temporizador(int hrs, int mins, int segs) {
            _horas = hrs >= 0 ? hrs : 0;
            _minutos = mins > 0 && mins < 60 ? mins : 0;
            _segundos = segs > 0 && segs < 60 ? segs : 0;
        }
        void tic() {
            if(_minutos != 59 && _segundos == 59) {
                _minutos++;
                _segundos = 0;
            } else if(_minutos == 59 && _segundos == 59) {
                _horas++;
                _minutos = 0;
                _segundos = 0;

            } else {
                _segundos++;
            }
        }
        void tac() {
           tic();
        }
        void mostrar() {
            cout << _horas << ":" << _minutos << ":" << _segundos << endl;
        }

        int getHoras() {
            return _horas;
        }
        int getMinutos() {
            return _minutos;
        }
        int getSegundos() {
            return _segundos;
        }

        int comparar(Temporizador temp) {
            int horasT2 = temp.getHoras();
            int minutosT2 = temp.getMinutos();
            int segundosT2 = temp.getSegundos();

            if(_horas == horasT2 && _minutos == minutosT2 && _segundos == segundosT2) {
                return 0;
            } else if(_horas > horasT2) {
                return 1;
            } else if(_minutos > minutosT2) {
                return 1;
            } else if(_segundos > segundosT2) {
                return 1;
            } else {
                return -1;
            }
        }
};

int main() {
    Temporizador miTemp(2, 59, 58), miTemp2(15, 2, 3);

    miTemp.mostrar();
    miTemp.tic();
    miTemp.mostrar();
    miTemp.tac();
    miTemp.mostrar();
    miTemp.tac();
    miTemp.mostrar();

    cout << miTemp.comparar(miTemp2);

return 0;
}
