class Cliente{
private:
	int idCliente;
	string nomCliente;
	string direccion;
	string telefono;
	string email;
	
	
public:
	Cliente(){
		this->idCliente=0;
		this->nomCliente = " ";
		this->direccion = " ";
		this->telefono = " ";
		this->email = " ";
		
	}
	Cliente(int idCliente, string direccion, string nomCliente, string telefono, string email){
		this->idCliente=idCliente;
		this->nomCliente=nomCliente;
		this->direccion=direccion;
		this->telefono=telefono;
		this->email=email;
		
	}
	
	~Cliente(){}
		
	void setIdCliente(int idCliente){
		this->idCliente = idCliente;
	}
	
	int getIdCliente(){
		return this->idCliente;
	}
		
	void setNomCliente(string nomCliente){
		this->nomCliente = nomCliente;
	}
		
	string getNomCliente(){
		return this->nomCliente;
	}
		
	void setDireccion(string direccion){
		this->direccion = direccion;
	}
		
	string getDireccion(){
		return this->direccion;
	}
		
	void setTelefono(string telefono){
		this->telefono = telefono;
	}
		
	string getTelefono(){
		return this->telefono;
	}
		
	void setEmail(string email){
		this->email = email;
	}
	
		
	string getEmail(){
		return this->email;
	}
		
	
};
