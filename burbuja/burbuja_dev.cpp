#include <iostream>
using namespace std;
#define TAM 50

void ingresar (int a[], int n);
void ordenar (int a[], int n);
void imprimir (int a[], int n);

int main()
{
    int arreglo1 [5];
	cout<< "ingresar los elementos del arreglo: ";    
    ingresar(arreglo1, 5);
	ordenar(arreglo1, 5);
	imprimir(arreglo1, 5);
    return 0;
}


void ingresar (int a[], int n)
{
	int i;
	for (i=0; i<n; i++)
   {
   	cin>> a[i];
   }
}
void ordenar (int a[], int n)
{
	int i,j, aux;
	 for (i=0; i<n; i++)
   {
   	 for (j=i+1; j<n; j++)
   	{
   		if(a[j]<a[i])
		   {
		   	aux = a[i];
		   	a[i]=a[j];
		   	a[j]=aux;
		   }	
	}
   }      
   
}
void imprimir (int a[], int n)
 {
int i;
 	 for (i=0; i<n; i++)
   {
   	cout << a[i];
   }
  }













