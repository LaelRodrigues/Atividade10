/**
 * @file	fila.h
 * @brief	Definicao e implementacao da classe Fila, que
 *			representa uma fila
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	22/06/2017
 * @date	22/06/2017
 */	


#ifndef FILA_H
#define FILA_H

#include <iostream>
using std::cout;
using std::endl;

#include "falhastads.h"

namespace edb1 {

	/**
	 * @class   Fila fila.h
	 * @brief   Classe que representa um fila
	 * @details Os atributos de uma fila sao: o vetor, o tamanho maximo
	 *			e o tamanho corrente que aumenta a medida que os elementos 
	 *			sao inseridos na pilha  
	 */  

	template <typename T>
	class Fila {
		private:

			/**< Representa o tamanho atual a medida que os elemento sao adicionados */
			int tam;

			/**< Vetor que armazena os elementos da pilha */
			T *vetor; 

			/**< Tamanho maximo que a pilha pode ter */
			int tamMax;

		public:

			/**< Construtor padrao */
			Fila();

			/**< Construtor parametrizado */
			Fila(int maximo);

			/**< Adicionar elemento no fim da fila*/
			int push(T elemento);

			/**< Remove elemento no inicio da fila */
			int pop();

			/**< retorna o primeiro elemento da fila */
			T front();

			/**< retorna o ultimo elemento da fila */	  
			T back();
	};

	/**
	 * @param maximo Tamanho maximo da fila 
	 */
	template <typename T>
	Fila <T>:: Fila(int maximo) {
		try {
			if(maximo <= 0) throw CapacidadeInvalida();
			vetor = new T[maximo];
			tam = 0;
			tamMax = maximo;
		}
		catch (CapacidadeInvalida &excecao) {
			vetor = new T[0];		
			cout << excecao.what() << endl;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
		}
	}


	/**
	 * @details Caso o indice corrente seja igual ou maior ao tamanho
	 *			maximo nao podera mais ser adicionado elementos
	 * @param elemento Elemento a ser adicionado a fila 
	 * return O proximo indice onde o proximo elemento sera adicionado
	 */
	template<typename T>
	int Fila <T>:: push(T elemento) {
		try {
			if(tam < tamMax){
				vetor[tam] = elemento;
				return tam++;	
			}
			throw TAD_Cheia();
		}
		catch (TAD_Cheia &excecao) {
			cout << excecao.what() << endl;
			return tam;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return tam;
		}
	}


	/**
	 * @details Caso o indice corrente seja igual a zero
	 *			nao podera mais ser removidos elementos 
	 * @return O indice anterior que representa a posicao da pilha 
	 *		   a ser removida
	 */
	template<typename T>
	int Fila <T>:: pop(){
		try {
			if(tam <= 0) throw TAD_Vazia();
			for(int i = 0; i < tam - 1; i++) {
				vetor[i] = vetor[i+1];
			}
			return tam--;
		}
		catch (TAD_Vazia &excecao) {
			cout << excecao.what() << endl;
			return 0;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return 0;
		}	
	}

	/**
	 * @details Caso o tamanho atual da fila seja igual a zero,
	 *			fila vazia, nao a elementos a ser acessados
	 * @return O primeiro elemento da fila
	 */
	template<typename T>
	T Fila <T>:: front(){
		try {
			if(tam <= 0) throw TAD_Vazia();
			return vetor[0];
		}
		catch (TAD_Vazia &excecao) {
			cout << excecao.what() << endl;
			return 0;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return 0;
		}	
	}

	/**
	 * @details Caso o tamanho atual da fila seja igual a zero,
	 *			fila vazia, nao a elementos a ser acessados
	 * @return O ultimo elemento da fila
	 */
	template<typename T>
	T Fila <T>:: back(){
		try {
			if(tam <= 0) throw TAD_Vazia();
			return vetor[tam-1];
		}
		catch (TAD_Vazia &excecao) {
			cout << excecao.what() << endl;
			return 0;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return 0;
		}	
	}
}

#endif