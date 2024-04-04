#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    int *vec;
    int *vec2;

    vec = new int[num];
    vec2 = new int[num];

    for(int i = 0; i < num; i++) {
        int randNum = rand() % (num+1);
        vec[i] = randNum;
        vec2[randNum - 1]++;

        cout << vec[i] << endl;
    }

    delete[]vec;

    int maxCant = 0;
    int maxNum;

    for(int i = 0; i < num; i++) {
        if(vec2[i] > maxCant) {
            maxCant = vec2[i];
            maxNum = i + 1;
        }
    }

    cout << maxNum;


    return 0;
}
