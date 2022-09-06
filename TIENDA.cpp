#include <iostream>
#include <stdlib.h>
#include <time.h>
#define MAX 40
#define CAN 100
using namespace std;
using namespace std;
struct articulo
{
 char producto[MAX];
 float cantidad;
 float precio;
};
void leerproducto(int, struct articulo[]);
void ordenarprecio(int, struct articulo[]);
void mostrar(int, struct articulo[]);
void busqueda(int, struct articulo[]);


  int main(){
  	
  	int n,opc;
;
  
  
  while (true){
  	cout << "\n	PANADERIA DON PANCHO \n";
  	 cout << "\n			MENU\n";
  	  cout << "0.Ordenar Por precio\n";
    cout << "1.    INGRESAR PRODUCTOS\n";
    cout << "2.    IMPRIMIR PRODUCTOS\n";
    cout << "3.  MOSTAR TODOS LOS PRODUCTOS\n";
    cout << "4.    Ingresar data\n";
    cout << "    Selecciona una opcion \n: ";
    
    cin >> opc;
    struct articulo art[MAX];
    switch (opc) {
	
case 0:
       ordenarprecio(n,art);
       cout<<endl;
       mostrar(n,art);
        break;
case 1:
	cout<<"Ingresar cantidad de productos a registrar:";
       cin>>n;
       leerproducto(n,art);
       cout<<endl;
       break;
case 2:
	mostrar(n,art);
	break;
   
      
  }
  
  }}
  
  void leerproducto(int n, struct articulo x[])
{
  int i;
 for(i=0;i<n;i++)
 {
  cout<<"Producto  :"; cin>>x[i].producto;
  cout<<"Cantidad   :";cin>>x[i].cantidad;
  cout<<"Precio    :"; cin>>x[i].precio;
  cout<<endl;
 }
}

void ordenarprecio(int n, struct articulo x[])
{
  int i,j;
 struct articulo temp;
 for(i=1;i<n;i++)
  for(j=n-1;j>=i;j--)
   if((x[j-1].precio,x[j].precio)<0)
    {temp=x[j-1];
     x[j-1]=x[j];
     x[j]=temp;
    }
}

void mostrar(int n, struct articulo x[])
{int i;
  cout << "\nContenido del arreglo \n";
  cout << "CANTIDAD 	PRODUCTO     PRECIO\n";
 for(i=0;i<n;i++)
 
 {
 cout<<x[i].cantidad<<"\t        " <<x[i].producto<<"\t      " <<x[i].precio<<endl;
 }
}


