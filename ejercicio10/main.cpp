#include <iostream>
#include "Tipos.h"
#include <string>
using namespace std;
int invertir(int , int, int);
int main() {
  int lista[10]={900464009, 914103031, 925979529 , 935935606, 963839025 ,966173734, 978119539, 982727289, 989950857, 999958817};
  int numinv=0;
  int res;
  int n;

  for(int i=0;i<10;i++){
    if(invertir(lista[i],numinv, res)==lista[i]){
      cout<<lista[i]<<" ";
    }
  }

}
int invertir(int n, int numinv, int res){
    while(n>0){
    res=n%10;
    n=n/10;
    numinv=numinv*10+res;
  }
  return numinv;
}
