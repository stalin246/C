#include <iostream>
#include "libreria.h"
using namespace std;
int main()
{
    int A[10]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    for(int i=0; i<10; i++)
    {
        cout<<"|"<<A[i]<<"|";
    }
    cout<<endl;
    cout<<"Elementos ordenados\n";
    ordenar(A,0,9);
    for(int i=0; i<10; i++)
    {
        cout<<"|"<<A[i]<<"|";
    }
    return 0;
}

