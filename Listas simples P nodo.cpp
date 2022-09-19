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
		cout<<"MENU\n";
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
				}
		}
	}
}