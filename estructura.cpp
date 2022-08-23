#include<stdlib.h>
#include <time.h>
#include<iostream.>
using namespace std;
void imprime(int[]);
int iniManual(int[],int);
int iniAlea(int[],int);
int iniN(int[],int,int);
int Sumatoria(int [], int);
void ValorMax(int[], int);
void ValorMin(int[], int);
int Busqueda(int[], int, int);
int InsertarIni(int[],int);
int InsertarFinal(int[],int);

//int InsertarBloqueIni(int[],int);
//int InsertarBloqueFin(int[],int);
int main(){
	int datos[20]={0},n,opc,val,res,up=-1;
	srand(time(NULL));
	while(opc!=100)//(1)
	{
		cout<<"MENU\n";
		cout<<"0.Impresion\n",
		cout<<"1.InicializaciOn manual\n";
		cout<<"2.Inicializacion aleatoria\n";
		cout<<"3.Inicializacion con N\n";
		cout<<"4.Sumatoria de valores\n";
		cout<<"5.Valor Maximo\n";
		cout<<"6.Valor minimo\n";
		cout<<"7.Buscar\n";
		cout<<"8.Insertar al inicio\n";
		cout<<"9.Insertar al final\n";
		cout<<"10. Insertar Bloque al final\n";
		cout<<"11.Ingresar bloque al Inicio\n";
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
			cout<<"Cuantos datos aleatorios deseas:",
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
			res=Sumatoria(datos,n);
			cout<<"la suma es:["<<res<<"]\n";   
			
			break;
		case 5:
			ValorMax(datos,n);
			break;
		case 6:
			ValorMin(datos,n);
			break;
		case 7:
			cout<<"Ingresa el valor que desea buscar:";
			cin>>val;
			cout<<Busqueda(datos, n, val)<<endl;
			break;
		case 8:
			InsertarIni(datos,up);
			break;
		case 9:
			InsertarFinal(datos,up);
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
int iniManual(int datos[20], int n){
	int up;
	for(int i=0;i<n;i++){
		cout<<"dato ["<<i<<"]: ";
		cin>>datos[i];
	}
	up = n - 1;
	return up;
}

int iniAlea(int datos[20],int n){
	int i, up;
	srand(time(NULL));
	if(n<=20){
		for(i=0;i<n;i++)
		  datos[i]=1+rand()%100;
	}
	else{
	
	  cout<<"Se excede la dimension del arreglo\n";
	  }
	  up = n - 1;
	return up;}
	


int iniN(int datos[20],int n,int val){
	int i, up;
	if(n<=20){
		for(i=0;i<n;i++)
		   datos[i]=val;
	}
	 up = n - 1;
	return up;
}
int Sumatoria(int datos[],int n){
		int sum, i;
	    sum=0;
	    for(i=0; i<n; i++)
	    	sum=sum+datos[i]; 
	return sum;
			   
    
}
void ValorMax(int datos[], int n){
	int max;
	for(int i=0; i<n; i++){
		if(i==0||max<datos[i]){
			max=datos[i];
		}
	}
		cout<<"El maximo es:["<<max<<"]";
	}
void ValorMin(int datos[], int n){
	int min;
	for(int i=0; i<n; i++){
		if(i==0||min>datos[i]){
			min=datos[i];
		}
	}
		cout<<"El minimo es:["<<min<<"]";
	}
int Busqueda(int datos[], int n, int val){
	int r;
	for(int i=0; i<n; i++){
		if(val==datos[i]){
			r=1;
			cout<<"El valor si existe: ";
			return r;
		}
		else{
			r=0;
		}
	}
	cout<<"El valor no existe: ";
	return 0;
}
int InsertarIni(int datos[], int up){
	if(up==-1){
		cout<<"Inserta el dato[0]: ";
		cin>>datos[0];
	}
	else{
		if(up<=19){
			up++;
			for(int i=up;i>0;i--){
				datos[i]=datos[i-1];
			}
				cout<<"Ingresa el dato[0]: ";
				cin>>datos[0];
		}
		else{
				cout<<"El limite es 20!"<<endl;	
			}
		
	}
	return up;
}
int InsertarFinal(int datos[20],int up){
	int i;
	
	if(up==-1){
		cout<<"Ingresa el dato[]:";
		cin>>datos[0];
		up++;
	}
	else{
		if(up<19){
			up++;
			cout<<"Ingresa el dato["<<up<<"]:";
			cin>>datos[up];
		}
		else{
			cout<<"SE EXCEDE LA DIMENSION DEL ARREGLO\n";
		}
	}
	return up;
}



//int InsertarBloqueIni(int datos[20],up){]
