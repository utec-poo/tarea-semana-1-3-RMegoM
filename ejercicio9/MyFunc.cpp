#include "MyFunc.h"

int invertir(long int n, int hora, int minuto, int segundo){
  long int n;
  //calculamos la hora//
  if(n/3600>0){
    hora=a;
  }
  else{
    hora=00;
  }
  //calculamos los minutos//
  if(int (n-hora*3600)/60 >0){
    minuto=(n-hora*3600)/60;
  }
  else{
    minuto=00;
  }
  //calculamos los segundos//
  int c=(n-hora*3600-minuto*60);
  if(int (n-hora*3600-minuto*60) >0){
    segundo=(n-hora*3600-minuto*60);
  }
  else{
    segundo=00;
  }
  cout<<hora<<":"<<minuto<<":"<<segundo;
}
