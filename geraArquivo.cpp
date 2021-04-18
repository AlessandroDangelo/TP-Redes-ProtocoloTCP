#include "lib.hpp"

void CriarArquivoEntrada(int qtd_clientes){
      
    FILE *mensagem;
    int qtd_solicitacoes;

    char nome[14];

    for(int i = 0; i < qtd_clientes; i++){

		char nome[14];
		sprintf(nome, "entrada%.2i.txt", i+1);
        
        
        qtd_solicitacoes = rand() % 6;

        mensagem = fopen(nome, "w");
        fprintf(mensagem, "%d", qtd_solicitacoes);
        fprintf(mensagem, "\n");

        for(int i = 0; i < qtd_solicitacoes; i++){

            for(int j = 0; j < (rand() % 15);j++){
                int caractere_mensagem = (48 + (rand() % 75));
                fprintf(mensagem, "%c", static_cast<char>(caractere_mensagem));
            }
            fprintf(mensagem, "\n");
        }
        
    }
    fclose(mensagem);
}

void CriarArquivoSaida(Mensagem solicitacao, char arquivototal[14] ){

    FILE *arq_saida;
    int vogal, consoante, nmr;
    
    arq_saida = fopen(arquivototal, "a");

    vogal = ContadorVogal(solicitacao);
    consoante = ContadorConsoante(solicitacao);
    nmr = ContadorNmr(solicitacao);
    
    if(consoante == 0 && nmr == 0 && vogal == 0 ){
        fprintf(arq_saida, "erro\n");
        
    }else{
        
        fprintf(arq_saida, "C=%d;", consoante);
        fprintf(arq_saida, "V=%d;", vogal);
        fprintf(arq_saida, "N=%d", nmr);
        fprintf(arq_saida, "\n");
    }
    
    fclose(arq_saida);
}

vector <Mensagem> LerArquivo(char arquivototal[14] ){
    char caractere;
    vector <Mensagem> mensagens;
    FILE *arquivo;    

    arquivo = fopen(arquivototal, "r");
    //vector <int> aux;
    Mensagem aux_2;
    int tamanho = 0;
    int numero;
    int verificacao = 1;
    
    
    fscanf(arquivo, "%d", &tamanho);
    cout << "Tamanho: " << tamanho << endl;

    while(!feof(arquivo) ){
        caractere = fgetc(arquivo);
        if (caractere == '\n'){
            if(verificacao != 1){
                mensagens.push_back(aux_2);
                
                aux_2.mensagem.clear();
            }else{
                verificacao++;
            }
            
        }else{
            numero = static_cast<char>(caractere);
            aux_2.mensagem.push_back(numero);
            cout << caractere << endl;
            //cout << numero << endl;
        }
    }
    fclose(arquivo);

    return mensagens;
}
