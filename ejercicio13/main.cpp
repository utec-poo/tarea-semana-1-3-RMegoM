#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

int x;
char n;

cout << "ingrese el caracter:";
cin >> n;
cout << "\ningrese el numero:";
cin >> x;
      if(n == 'a' || n == 'c' || n =='e' || n== 'g'){
        if(x%2 != 0){
            cout<<"black";
        }
        else
            cout<<"white";
    }
    else
        if(x%2 == 0) {
            cout<<"black";
        }
        else
            cout<<"white";

// ToDO
// implemente el algoritmo.
  return 0;
}
