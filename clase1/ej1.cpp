#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    int *vec;

    vec = new int[num];

    for(int i = 0; i < num; i++) {
        vec[i] = rand() % (num+1);
        cout << vec[i] << endl;
    }

    delete[]vec;

    return 0;
}
