/**
 * @file	falhabusca.h
 * @brief	Definicao e implementacao da classe FalhaBusca
 *			para representar erros no algoritmos de busca
 * @author	Lael Rodrigues (laelrodrigues7@gmail.com)
 * @since	25/06/2017
 * @date	27/06/2017
 */


#ifndef FALHABUSCA_H
#define FALHABUSCA_H

#include <exception>
using std::exception;


/**
 * @class 	FalhaBusca falhabusca.h
 * @brief 	Classe que representa falhas nos algoritmos de busca
 */	
class FalhaBusca : public exception {
	public:
		/** @brief retorna uma messagem de erro */
		const char* what();
};

/** @return messagem de erro */
const char* FalhaBusca::what(){
	return "Elemento buscado nao foi encontrado ou tamanho do vetor e invalido.";
}


#endif