/**
 * @file	testetads.h
 * @brief	Definicao e implementacao das funcaes para 
 *			teste das TADs
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	26/06/2017
 * @date	27/06/2017
 */	

#ifndef TESTETADS_H
#define TESTETADS_H

#include "pilha.h"
using edb1::Pilha;

#include "fila.h"
using edb1::Fila;

#include "lista.h"
using edb1::Lista;


/**
 * @brief Funcao de teste da TAD pilha
 * @param pilha TAD pilha
 * @param capacidade Tamanho maximo da pilha
 */ 
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


/**
 * @brief Funcao de teste da TAD fila
 * @param fila TAD fila
 * @param capacidade Tamanho maximo da fila
 */
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


/**
 * @brief Funcao de teste da TAD lista
 * @param lista TAD lista
 */
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
	bool teste;
	teste = lista.acessar(20);
	if(teste) cout << "valor do elemento: " << 11 << endl;
	cout << "_________________________________" << endl;

}

#endif