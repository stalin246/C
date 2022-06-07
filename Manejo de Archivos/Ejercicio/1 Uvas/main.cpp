#include <iostream>
using namespace std;
#include<string.h>
#include <fstream>
int main() {
ofstream archivo;
archivo.open("UVAS.txt",ios::out);
archivo<<"UVAS\n";
char tipo[40];
int ta,k;
float p,ga,a;
cout<<"Ingrese el tipo de uva [A] o [B]:";
cin>>tipo;
cout<<"Ingrese el tamaño de la uva [1] O [2]:";
cin>>ta;
cout<<"Ingrese el precio de la uva:";
cin>>p;
cout<<"kilos producidos:";
cin>>k;
if(strcmp(tipo,"A")==0&&(ta==1)) a=p+20;
else if(strcmp(tipo,"A")==0&&(ta==2)) a=p+30;
else if(strcmp(tipo,"B")==0&&(ta==1)) a=p-30;
else if(strcmp(tipo,"B")==0&&(ta==2)) a=p-50;
ga=a*k;
archivo<<tipo<<" "<<ta<<" "<<p<<" "<<k<<" "<<ga<<endl;
archivo.close();
ifstream archivorec;
string text;
archivorec.open("UVAS.txt",ios::in);
getline(archivorec,text);
archivorec>>tipo>>ta>>p>>k>>ga;
cout<<"Tipo:"<<tipo<<endl;

cout<<"Tamaño:"<<ta<<endl;

cout<<"Precio:"<<p<<endl;

cout<<"Kilos:"<<k<<endl;

cout<<"lAS GANANCIAS SON:"<<ga<<endl;
archivorec.close();

}