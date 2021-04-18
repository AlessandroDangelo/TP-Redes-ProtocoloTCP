#include "lib.hpp"

void menu(int quantidade_clientes){

    FILE* arquivo_saida;
    CriarArquivoEntrada(quantidade_clientes);
  
    
    vector <Mensagem> mensagem;

    char nome[14];
    char nomeEntrada[14];
	

    for(int i = 0; i < quantidade_clientes; i++){

        //cout << "Solicitacoes: " << mensagem.size() << endl;
        sprintf(nomeEntrada, "entrada%.2i.txt", i+1);

        //cout << "Nome: " << nomeEntrada << endl;

        mensagem = LerArquivo(nomeEntrada);
        
        //cout << "Solicitacoes: " << mensagem.size() << endl;
        
        sprintf(nome, "saida%.2i.txt", i+1);

          
        //cout << "Nome do arquivo: " << arquivototal << endl;

        //Vai ser processado pelo cliente 2
        arquivo_saida = fopen(nome, "w");
        fclose(arquivo_saida);
        
        fflush(stdin);

        for (int i = 0; i < mensagem.size(); i++){
            // formato de abertura ele tem que atender, se nao existir, cria e escreve, se existir escreve no final;
            fflush(stdin);
            CriarArquivoSaida(mensagem[i], nome);
        }

        

        mensagem.clear();
    }
    
    




    
    /*
    vector <Cliente> tdsClientes;
    Cliente auxiliarCliente;
    Mensagem auxiliarMensagem;
    int auxiliarQuantidadeCaracteresNaMensagem;
    Servidor servidor;

    //Aloca todos os clientes no vetor tdsClientes, dando um nome para cada (O nome é em número. Ex: 1, 2, 3...), inicializando a situacao deles
    //como 0 ou 1 aleatoriamente (passivo ou ativo) e por fim inicializa o número de solicitações em que o cliente terá com 0.
    for(int i = 0; i < quantidade_clientes; i++){
        auxiliarCliente.nome = i + 1;

        //situacao sendo alocada aleatoriamente
        auxiliarCliente.situacao = rand() % 2;

        if(auxiliarCliente.situacao == 1){
            //numero de solicitacoes sendo alocada aleatoriamente
            auxiliarCliente.num_solicitacoes = rand() % 6;

            //alocando mensagens aleatoriamente
           
        }
        else{
            auxiliarCliente.num_solicitacoes = 0;
        }

        //adiciona o cliente no vetor
        tdsClientes.push_back(auxiliarCliente);
        auxiliarCliente.mensagens.clear();
    }
   
    //imprime os clientes e suas respectivas informaçoes
    for(int i = 0; i < quantidade_clientes; i++){
        cout << tdsClientes[i].nome << endl;
        cout << tdsClientes[i].situacao << endl;
        cout << tdsClientes[i].num_solicitacoes << endl;
        for(int j = 0; j < tdsClientes[i].mensagens.size(); j++){
            cout << "mensagem " << j + 1 << ":" << endl;
            for(int k = 0; k < tdsClientes[i].mensagens[j].mensagem.size(); k++){
                cout << static_cast<char>(tdsClientes[i].mensagens[j].mensagem[k]);
            }
            cout << endl;
        }
        cout << endl;
    }


    cout << "---------------------------------------------------------------\n";
    //Alocando os clientes dispostos a falar (com situacao = 1) no servidores
    servidor.modo = 1;
    for(int i = 0; i < quantidade_clientes; i++){
        if(tdsClientes[i].situacao == 1){
            servidor.clientes.push_back(tdsClientes[i]);
        }
    }

    for(int i = 0; i < servidor.clientes.size(); i++){
        cout << servidor.clientes[i].nome << endl;
        cout << servidor.clientes[i].situacao << endl;
        cout << servidor.clientes[i].num_solicitacoes << endl;
        for(int j = 0; j < servidor.clientes[i].mensagens.size(); j++){
            cout << "mensagem " << j + 1 << ":" << endl;
            for(int k = 0; k < servidor.clientes[i].mensagens[j].mensagem.size(); k++){
                cout << static_cast<char>(servidor.clientes[i].mensagens[j].mensagem[k]);
            }
            cout << endl;
        }
        cout << endl;
    }
    */
}


