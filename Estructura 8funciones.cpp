#include<stdlib.h>
#include <time.h>
#include<iostream.>
using namespace std;
void imprime(int[]);
int iniManual(int[],int);
void iniAlea(int[],int);
void iniN(int[],int,int);
void valorMax(int[], int);
void valorMin(int[], int);

int busqueda(int[], int, int);
int sumatoria(int[], int);
int insertarIni(int datos[],int);

int insertarInicio(int datos[],int);

int main(){
	int datos[20]={0},n,opc,val, max, min,b,res;
	srand(time(NULL));
	while(opc!=100)//(1)
	{
		cout<<"MENU\n";
		cout<<"0.Impresion\n",
		cout<<"1.InicializaciOn manual\n";
		cout<<"2.Inicializacion aleatoria\n";
		cout<<"3.Inicializacion con N\n";
		cout<<"4.desea realizar una suma\n";
		cout<<"5.ValorMaximo\n";
		cout<<"6.ValorMINIMO";
		cout<<"7.Buscar";
		cout<<"8.Ingresar al inicio";
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
			if(n<=20){
			    up=iniManual(datos,n);
				}
			else{
				cout<<"El limite es 20";
			}
		
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
			
		case 4:
		 res=sumatoria(datos,n);
		 cout<<"La sumatoria es:"<<res<<"\n";
		 break;
		
		case 5:
		 valorMax(datos,n);
		 break;		
		
		case 8:	
		     up=insertarInicio(datos,up);
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
int iniManual(int datos[20],int n){

	int up;
		for(i=0;i<n;i++){
			cout<<"ingresa datos["<<i<<"]:";
			cin>>datos[i];
		}
		up=n-1;
	    return up;
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

void valorMax(int datos[20], int n){
	int M[0],i;
	int Max[0];
	int maximo;
	for(i=0;i<n;i++){
		if(datos[i]>maximo){
			maximo=datos[i];
		}
	}
	     cout<<"El valor maximo es:"<<maximo<<"\n";
}
int sumatoria(int datos[20],int n){
	int sum, i;
	sum=0;
	for(i=0;i<n;i++)
	sum=sum+datos[i];
 return sum;
}
int insertarInicio(int datos[20],int up){
	int i;
	if(up==-1){
		cout<<"inserta datos[0]:";
		cin>>datos[0];
	}
	else{
		if(up<19){
			up++;
			for(i=up;i>0;1--)
			    datos[i]=datos[i-1];
		
		}
		else 
		   cout<<"se excede la dimension del arreglo\n";
		   
return up;
	}
}

