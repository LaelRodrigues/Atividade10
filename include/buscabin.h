/**
 * @file	buscabin.h
 * @brief	Definicao e implementacao das funçães de busca 
 *			binaria em sua versao iterativa e recursiva
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef BUSCABIN_H
#define BUSCABIN_H

#include "falhabusca.h"

#include <cstring>

namespace edb1 {

	/**	
	 * @brief Funcao de busca binaria que verifica de maneira 
	 *        iterativa se um elemento esta presente no vetor 	 
 	 * @param vetor Sequencia onde o elemento sera buscado
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template<typename T>	
	bool binariaIte(T *vetor, int tam, T chave) {

		try {
			if(tam <= 0) throw FalhaBusca();
			
			int esq = 0;
			int dir = tam-1;

			while(esq <= dir) {

				int meio = (esq + dir) / 2;

				if(chave == vetor[meio]) {
					return true;
				}
				if(chave > vetor[meio]) {
					esq = meio + 1; 
				}
				else {
					dir = meio - 1;
				}
			}
			throw FalhaBusca();
		}
		catch (FalhaBusca &exececao) {
			cout << exececao.what() << endl;
			return false;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return false;
		}
	}

	/**
	 * @brief Funcao especializada de busca binaria que verifica de
	 *		  maneira iterativa se uma string pertence ao vetor de strings  	 
 	 * @param vetor Sequencia onde o elemento sera buscado	
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template<>	
	bool binariaIte<char* >(char** vetor, int tam, char* chave) {

		if(tam <= 0) {
			return false;
		}

		int esq = 0;
		int dir = tam-1;

		while(esq <= dir) {

			int meio = (esq + dir) / 2;

			if(strcmp(chave, vetor[meio]) == 0) {
				return true;
			}
			if(strcmp(chave, vetor[meio]) >  0) {
				esq = meio + 1; 
			}
			else {
				dir = meio - 1;
			}
		}

		return false;	
	}

	/**	
	 * @brief Funcao de busca binaria que verifica de maneira 
	 *        recursiva se um elemento esta presente no vetor 	 
 	 * @param vetor Sequencia onde o elemento sera buscado
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template<typename T>	
	bool binariaRec(T *vetor, int tam, T chave) {

		if(tam <= 0) {
			return false;
		}

		int meio = tam/2;

		if(chave == vetor[meio]) {
			return true;
		}

		if(chave > vetor[meio]) {
			return binariaRec(vetor+meio+1, tam-meio-1, chave);
		}
		else {
			return binariaRec(vetor, meio, chave);
		}
	}

	/**
	 * @brief Funcao especializada de busca binaria que verifica de
	 *		  maneira recursiva se uma string pertence ao vetor de strings  	 
 	 * @param vetor Sequencia onde o elemento sera buscado	
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template<>	
	bool binariaRec< char* >(char** vetor, int tam, char* chave) {

		if(tam <= 0) {
			return false;
		}

		int meio = tam/2;

		if(strcmp(chave, vetor[meio]) == 0) {
			return true;
		}

		if(strcmp(chave, vetor[meio]) > 0) {
			return binariaRec(vetor+meio+1, tam-meio-1, chave);
		}
		else {
			return binariaRec(vetor, meio, chave);
		}
	}
}
#endif