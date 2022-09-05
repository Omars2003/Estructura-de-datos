#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void imprime(int[]);
void inicializarManualmente(int[], int &);
void inicializarAleatoriamente(int[], int &, int);
void inicializarConN(int[], int &, int, int);
int sumatoria(int[], int &);
void valorMax(int[]);
void valorMin(int[], int &);
int busqueda(int[20], int);
void insertarBloqueInicio(int[], int &, int);
void insertarBloqueFinal(int[], int &, int);
int eliminarInicio(int[20], int &);
int eliminarFinal(int[20], int &);
bool eliminarX(int[20], int &, int);
void ordenarBurbuja(int[20], int);
void shakerSort(int[20], int);
void imprimirArregloOrden(int[20], int);
void insercionDirecta(int[20], int);
void seleccionDirecta(int[20], int);
void InserccionBinaria(int [20], int );
int main() {

  int datos[20] = {0};
  int opcion, n, suma, maximo, minimo, subinidice, dato_buscar, encontrado,
      valor, elementos_arreglo = 0;
  srand(time(NULL));
 while (true) {
    cout << "\n			MENU\n";
    cout << "0.  Impresion\n";
    cout << "1.  Inicializacion manual\n";
    cout << "2.  Inicializacion aleatoria\n";
    cout << "3.  Inicializacion con N\n";
    cout << "4.  Sumatoria del contenido del arreglo\n";
    cout << "5.  Maximo\n";
    cout << "6.  Minimo\n";
    cout << "7.  Busqueda\n";
    cout << "8. Insertar bloque al inicio\n";
    cout << "9. Insertar bloque al final\n";
    cout << "10. Eliminar inicio\n";
    cout << "11. Eliminar final\n";
    cout << "12. Eliminar X \n";
    cout <<"13.MetodoBurbuja \n ";
    cout << "14.Metodo ShakerSort\n";
    cout <<"15.Insercion Directa\n";
    cout << "16.Seleccion Directa\n";
    cout <<"17.Inserccion Binaria\n";
     cout <<"200.Imprimir arreglos de metodos\n";
    cout << "100. Salir\n";
    cout << " \n   Selecciona una opcion:\n ";
    cin >> opcion;
    
    
    switch (opcion) {
    case 0:
      imprime(datos);
      break;
    case 1:
      inicializarManualmente(datos, elementos_arreglo);
      break;
    case 2:
      cout << "    Cuantos datos aleatoreos desea?: ";
      cin >> n;
      inicializarAleatoriamente(datos, elementos_arreglo, n);
      break;
    case 3:
      cout << "\n    Cuantos datos deseas ingresar?: ";
      cin >> n;
      cout << "\n    Cual es el valor con el que iniciaran?: ";
      cin >> valor;
      inicializarConN(datos, elementos_arreglo, n, valor);
      break;
    case 4:
      cout << "\n    La suma es: " << sumatoria(datos, elementos_arreglo)
           << endl;
      break;
    case 5:
      valorMax(datos);
      break;
    case 6:
      valorMin(datos, elementos_arreglo);
      break;
    case 7:
      cout << "\n    Ingresa el dato a buscar: ";
      cin >> dato_buscar;
      encontrado = busqueda(datos, dato_buscar);
      if (encontrado != -1)
        cout << "\n    El dato " << dato_buscar << " si fue encontrado"
             << " en el subinidice " << encontrado << endl;
      else
        cout << " \n   El dato " << dato_buscar << " no fue encontrado";
      break;
    case 8:
      cout << "\n    Ingrese el numero de elementos a agregar: ";
      cin >> n;
      insertarBloqueInicio(datos, elementos_arreglo, n);
      break;
    case 9:
      cout << "\n    Ingrese el numero de elementos a agregar: ";
      cin >> n;
      insertarBloqueFinal(datos, elementos_arreglo, n);
      break;
  
    case 10:
      cout << "\n    Se elimino el dato: "
           << eliminarInicio(datos, elementos_arreglo);
      break;
    case 11:
      cout << "\n    Se elimino el dato: "
           << eliminarFinal(datos, elementos_arreglo);
      break;
    
    
    case 12:
      cout << "\n    Ingresa el dato a eliminar: ";
      cin >> n;
      eliminarX(datos, elementos_arreglo, n)
          ? cout << "\n    Se ha eliminado el elemento"
          : cout << "\n    El elemento " << n << " no existe";
      break;
    case 13:
     ordenarBurbuja(datos, elementos_arreglo);
      break;
    case 14:
      shakerSort(datos, elementos_arreglo);
      break;
    case 15:
    	 insercionDirecta(datos, elementos_arreglo);
      break;
    case 16:
    	 seleccionDirecta(datos, elementos_arreglo);
      break;
    case 17:
    	 InserccionBinaria(datos, elementos_arreglo);
      break;
    	
    
    	
  }
}}

