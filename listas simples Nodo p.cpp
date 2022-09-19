#include <iostream>
void imprimir (struct nodo *);
void insertarDer(struct nodo*);
struct nodo{
	int dato;
	nodo * enlace;
};
using namespace std;
int main(){
	nodo *p=NULL;
	int opc;
	while(1)
	{
		cout<<"\nMENU\n";
		cout<<"0.Impimir\n";
		cout<<"1.Insertar a la derecha\n";
		cout<<"Selecciona una opcion\n";
		cin>>opc;
		switch(opc)
		{
			case 0:
				if(p==NULL)
				cout<<"Lista vacia\n";
				else
				imprimir(p);
				break;
			case 1:
				if(p==NULL){
					p=new(nodo);
					cout<<"Ingresa el dato:";
					cin>>p->dato;
					p->enlace=NULL;
				}
				else{
					insertarDer(p);
					break;
				}
		}
	}
}
void insertarDer(struct nodo*p){
	nodo*f,*aux;
	f=p;
	while(f->enlace!=NULL)
	f=f->enlace;
	aux=new(nodo);
	cout<<"Ingresa dato:";
	cin>>aux->dato;
	aux->enlace=NULL;
	f->enlace=aux;
	f=aux;
}
void imprimir(struct nodo*p){
	nodo*aux;
	aux=p;
	while(aux!=NULL){
		cout<<aux->dato<<"  ";
		aux=aux->enlace;
	}
	}