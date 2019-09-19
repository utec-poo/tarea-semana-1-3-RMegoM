#include <iostream>
#include "Tipos.h"
#include <math.h>

using namespace std;

int main() {
  int x;
  int a;
  int b;
  int c;
  int pares=0;
  int impares=0;
  int rest;
  do{
    cin>>x;
    a = x/pow(10,2);
    rest = x/10;
    int b= rest%10;
    int c= x%10;

    if(a%2==0){
      pares++;
    }
    else{
      impares++;
    }
    if(b%2==0){
      pares++;
    }
    else{
      impares++;
    }
    if(c%2==0){
      pares++;
    }
    else{
      impares++;
    }

  }while(!((a>=1)&&(a<10)));
  cout<<"Total de dígitos: 3"<<endl;
  cout<<"Total de pares: "<<pares<<endl;
  cout<<"Total de impares: "<<impares<<endl;


return 0;
}
