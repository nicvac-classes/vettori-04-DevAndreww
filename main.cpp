

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int N, i;

    cout << "Qual e' il valore di N?" << endl;
    cin >> N;

    int V[N];

    i = 0;
    srand(time(0));

    while (i < N) {
        V[i] = rand() % 1001;
        i = i + 1;
    }

    int pari = 0;
    i = 0;

    while (i < N) {
        if (V[i] % 2 == 0) {
            pari = pari + 1;
        }
        i = i + 1;
    }

    cout << "Sono stati visualizzati " << pari << " numeri pari." << endl;

    int Vmax, Imax;
    Vmax = V[0];
    Imax = 0;
    i = 0;

    while (i < N) {
        if (V[i] > Vmax) {
            Vmax = V[i];
            Imax = i;
        }
        i = i + 1;
    }

    cout << "Il " << Imax + 1 << "° numero e' il valore massimo che e' " << Vmax << "." << endl;

    int Vmin, Imin;
    Vmin = V[0];
    Imin = 0;
    i = 0;

    while (i < N) {
        if (V[i] < Vmin) {
            Vmin = V[i];
            Imin = i;
        }
        i = i + 1;
    }

    cout << "Il " << Imin + 1 << "° numero e' il valore minimo che e' " << Vmin << "." << endl;

    return 0;
}