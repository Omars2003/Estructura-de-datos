#include<stdlib.h>
#include <time.h>
#include<iostream.>
using namespace std;
void imprime(int[]);
void iniManual(int[],int);
void iniAlea(int[],int);
void iniN(int[],int,int);
int main(){
	int datos[20]={0},n,opc,val;
	srand(time(NULL));
	while(opc!=100)//(1)
	{
		cout<<"MENU\n";
		cout<<"0.Impresion\n",
		cout<<"1.InicializaciOn manual\n";
		cout<<"2.Inicializacion aleatoria\n";
		cout<<"3.Inicializacion con N\n";
		cout<<"100.Salida\n";
		cout<<"Salida\n";
		cout<<"Selecciona una opcion\n";
		cin>>opc;
		switch(opc){
		
		
		
		case 0:
			imprime(datos);
			break;
		case 1:
			cout<<"Cuantos datos quieres ingresar:",
			cin>>n;
			iniManual(datos,n);
			break;
		case 2:
			cout<<"Cuantos datos aleaotorios deseas:",
			cin>>n;
			iniAlea(datos,n);
			break;
		case 3:
			
		    cout<<"Cuantos datos deseas:",
		    cin>>n;
		    cout<<"Cual es el valor",
		    cin>>val,
		    iniN(datos,n,val);
		    break;				
	}}
}

void imprime(int datos[20]){
	int i;
	cout<<"Contenido del arreglo\n";
	cout<<"Subíndice    valor\n";
	for(i=0;i<20;i++)
	cout<<"  " <<i<<"\t\t"<<datos[i]<<"\n";
	
}
void iniManual(int datos[20],int n){
	int i;
	if(n<=20){
		for(i=0;i<n;i++){
			cout<<"ingresa datos["<<i<<"]:";
			cin>>datos[i];
		}
	}
}
void iniAlea(int datos[20],int n){
	int i;
	srand(time(NULL));
	if(n<=20){
		for(i=0;i<n;i++)
		  datos[i]=1+rand()%100;
	}
	else
	  cout<<"Se excede la dimension del arreglo\n";
}

void iniN(int datos[20],int n,int val){
	int i;
	if(n<=20){
		for(i=0;i<n;i++)
		   datos[i]=val;
	}
	else
	   cout<<"se excede la dimension del arreglo\n";
}