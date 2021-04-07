#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Servidor{
	int passivo;
	vector Clientes;
	int num_solicitacoes;
	string mensagem;
};

typedef struct Cliente{
	int passivo;
	string nome;
	int solicitacoes;
	Mensagem mensagem;
};

typedef struct Mensagem{
	string mensagem;
	int consoante;
	int vogais;
	int Numeros;
};

//-------------------------------------------------- Servidor ----------------------------------------------------------



//-------------------------------------------------- Cliente enviando ----------------------------------------------------------



//-------------------------------------------------- Cliente  recebendo ----------------------------------------------------------