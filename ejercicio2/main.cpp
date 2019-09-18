#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
int precio=0;
int d=20;
int zona;
int cliente;
cout<<"Ingrese zona: \n";
cout<< " 1.Super Vip = S/.212 \n";
cout<< " 2.Vip = S/.170 \n";
cout<< " 3.Preferencial = S/. 136 \n";
cout<< " 4.General = S/.59 \n";
cin>>zona;
cout<<"¿Es usted cliente claro?\n"<<" 1.Si  2.No\n";
cin>>cliente;
if(cliente==1){
  switch (zona){

    case 1:
          cout<<"El precio es:"<<212*0.8;
          break;
    case 2:
          cout<<"El precio es:"<<170*0.8;
          break;
    case 3:
          cout<<"El precio es:"<<136*0.8;
          break;
    case 4:
          cout<<"El precio es:"<<59*0.8;
          break;
  }
}
if(cliente==2){
  switch (zona){

    case 1:
          cout<<"El precio es:"<<212;
          break;
    case 2:
          cout<<"El precio es:"<<170;
          break;
    case 3:
          cout<<"El precio es:"<<136;
          break;
    case 4:
          cout<<"El precio es:"<<59;
          break;
  }
}



// ToDO

  return 0;
}
