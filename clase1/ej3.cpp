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
   }

   prom = acuProm / cantAlumnos;

   for(int i = 0; i < cantAlumnos; i++) {
        if(notasArr[i] > prom) cantArribaProm++;
   }

   cout << "Cant alumnos arriba del prom: " << cantArribaProm;

   return 0;
}

