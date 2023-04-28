
#include <iostream>
using namespace std;


void zadanie5() {
    int rozmiar;
    cout << "Ktora liczbe doskonala chcesz znalezc: ";
    cin >> rozmiar;
    long int* liczby = new long int[rozmiar];

    int znalezione = 0, x = 2, suma_dzielnikow = 0;

    while (znalezione < rozmiar) {
        for (int i = 1; i <= (x / 2); i++) {
            if ((x % i) == 0)
                suma_dzielnikow += i;
        }

        if (suma_dzielnikow == x) {
            liczby[znalezione] = x;
            ++znalezione;
        }
        ++++x;
        suma_dzielnikow = 0;
    }

    cout << liczby[rozmiar - 1] << endl;    
}
int main()
{
    zadanie5();   
}