void imprime(int x[20]) {
  cout << "\nContenido del arreglo \n";
  cout << "Subindice	Valor almacenado\n";
  for (int i = 0; i < 20; i++)
    cout << "    " << i << "\t\t\t\t" << x[i] << endl;
}

void inicializarManualmente(int x[20], int &elementos_arreglo) {
  int n;
  cout << "    Cuantos datos deseas ingresar?: ";
  cin >> n;
  if (n > elementos_arreglo)
    elementos_arreglo = n;
  if (n <= 20) {
    for (int i = 0; i < n; i++) {
      cout << "    Ingresa el valor de datos[" << i << "]: ";
      cin >> x[i];
    }
  } else {
    cout << "    Se excede el tamano del arreglo" << endl;
  }
}

void inicializarAleatoriamente(int x[20], int &elementos_arreglo, int n) {
  if (n > elementos_arreglo and n <= 20)
    elementos_arreglo = n;
  if (n <= 20) {
    for (int i = 0; i < n; i++) {
      x[i] = 1 + rand() % 100;
    }
  } else {
    cout << "    Se excede el tamano del arreglo\n";
  }
}

void inicializarConN(int x[20], int &elementos_arreglo, int n, int valor) {
  if (n > elementos_arreglo)
    elementos_arreglo = n;

  for (int i = 0; i < n; i++) {
    x[i] = valor;
  }
}

int sumatoria(int x[20], int &elementos_arreglo) {
  int suma = 0;
  for (int i = 0; i < 20; i++) {
    suma += x[i];
  }
  return suma;
}

void valorMax(int x[20]) {
  int maximo, subinidice;
  maximo = x[0];
  for (int i = 1; i < 20; i++) {
    if (maximo < x[i]) {
      maximo = x[i];
      subinidice = i;
    }
  }
  cout << "\n    El maximo es: " << maximo << endl
       << "    Y el subinidice es: " << subinidice << endl;
}

void valorMin(int x[20], int &elementos_arreglo) {
  int minimo = x[0], subinidice = 0;
  for (int i = 1; i < elementos_arreglo; i++) {
    if (minimo > x[i]) {
      minimo = x[i];
      subinidice = i;
    }
  }
  cout << "\n    El minimo es: " << minimo << endl
       << "    Y el subinidice es: " << subinidice << endl;
}

int busqueda(int datos[20], int dato_buscar) {
  int encontrado, subinidice;
  encontrado = false;
  for (int i = 0; i < 20; i++) {
    if (datos[i] == dato_buscar) {
      encontrado = true;
      subinidice = i;
      break;
    }
  }
  if (encontrado)
    return subinidice;
  return -1;
}
void insertarBloqueInicio(int datos[20], int &elementos_arreglo, int n) {
  if (elementos_arreglo + n <= 19) {
    for (int i = elementos_arreglo - 1; i >= 0; i--) {
      datos[i + n] = datos[i];
    }
    for (int i = 0; i < n; i++) {
    	cout << "    Ingresa el valor de datos[" << i << "]: ";
    	cin >> datos[i];
    	
      datos[elementos_arreglo + i];
    }
    elementos_arreglo += n;
  } else
    cout << "\n    No pueden haber mas de 20 elementos";
}

void insertarBloqueFinal(int datos[20], int &elementos_arreglo, int n){

  if (elementos_arreglo + n <= 19) {
    for (int i = 0; i < n; i++) {
    
      cout << "    Ingresa el valor de datos[" << elementos_arreglo + i << "]: ";
      cin >> datos[elementos_arreglo +i];
     datos[elementos_arreglo + i];
    }
    elementos_arreglo += n;
  } else
    cout << "\n    No pueden haber mas de 20 elementos";
}
int eliminarInicio(int datos[20], int &elementos_arreglo) {
  int inicio = datos[0];
  for (int i = 1; i < elementos_arreglo; i++) {
    datos[i - 1] = datos[i];
  }
  datos[elementos_arreglo - 1] = 0;
  elementos_arreglo--;
  return inicio;
}

int eliminarFinal(int datos[20], int &elementos_arreglo) {
  int ultimo = datos[elementos_arreglo - 1];
  datos[elementos_arreglo - 1] = 0;
  elementos_arreglo--;
  return ultimo;
}

bool eliminarX(int datos[20], int &elementos_arreglo, int x) {
  int existe = busqueda(datos, x);
  if (existe == -1)
    return false;
  for (int i = existe; i < elementos_arreglo; i++) {
    datos[i] = datos[i + 1];
  }
  elementos_arreglo--;
  return true;
}

