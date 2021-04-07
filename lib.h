#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct servidor Servidor;
typedef struct cliente Cliente;
typedef struct mensagem Mensagem;

struct servidor{
	int passivo;
	Cliente Clientes;
	int num_solicitacoes;
	char mensagem;
};

struct cliente{
	int passivo;
	char nome;
	int solicitacoes;
	Mensagem mensagem;
};

struct mensagem{
	char mensagem;
	int consoante;
	int vogais;
	int Numeros;
}

//-------------------------------------------------- Servidor ----------------------------------------------------------



//-------------------------------------------------- Cliente enviando ----------------------------------------------------------



//-------------------------------------------------- Cliente  recebendo ----------------------------------------------------------