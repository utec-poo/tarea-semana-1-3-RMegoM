#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
  int x;
  cout<<"número: ";
  cin>>x;
  for(int i=0;i<=x;i++){
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<endl;

  }

return 0;
}
