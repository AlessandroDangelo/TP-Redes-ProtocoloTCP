#include "lib.hpp"

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
        
        if(solicitacao.mensagem[i] >= 65 && solicitacao.mensagem[i] <= 90 || 
           solicitacao.mensagem[i] >= 97 && solicitacao.mensagem[i] <= 122){
            
            if(solicitacao.mensagem[i] != 97 && solicitacao.mensagem[i] != 65 && 
               solicitacao.mensagem[i] != 101 && solicitacao.mensagem[i] != 69 &&  
               solicitacao.mensagem[i] != 105 && solicitacao.mensagem[i] != 73 &&  
               solicitacao.mensagem[i] != 111 && solicitacao.mensagem[i] != 79 && 
               solicitacao.mensagem[i] != 117 &&  solicitacao.mensagem[i] != 85){
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
