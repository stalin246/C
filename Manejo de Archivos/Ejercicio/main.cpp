#include <iostream>
using namespace std;

//LIBRERIA PARA TRABAJAR CON ARCHIVOS
#include <fstream>



int main() {

  ofstream archivoprueba;

  int edad;

  archivoprueba.open("demo.txt",ios::out);

  archivoprueba<<"BYRON"<<endl;

  archivoprueba<<"LOARTE"<<endl;

  cout<<"INGRESA LA EDAD: ";
  cin>>edad;

  archivoprueba<<edad;

  archivoprueba.close();


  ifstream archivolectura;
  string texto;
  archivolectura.open("demo.txt",ios::in);
  if (archivolectura.fail() )
  {
    cout<<"EL ARCHIVO NO SE PUDO LEER";
  }
  else
  {
    while(!archivolectura.eof())
    {
      getline(archivolectura,texto);
      cout<<texto<<endl;
    }
  }

  archivolectura.close();

 
}