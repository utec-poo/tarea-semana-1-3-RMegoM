#include <iostream>
#include "tipos.h"
#include "MyFunc.h"
using namespace std;
int main() {
    int n;
    int hora, minuto, segundo;

    do {
        cout << "Segundos: ";
        cin >> n;
        cout<< convertir(n,hora,minutos,segundo);
    } 
    while (segundos <1);

    // ToDO
    return 0;
}
