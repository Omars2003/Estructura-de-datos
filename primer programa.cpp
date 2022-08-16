#include<iostream>
using namespace std;

int main(){
int datos[20]={0},i,opc,n;
while(1)
{

cout<<"Menu\n";cout<<"o.impresion\n";cout<<"1.Inizializacio manual\n";

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
	


}
}
}