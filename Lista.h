
class Lista{
private:
	Nodo * cabeza;
	int contador;
	
public:
	Lista() {
		this->cabeza=NULL;
		this->contador=0;
	}
	
	bool estaVacia() {
		return cabeza==NULL;
	}
	int getContador() {
		return this->contador;
	}
	
	
	void insertarInicio(Nodo * nodo){
		if(!estaVacia()){
			nodo->setSigte(cabeza);
			cabeza=nodo;
		}else{
			cabeza=nodo;
		}
		contador ++;
	}
		void mostrarLista() {
			Nodo * aux;
			if (!estaVacia()) {
				aux=cabeza;
				cout<<"Cabeza->";
				while (aux!=NULL){
					cout<<aux->getValor()->getIdCliente()<<"->";
					aux=aux->getSigte();
				}
				cout<<"NULL"<<endl;
			}else{
				cout<<"La lista esta vacia"<<endl;
		}
		}
		
		Nodo* buscarNodo(string nomCliente) {
			Nodo *aux=NULL;
			if(!estaVacia()){
				aux=cabeza;
				while(aux !=NULL && aux->getValor()->getNomCliente() !=nomCliente){
					aux=aux->getSigte();
				}
				
			}
			return aux;
		}

			
		
		void imprimir() {
			Nodo *aux;
			if(estaVacia()) {
				cout<<"La lista esta vacia"<<endl;
			} else {
				aux=cabeza;
				while(aux!=NULL) {
					cout<<aux->getValor()<<"->";
					aux=aux->getSigte();
				}
				cout<<"NULL";
			}
		}
};
