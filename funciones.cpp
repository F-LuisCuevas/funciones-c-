
//mayor de dos numeros
#include<iostream>
#include<ncurses.h>
using namespace std;
int n1,n2;
void pedir();
int  multiplicar(int x,int y);


int main(){
  int kaka;
  pedir();
  kaka = multiplicar(n1,n2);
  cout<<"el mayor es: "<<kaka<<endl;
  return 0;
}
void pedir(){
  
  cout<<"introducir numeros1:"<<endl;
  cin>>n1;
  cout<<"introducir numeros2:"<<endl;
  cin>>n2;
   }
int multiplicar(int x,int y){
  int mayor;
  if(x>y){
    mayor = x;
  }
  else{
    mayor = y;
  }
  return mayor;
}
 
