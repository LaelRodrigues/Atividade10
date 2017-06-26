#ifndef FALHASPILHA_H
#define FALHASPILHA_H

#include <exception>
using std::exception;
	
class PilhaCheia : public exception {
	public:
		const char* what();
};

const char* PilhaCheia::what(){
	return "Pilha cheia, Nao e possivel adicionar elementos.";
}

class PilhaVazia: public exception {
	public:
		const char* what();
};

const char* PilhaVazia::what(){
	return "Pilha Vazia, Nao e possivel remover ou acessar elementos.";
}

class CapacidadePilhaInvalida: public exception {
	public:
		const char* what();
};

const char* CapacidadePilhaInvalida::what(){
	return "Valor da capacidade maxima de elementos da pilha e invalido.";
}

#endif