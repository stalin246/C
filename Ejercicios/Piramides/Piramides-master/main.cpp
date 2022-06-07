
#include<stdio.h>
# include <iostream>
#include<fstream>
using namespace std ;

int main ()
{
char r;
int n, j,i;

ofstream archivoprueba;  
archivoprueba.open("piramides.txt",ios::app);
do {
cout << "PIRAMIDES\n";
cout << "Introduce el nivel de la piramide: ";
cin >> n;
archivoprueba<<"Nivel del triangulo "<<n<<endl;
for ( j=n; j>0; j--){
for ( i=0; i<j; ++i){
cout << "* " ;
archivoprueba<<" * ";

}

archivoprueba<<endl;
cout<< endl;

}
archivoprueba<<"::::::::::::::::::::::::::::::"<<endl;

cout<<"Desea ingresar otra piramide [s/n] ";
    cin>>r;
    
  } while(r=='s');
  archivoprueba.close();
}