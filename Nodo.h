#include "Cliente.h"

class Nodo{
private:
		Cliente  *cliente;
		Nodo * sigte;
		
public:
	Nodo() {
		this->cliente = new Cliente();
		this->sigte=NULL;
	}
	Nodo(int idCliente, string nomCliente, string direccion, string telefono, string email) {
		this->cliente = new Cliente(idCliente, nomCliente, direccion, telefono, email);
		this->sigte=NULL;
	}
	
	void setCliente (Cliente *cliente) {
		this->cliente = cliente;
	}
	Cliente * getValor () {
		return this->cliente;
	}
	
	void setSigte(Nodo * sigte) {
		this->sigte = sigte;
	}
	Nodo * getSigte() {
		return this->sigte;
	}
	
};