void ordenarBurbuja(int datos[20], int elementos_arreglo) {
  if (elementos_arreglo <= 1) {
    cout << "    No hay suficientes elementos para ordenar";
    return;
  }

  cout << "    Metodo burbuja" ;
  int pasadas = elementos_arreglo - 1;
  for (int p = 0; p < pasadas; p++) {
    cout << "    \nPasada " << p + 1 << endl;
    for (int i = 1; i < elementos_arreglo; i++) {
      cout << datos[i - 1] << " > " << datos[i];
      if (datos[i - 1] > datos[i]) {
        cout << "\tV\t";
        int temp = datos[i];
        datos[i] = datos[i - 1];
        datos[i - 1] = temp;
      } else
        cout << "\tF\t";
      imprimirArregloOrden(datos, elementos_arreglo);
    }
  }
}
void shakerSort(int datos[20], int elementos_arreglo) {
  if (elementos_arreglo <= 1) {
    cout << "    No hay suficientes elementos para ordenar";
    return;
  }
  cout << "    \nShakersort" << endl;
  int inicio = 0, ultimo = elementos_arreglo-1, pasadas = 1;
  while (inicio < ultimo) {
    cout << "    \nPasada " << pasadas << endl;
    cout << "    Derecha a izquierda" << endl;
    for (int i = ultimo; i > inicio; i--) {
      cout << datos[i] << " < " << datos[i-1];
      if (datos[i] < datos[i-1]) {
        cout << "\tV\t";
        int temp = datos[i];
        datos[i] = datos[i-1];
        datos[i-1] = temp;
      } else
        cout << "\tF\t";
      for (int k = 0; k < elementos_arreglo; k++)
        cout << datos[k] << " ";
      cout << endl;
    }
    inicio++;
    cout << "    Izquierda a derecha" << endl;
    for (int i = inicio; i < ultimo; i++) {
      cout << datos[i] << " > " << datos[i + 1];
      if (datos[i] > datos[i + 1]) {
        cout << "\tV\t";
        int temp = datos[i];
        datos[i] = datos[i + 1];
        datos[i + 1] = temp;
      } else
        cout << "\tF\t";
      imprimirArregloOrden(datos, elementos_arreglo);
    }
    ultimo--;
    pasadas++;
  }
}    

void insercionDirecta(int datos[20], int elementos_arreglo) {
  if (elementos_arreglo <= 1) {
    cout << "    No hay suficientes elementos para ordenar";
    return;
  }

  cout << "    \nInsercion Directa" << endl;
  for (int k = 0; k < elementos_arreglo; k++)
    cout << datos[k] << " ";
  cout << endl;
  for (int i = 1; i < elementos_arreglo; i++) {
    cout << "\nPasada " << i << endl;
    int j = i;
    while (j) {
      cout << datos[j] << " < " << datos[j - 1];
      bool intercambiar = datos[j] < datos[j - 1];
      if (intercambiar) {
        cout << "\tV\t";
        int temp = datos[j];
        datos[j] = datos[j - 1];
        datos[j - 1] = temp;
      } else
        cout << "\tF\t";
      imprimirArregloOrden(datos, elementos_arreglo);
      if (!intercambiar)
        break;
      j--;
    }
  }
}
void seleccionDirecta(int datos[20], int elementos_arreglo) {
  if (elementos_arreglo <= 1) {
    cout << "    No hay suficientes elementos para ordenar";
    return;
  }

  cout << "    \nSeleccion dIRECTA" << endl;
  for (int i = 0; i < elementos_arreglo; i++) {
    int menor = datos[i], indice = -1;
    for (int j = i + 1; j < elementos_arreglo; j++) {
    if(datos[j] < menor){
    	cout << datos[j] << " < " << datos[j - 1];
      bool intercambiar = datos[j] < datos[j - 1];
      if (intercambiar) {
      	 menor = datos[j];
        indice = j;}
    else {
      int temp = datos[i];
      datos[i] = datos[indice];
      datos[indice] = temp;
    }}
    
    imprimirArregloOrden(datos, elementos_arreglo);
  }
}}
void InserccionBinaria(int datos[], int elementos_arreglo)
{
   if (elementos_arreglo <= 1) {
    cout << "    No hay suficientes elementos para ordenar";
    return;
  }

  cout << "    \nSeleccion Binaria" << endl;
  for (int i = 0; i < elementos_arreglo; i++) {
    int menor = datos[i], indice = -1;
    for (int j = i + 1; j < elementos_arreglo; j++) {
      if (datos[j] < menor) {
        menor = datos[j];
        indice = j;
      }
    }
    if (indice != -1) {
      int temp = datos[i];
      datos[i] = datos[indice];
      datos[indice] = temp;
    }
    cout << "    menor= " << menor << "\t";
    imprimirArregloOrden(datos, elementos_arreglo);
  }
}
  
void imprimirArregloOrden(int datos[20], int elementos_arreglo) {
  for (int k = 0; k < elementos_arreglo; k++)
    cout << datos[k] << " ";
  cout <<endl;
}