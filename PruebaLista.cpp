#include<iostream>

using namespace std;

#include "Nodo.h"
#include "Lista.h"



int main() {
	//Instancias
	Lista * lista = new Lista();
	Nodo * nodo;
	
	
	int id=0;
	string nomCliente=" ";
	string direccion=" ";
	string telefono= " ";
	string email= " ";
	int opc=0;
	
	do{
	   system("cls");
	   cout<<"\t**** MENU ****" <<endl;
		   cout<<"1. Insertar al inicio" <<endl;
		   cout<<"2. Buscar por nombre" <<endl;
		   cout<<"3. Mostrar lista" <<endl;
		   cout<<"4. Insertar varios elementos" <<endl;
		   cout<<"5. Eliminar" <<endl;
		   cout<<"6. Salir" <<endl;
		   cout<<"Opcion: ?";
	   cin >>opc;
	   
	   switch(opc){
		 case 1: //Insertar al inicio
			   cout<<"id del cliente: ";
			   cin>>id;
			   cout<<"Nombre: ";
			   cin>>nomCliente;
			   cout<<"Direccion: ";
			   cin>>direccion;
			   cout<<"Telefono: ";
			   cin>>telefono;
			   cout<<"Email: ";
			   cin>>email;
			   //Crear el nodo
			   nodo=new Nodo(id, nomCliente, direccion, telefono, email);
			   //Agregar el nodo a lista
			   lista->insertarInicio(nodo);
			   lista->mostrarLista();
			   system("pause");
				   break;
	   case 2: 
		   cout<<"Digite el nombre que desea buscar: ";
			cin>>nomCliente;
		   lista->buscarNodo(nomCliente);
		   lista->imprimir();
		   system("pause");
		   break;
	   case 3: //Mostrar la lista
			lista->mostrarLista();
			system("pause");
			break;
	   }
		   
    }
	while(opc!=6);
	
}
