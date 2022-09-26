#include <iostream>
#include <cstdlib>

using namespace std;

void imprimir (struct nodo *);
void insertarDer (struct nodo *);

nodo * insertarIzq(struct nodo *p);
nodo * insertarDerAle (struct nodo *p, int ale);

nodo * insertarIzqAle (struct nodo *p, int ale);
void Sumatoria (struct nodo *);

struct nodo
{
	int dato;
	struct nodo *enlace;
};

int main ()
{
	struct nodo *p=NULL, *nuevoP;
	int opc, ale;
	
	while (1)
	{
		cout<<"\n\tMENU"<<endl;
		cout<<"0.- Imprimir"<<endl;
		cout<<"1.- Insertar a la derecha"<<endl;
		cout<<"2.- Insertar a la izquierda"<<endl;
		cout<<"3.- Insertar numeros aleatorios a la derecha"<<endl;
		cout<<"4.- Insertar numeros aleatorios a la izquierda"<<endl;
		cout<<"5.- Sumatoria de los elementos"<<endl;
		cout<<"100.- Salir"<<endl;
		cout<<"Selecciona una opcion: ";
		cin>>opc;
		
		switch (opc)
		{
			case 0: // Imprimir lista
				if (p==NULL)
					cout<<"Lista vacia"<<endl;
				else
					imprimir (p);
			break;
			
			case 1: // Insertar a la Derecha
				if (p==NULL)
				{
					p=new(nodo);
					cout<<"Ingresa el dato: ";
					cin>>p->dato;
					p->enlace=NULL;
				}
				else
					insertarDer(p);
			break;
			
			case 2: // Insertar a la Izquierda
				if (p==NULL)
				{
					p=new(nodo);
					cout<<"Ingresa el dato: ";
					cin>>p->dato;
					p->enlace=NULL;
				}
				else
				{
					nuevoP=insertarIzq(p);
					p=nuevoP;
				}
			break;
			
			case 3: // Insertar datos aleatorios a la derecha 
				cout<<"Cuantos datos aleatorios deseas poner: ";
				cin>>ale;
				nuevoP=insertarDerAle(p,ale);
				p=nuevoP;
			break;
			
			case 4: // Insertar datos aleatorios a la izquierda
				cout<<"Cuantos datos aleatorios deseas poner: ";
				cin>>ale;
				nuevoP=insertarIzqAle(p,ale);
				p=nuevoP;
			break;
			
			case 5: // Sumatoria de los elementos
					Sumatoria (p);
			break;
			
			case 100:
				exit (0);
			break;
		}
	}
}

void imprimir (struct nodo *p)
{
	struct nodo *aux;
	aux=p;
	
	cout<<"Contenido"<<endl;
	
	while (aux!=NULL)
	{
		cout<<aux->dato<<"\t";
		aux=aux->enlace;
	}
	cout<<endl;
}

void insertarDer (struct nodo *p)
{
	struct nodo *f, *aux;
	f=p;
	
	while (f->enlace !=NULL)
		f=f->enlace;
	
	aux=new(nodo);
	cout<<"Ingresa el dato: ";
	cin>>aux->dato;
	aux->enlace=NULL;	
	f->enlace=aux;
	f=aux;
}

nodo * insertarIzq (struct nodo *p)
{
	struct nodo *f, *aux;
	f=p;
	
	while (f->enlace !=NULL)
		f=f->enlace;
	
	aux=new(nodo);
	cout<<"Ingresa el dato: ";
	cin>>aux->dato;
	aux->enlace=p;
	p=aux;
	return p;
}

nodo * insertarDerAle (struct nodo *p, int ale)
{
	struct nodo *f, *aux;
	int i;
	
	if (p==NULL) // Crea numeros aleatorios si la lista esta vacia
	{
		p=new(nodo);
		p->dato=1+rand()%100;
		p->enlace=NULL;
		f=p;
		
		for (i=2; i<=ale; i++) // Empieza desde 2 porque arriba estoy creando el primer num y sigo con el 2 en adelante
		{
			aux=new(nodo);
			aux->dato=1+rand()%100;
			aux->enlace=NULL;
			f->enlace=aux;
			f=aux;
		}
	}
	else // Crea datos aleatorios si ya hay numeros existentes en la lista
	{
		f=p;
		
		while (f->enlace!=NULL) // Para encontrar el ultimo dato de la lista
			f=f->enlace;
		for (i=1;i<=ale;i++) // Este empieza con 1 porque ya hay datos existentes en la lista
		{
			aux=new(nodo);
			aux->dato=1+rand()%100;
			aux->enlace=NULL;
			f->enlace=aux;
			f=aux;
		}
	}
	return p;
}

nodo * insertarIzqAle (struct nodo *p, int ale)
{
	struct nodo *f, *aux;
	int i;
	
	if (p==NULL) // Crea numeros aleatorios si la lista esta vacia
	{
		aux=new(nodo); // explicar como funciona
		aux->dato=1+rand()%100;
		aux->enlace=p;
		p=aux;
		
		for (i=2; i<=ale; i++) // Empieza desde 2 porque arriba estoy creando el primer num y sigo con el 2 en adelante
		{
			aux=new(nodo);
			aux->dato=1+rand()%100;
			aux->enlace=p;
			p=aux;
		}
	}
	else // Crea datos aleatorios si ya hay numeros existentes en la lista
	{
		f=p;
		
		while (f->enlace!=NULL) // Para encontrar el ultimo dato de la lista
			f=f->enlace;
		for (i=1;i<=ale;i++) // Este empieza con 1 porque ya hay datos existentes en la lista
		{
			aux=new(nodo);
			aux->dato=1+rand()%100;
			aux->enlace=p;
			p=aux;
		}
	}
	return p;
}

void Sumatoria (struct nodo *p)
{
	struct nodo *aux;
	aux=p;
	int suma=0;
	
	while (aux!=NULL)
	{
		suma=suma+(aux->dato);
		aux=aux->enlace;
	}
	
	cout<<"\nLa sumatoria de los elementos es: "<<suma<<endl;
}
