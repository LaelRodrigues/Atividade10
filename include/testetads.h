#ifndef TESTETADS_H
#define TESTETADS_H

#include "pilha.h"
#include "fila.h"
#include "lista.h"

template<typename T>
void testePilha(T &pilha, int capacidade) {

	cout << "		[Pilha]"<< endl;
	cout << endl;
	pilha.pop();
	cout << "Elementos:";
	for(int i = 0; i < capacidade; i++) {
		pilha.push(i+1);
		cout << " " << pilha.top();
	}
	cout << endl;
	pilha.push(11);
	Pilha <float> invalida(-1);  
	cout << "_________________________________" << endl;

}

template<typename T>
void testeFila(T &fila, int capacidade) {

	cout << "		[Fila]"<< endl;
	cout << endl;
	fila.pop();
	cout << "Elementos:";
	for(int i = 0; i < capacidade; i++) {
		fila.push(i+1);
		cout << " " << fila.back();
	}
	cout << endl;
	fila.push(11);
	Fila <char> invalida(-5);  
	cout << "_________________________________" << endl;

}

template <typename T>
void testeLista(T &lista) {

	cout << "		[Lista]"<< endl;
	cout << endl;
	cout << "Remover: " << endl;
	lista.remover(1);
	for(int i = 0; i < 10; i++) {
		lista.inserirOrdenado(i);
	}
	cout << "Acessar: " << endl;
	Node<int> *acesso; 
	acesso = lista.acessar(11);
	if(acesso) cout << "valor do elemento: " << 11 << endl;
	cout << "_________________________________" << endl;

}

#endif