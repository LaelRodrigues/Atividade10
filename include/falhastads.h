#ifndef FALHASPILHA_H
#define FALHASPILHA_H

#include <exception>
using std::exception;
	
class TAD_Cheia : public exception {
	public:
		const char* what();
};

const char* TAD_Cheia::what(){
	return "TAD cheia, Nao e possivel adicionar elementos.";
}

class TAD_Vazia: public exception {
	public:
		const char* what();
};

const char* TAD_Vazia::what(){
	return "TAD vazia, Nao e possivel remover ou acessar elementos.";
}

class CapacidadeInvalida: public exception {
	public:
		const char* what();
};

const char* CapacidadeInvalida::what(){
	return "Valor da capacidade maxima de elementos e invalido.";
}

class ElementoNaoEncontrado: public exception {
	public:
		const char* what();
};

const char* ElementoNaoEncontrado::what() {
	return "Elemento buscado nao esta na TAD.";
}




#endif