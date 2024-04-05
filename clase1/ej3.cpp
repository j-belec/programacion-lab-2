#include <iostream>
#include <string>
using namespace std;

int main() {
   string *nombresArr;
   string *apellidosArr;
   int *notasArr;
   int cantAlumnos;
   int acuProm = 0;
   int cantArribaProm = 0;
   float prom;
   int acuPromAp = 0;
   int cantPromAp = 0;
   float promAp;


   cout << "Ingrese la cantidad de alumnos: ";
   cin >> cantAlumnos;

   nombresArr = new string[cantAlumnos];
   apellidosArr = new string[cantAlumnos];
   notasArr = new int[cantAlumnos];

   for(int i = 0; i < cantAlumnos; i++) {
        string nombre;
        string apellido;
        int nota;

        cout << "Ingrese nombre alumno nro " << i + 1 << ": ";
        cin >> nombre;
        nombresArr[i] = nombre;
        cout << "Ingrese apellido alumno nro " << i + 1 << ": ";
        cin >> apellido;
        apellidosArr[i] = apellido;
        cout << "Ingrese nota alumno nro " << i + 1 << ": ";
        cin >> nota;
        notasArr[i] = nota;

        acuProm += nota;

        if(nota > 6) {
            cantPromAp ++;
            acuPromAp += nota;
        }
   }

   prom = acuProm / cantAlumnos;
   promAp = acuPromAp / cantPromAp;

   for(int i = 0; i < cantAlumnos; i++) {
        if(notasArr[i] > prom) cantArribaProm++;
        if(notasArr[i] > promAp) {
            cout << nombresArr[i] << " " << apellidosArr[i] << endl;
        }
   }

   cout << "Cant alumnos arriba del prom: " << cantArribaProm << endl;

   return 0;
}

