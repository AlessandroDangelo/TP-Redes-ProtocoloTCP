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

void CriarArquivoSaida(vector <Mensagem> mensagem);

int ContadorVogal(Mensagem solicitacao);

int ContadorConsoante(Mensagem solicitacao);

int ContadorNmr(Mensagem solicitacao);

vector <Mensagem> LerArquivo();

//-------------------------------------------------- Servidor ----------------------------------------------------------

//void menu(int quantidade_clientes);

//-------------------------------------------------- Servidor ----------------------------------------------------------



//-------------------------------------------------- Cliente ----------------------------------------------------------



#endif