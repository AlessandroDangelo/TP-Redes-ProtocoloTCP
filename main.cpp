// Alessandro D'Angelo 18.2.4054
// Arthur Mayan 18.2.4149
// Danilo César 19.2.4002
// Pedro Marra 19.2.4076

#include "lib.hpp"

int main(int argc, char **argv){

    int quantidade_clientes;

	// Argumento passado na linha de comando
	//quantidade_clientes = atoi(argv[1]);

    //CriarArquivoEntrada(1);

    cout << "---------------------------------------------------------------\n";   
    
    vector <Mensagem> mensagem; //= LerArquivo();

    cout << "---------------------------------------------------------------\n";
    CriarArquivoSaida(mensagem);

	//menu(quantidade_clientes);



    //for(int i = 0; i < 20; i++){
    //    quantidade_clientes = (48 + (rand() % 75));
    //    cout << quantidade_clientes << endl;
    //}
    return 0;
}