#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class Nodo{
	int dato;
	Nodo *siguiente;
};


void menu();
void insertar(Nodo *&,int);
void mostrar(Nodo *);
void buscar(Nodo *,int );
void eliminar(Nodo*&, int);
Nodo *lista =NULL;
int main(){
	menu();
	getch();
	return 0;
	
}

void menu(){
	int opcion, dato;
	
	do{
		cout<<".:MENU:.";
	cout<<"1.insertar";
	cout<<"2.imprimir";
	cout<<"3.buscar";
	cout<<"4.eliminar";
	cout<<"5.salir";
	cout<<"opcion";
	cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"digite un numero:";
		cin>>dato;
		insertar(lista,dato);
		system("pause");
		break;
		case 2: imprimir(lista);
		sytem("pause");
		break;
		case 3: cout<<"digite numero buscar: ";
		cin>>dato;
		buscar(lista, dato);
		system("pause");
		break;
		case 4: cout<<"elemento que desea eliminar";
		cin>>dato;
		eliminar(lista,dato);
		system("pause");
	}
	system("cls");
	
	}while (opcion !=5);

}
void insertar(Nodo *&lista,int n){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato =n;
	Nodp *aux1 =lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&& (aux1->dato < n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista == aux1){
		lista =nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	cout<<"elemnto"<<n<<"insertado correctamente";
	
	
	}
void imprimir(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	while (actual != NULL){
		cout<<actual->dato<<"->";
		actual = actual->siguiente;
	}
}
void buscar(Nodo *lista, int n){
	bool band = false;
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual !=NULL)&&(actual ->dato <=n)){
		if (actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	if(band == true){
		cout<<"elemento"<<n<<"ha sido encontrado";
	}
	else{
		cout<<"elemento"<<n<<"no ha sido encontrado";
	}
}

void eliminar(Nodo *&lista, int n){
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar =lista;
		while((aux_borrar !=NULL)&&(aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		if(aux_borrar == NULL){
			cout<<"elemento no existe";
			
		}
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}

