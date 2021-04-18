// Alessandro D'Angelo 18.2.4054
// Arthur Mayan 18.2.4149
// Danilo César 19.2.4002
// Pedro Marra 19.2.4076

#include "lib.hpp"

int main(int argc, char **argv){

    int quantidade_clientes;

	// Argumento passado na linha de comando
	quantidade_clientes = atoi(argv[1]);
    
    menu(quantidade_clientes);

    
    return 0;
}

