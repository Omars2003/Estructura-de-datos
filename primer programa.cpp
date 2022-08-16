#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
int datos[20]={0},i,opc,n;
srand(time(NULL));
while(1)
{

cout<<"Menu\n";cout<<"o.impresion\n";cout<<"1.Inizializacio manual\n";cout<<"2.Inizializacio aleatorio\n";

cout<<"Sleccione una opcion:\n";
cin>>opc;
switch(opc){
	case 0:	
	cout<<"Contenido del arreglo\n";cout<<"subindice Valor\n";
	for(i=0;i<20;i++)
	cout<<"  "<<i<<"\t\t"<<datos[i]<<"\n";
	break;
	case 1:
		cout<<"Cuantos datos quieres ingresar:",
		cin>>n;
		if(n<=20){
			for(i=0;i<n;i++)
			{
				cout<<"Ingresa datos["<<i<<"]:";
				cin>>datos[i];
			}
		} 
		
		else
			cout<<"se excede el tamaño del arreglo\n";
    break;
    case 2:
    		cout<<"Cuantos datos ALEATORIOS quieres ingresar:",
		cin>>n;
		if(n<=20){
			for(i=0;i<n;i++)
			 datos[i]=1+rand()%100;
			}
	break;
			
	


}
}
}