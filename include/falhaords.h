/**
 * @file	falhaords.h
 * @brief	Definicao e implementacao da classe TamanhoInvalido para
 *			representar erro de capacidade nos algoritmos ordenacao
 * @author	Lael Rodrigues (laelrodrigues7@gmail.com)
 * @since	25/06/2017
 * @date	27/06/2017
 */

#ifndef FALHAORDS_H
#define FALHAORDS_H

#include <exception>
using std::exception;

/**
 * @class 	TamanhoInvalido falhaords.h
 * @brief 	Classe que representa a falha de tamanho 
 *			nos algoritmos de ordenacao
 */		
class TamanhoInvalido : public exception {
	public:
		/** @brief retorna uma messagem de erro */
		const char* what();
};


/** @return messagem de erro */
const char* TamanhoInvalido::what(){
	return "Tamanho do vetor e invalido nao e possivel fazer a ordenacao.";
}

#endif
