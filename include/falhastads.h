/**
 * @file	falhastads.h
 * @brief	Definicao e implementacao de classes para
 *			representar erros nas TADs pilha, fila e lista
 * @author	Lael Rodrigues (laelrodrigues7@gmail.com)
 * @since	25/06/2017
 * @date	27/06/2017
 */

#ifndef FALHASTADS_H
#define FALHASTADS_H

#include <exception>
using std::exception;
	
/**
 * @class 	TAD_Cheia falhastads.h
 * @brief 	Classe que representa o erro de quando a TAD
 *			esta cheia
 */	
class TAD_Cheia : public exception {
	public:
		/** @brief retorna uma messagem de erro */
		const char* what();
};


/** @return messagem de erro */
const char* TAD_Cheia::what(){
	return "TAD cheia, Nao e possivel adicionar elementos.";
}


/**
 * @class 	TAD_Vazia falhastads.h
 * @brief 	Classe que representa o erro de quando a TAD
 *			esta vazia
 */	
class TAD_Vazia: public exception {
	public:
		/** @brief retorna uma messagem de erro */
		const char* what();
};

/** @return messagem de erro */
const char* TAD_Vazia::what(){
	return "TAD vazia, Nao e possivel remover ou acessar elementos.";
}

/**
 * @class 	CapacidadeInvalida falhastads.h
 * @brief 	Classe que representa o erro de quando a TAD
 *			tem capacidade de elementos invalida
 */	
class CapacidadeInvalida: public exception {
	public:
		/** @brief retorna uma messagem de erro */
		const char* what();
};


/** @return messagem de erro */
const char* CapacidadeInvalida::what(){
	return "Valor da capacidade maxima de elementos e invalido.";
}

/**
 * @class 	ElementoNaoEncontrado falhastads.h
 * @brief 	Classe que representa o erro de quando a TAD
 *			nao encontra o elemento
 */	
class ElementoNaoEncontrado: public exception {
	public:
		/** @brief retorna uma messagem de erro */
		const char* what();
};


/** @return messagem de erro */
const char* ElementoNaoEncontrado::what() {
	return "Elemento buscado nao esta na TAD.";
}




#endif