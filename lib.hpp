#ifndef LIB_HPP
#define LIB_HPP

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

struct Mensagem {
	int tipo;
	vector <int> mensagem;
};

struct Cliente {
	int nome;
	int situacao; // 0 -> desativado, 1 -> ativo e com mensagens para enviar e 2 -> ativo e sem mensagens
	int num_solicitacoes;
	vector <Mensagem> mensagens;
};

struct Servidor {
	//vector <Cliente> clientes;
	int modo;

	vector <int> clientes_ativos; // 1 a n, estandos eles ativos
 	Mensagem x;
	vector <int> acoes; 
};

//-------------------------------------------------- geraArquivo ----------------------------------------------------------

void CriarArquivoEntrada(int qtd_clientes);

void CriarArquivoSaida(Mensagem mensagem, char arquivototal[14] );

vector <Mensagem> LerArquivo(char arquivototal[14] );

//-------------------------------------------------- processos ----------------------------------------------------------

int ContadorVogal(Mensagem solicitacao);

int ContadorConsoante(Mensagem solicitacao);

int ContadorNmr(Mensagem solicitacao);

//-------------------------------------------------- menu ----------------------------------------------------------

void menu(int quantidade_clientes);

//-------------------------------------------------- Servidor ----------------------------------------------------------



//-------------------------------------------------- Cliente ----------------------------------------------------------



#endif

/*
vector <Mensagem> LerArquivo(char arquivototal[14] ){
    char caractere;
    vector <Mensagem> mensagens;
    FILE *arquivo;    

    arquivo = fopen(arquivototal, "r");
    vector <int> aux;
    Mensagem aux_2;
    int tamanho;
    int numero;
    int verificacao = 1;
    
    fscanf(arquivo, "%d", &tamanho);
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
            //cout << caractere << endl;
            //cout << numero << endl;
        }
    }
    fclose(arquivo);

    return mensagens;
}

*/