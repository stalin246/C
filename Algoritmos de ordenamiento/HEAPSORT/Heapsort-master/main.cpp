#include <iostream>
#include "orden.h"
using namespace std;
int main()
{
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    cin >> A[i];
    HeapSort(A,n);
    cout<<"El orden es:";
    for(int i=1;i<=n;i++)
    cout<<A[i];
    return 0;
}

