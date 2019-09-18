#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

    int x;
    int pares=0;
    int impares=0;
    do{
      cin>>x;
      if(x%2==0){
        pares++;
      }
      if(x%2!=0){
        impares++;
      }

    }
    while (x!=0);
    cout<<"Total de números: "<<pares+impares-1<<endl;
    cout<<"Total de pares: "<<pares-1<<endl;
    cout<<"Total de impares: "<<impares<<endl; 
  system("pause");
  return 0;
}
