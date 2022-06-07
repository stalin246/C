#include <iostream>
#include<fstream>

using namespace std;
int main() {
 ofstream archivo;

 archivo.open("ordenamiento.txt",ios ::out);
int a[5]={4,3,2,1,5};
int b;
archivo<<"Numeros desordenados\n";
archivo<<"{4,3,2,1,5}\n";
b=4+3+2+1+5;

int pos,aux;
archivo<<"Numeros ordenados:\n";
for(int i =0;i<5;i++){

pos=i;
aux=a[i];

while((pos>0)&&(a[pos-1]>aux)){
a[pos]=a[pos-1];
pos--;
}
a[pos]=aux;
}
for(int i=0;i<5;i++){
cout<<"-"<<a[i]<<"";
archivo<<" "<<a[i]<<"";
}
archivo<<"\nTotal de elementos del arreglo:"<<a[4];
archivo<<"\nSuma de los elementos:"<<b;
archivo.close();
}