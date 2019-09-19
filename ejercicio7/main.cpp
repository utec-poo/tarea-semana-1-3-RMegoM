#include <iostream>
#include "Tipos.h"
#include <string>
using namespace std;

int main() {
  int x;
  cout<<"número: ";
  cin>>x;
  int lista[x];
  if(10<=x || x<=30){
    for(int i=0;i<x;i++){
      cout<<"*";
    }
  }
  else{
    cout<<"Erro";
  }

return 0;
}
