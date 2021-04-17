#include "lib.hpp"

void CriarArquivoEntrada(int qtd_clientes){
      
    FILE *mensagem;
    int qtd_solicitacoes= rand() % 6;

    mensagem = fopen("entrada.txt", "w");
    fprintf(mensagem, "%d", qtd_solicitacoes);
    fprintf(mensagem, "\n\n");

    for(int i = 0; i < qtd_solicitacoes; i++){

        for(int j = 0; j < (rand() % 15);j++){
            int caractere_mensagem = (48 + (rand() % 75));
            fprintf(mensagem, "%c", static_cast<char>(caractere_mensagem));
        }
        fprintf(mensagem, "\n");
    }

    fclose(mensagem);
}
/*
    C=3;V=0;N=0
    C=2;V=0;N=1
    C=1;V=2;N=2
    erro
*/

void CriarArquivoSaida(vector <Mensagem> solicitacao){

     
    cout << "---------------------------------------------------------------\n";
    FILE *arq_saida;
    int qtd_solicitacoes = solicitacao.size();
    int vogal, consoante, nmr;
    
    arq_saida = fopen("saida.txt", "w");

    for(int i = 0; i < qtd_solicitacoes; i++){

        vogal = ContadorVogal(solicitacao[i]);
        consoante = ContadorNmr(solicitacao[i]);
        nmr = ContadorConsoante(solicitacao[i]);
        
        if(vogal == 0 && consoante == 0 && nmr == 0){
            fprintf(arq_saida, "erro");
            cout << "-----------------------------------Aopa--\n";
        }else{
            fprintf(arq_saida, "C=%d;", vogal);
            fprintf(arq_saida, "V=%d;", consoante);
            fprintf(arq_saida, "N=%d", nmr);

            fprintf(arq_saida, "\n");
        }
    }
    fclose(arq_saida);
}

int ContadorVogal(Mensagem solicitacao){
    int contador = 0;

    for(int i = 0; i < solicitacao.mensagem.size(); i++){
        if(solicitacao.mensagem[i] == 97 || solicitacao.mensagem[i] == 65 || 
           solicitacao.mensagem[i] == 101 || solicitacao.mensagem[i] == 69 || 
           solicitacao.mensagem[i] == 105 || solicitacao.mensagem[i] == 73 || 
           solicitacao.mensagem[i] == 111 || solicitacao.mensagem[i] == 79 || 
           solicitacao.mensagem[i] == 117 || solicitacao.mensagem[i] == 85){
               contador++;
           }
    
    }

    return contador;
}

int ContadorConsoante(Mensagem solicitacao){
    int contador = 0;

    for(int i = 0; i < solicitacao.mensagem.size(); i++){
        
        if(solicitacao.mensagem[i] > 64 && solicitacao.mensagem[i] < 90 || 
           solicitacao.mensagem[i] > 96 && solicitacao.mensagem[i] < 123){
            
            if(solicitacao.mensagem[i] == 97 || solicitacao.mensagem[i] == 65 || 
               solicitacao.mensagem[i] == 101 || solicitacao.mensagem[i] == 69 || 
               solicitacao.mensagem[i] == 105 || solicitacao.mensagem[i] == 73 || 
               solicitacao.mensagem[i] == 111 || solicitacao.mensagem[i] == 79 || 
               solicitacao.mensagem[i] == 117 || solicitacao.mensagem[i] == 85){
                contador++;
            }
        }    
    }

    return contador;
}

int ContadorNmr(Mensagem solicitacao){
    int contador = 0;

    for(int i = 0; i < solicitacao.mensagem.size(); i++){
        
        if(solicitacao.mensagem[i] > 47 && solicitacao.mensagem[i] < 58){
        
            contador++;
        }
    }

    return contador;
}

vector <Mensagem> LerArquivo(){
    char caractere;
    
    vector <Mensagem> mensagem;
    FILE *arquivo;
    arquivo = fopen("entrada.txt", "r");
    vector <int> aux;
    Mensagem aux_2;

    int tamanho;
    fscanf(arquivo, "%d", tamanho);

    
    for(int i = 0; i < tamanho; i++){  

        /*
        while(&caractere = fgetc(arquivo) != "\n"){
            //fscanf(arquivo, "%c", caractere);
            aux.push_back(atoi(caractere));
 
        }*/

        fscanf(arquivo, "%c", caractere);

        while (caractere != '\n');{
        
            aux.push_back(atoi(&caractere));

            fscanf(arquivo, "%c", caractere);    
        }

        
        
        aux_2.mensagem = aux;

        mensagem.push_back(aux_2);
        
        aux.clear();
        aux_2.mensagem.clear();
    }
     
   
    fclose(arquivo);

    return mensagem;
}
