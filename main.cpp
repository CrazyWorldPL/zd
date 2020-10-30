#include <iostream>

using namespace std;

int a,b, wynik;

int main() {
    cout << "Podaj a: "; cin >> a;
    cout << "Podaj b: "; cin >> b;
    if (a == b) {
        wynik = a + b;
    } else if (a > b) {
        wynik = a * b;
    } else {
        wynik = a - b;
    }
    cout << "Wynik: " << wynik << endl;
    return 0;
}
