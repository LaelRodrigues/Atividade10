/**
 * @file	pilha.h
 * @brief	Definicao e implementacao da classe pilha, que
 *			representa uma pilha
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	09/05/2017
 * @date	13/05/2017
 */	


#ifndef PILHA_H
#define PILHA_H

#include "falhastads.h"

namespace edb1 {

	/**
	 * @class   Pilha pilha.h
	 * @brief   Classe que representa um pilha
	 * @details Os atributos de uma pilha sao: o vetor, o tamanho maximo
	 *			e o tamanho corrente que aumenta a medida que os elementos 
	 *			sao inseridos na pilha  
	 */  
	template <typename T>
	class Pilha {
		private:

			/**< Representa o tamanho atual a medida que os elemento sao adicionados */
			int tam;

			/**< Vetor que armazena os elementos da pilha */
			T *vetor; 

			/**< Tamanho maximo que a pilha pode ter */
			int tamMax;

		public:

			/**< Construtor parametrizado */
			Pilha(int maximo);

			/**< Adicionar elementos a pilha*/
			int push(T elemento);

			/**< Remove elementos do topo da pilha */
			int pop();

			/**< Retorna o topo da pilha */
			T top();

			/**< Destrutor */	
			~Pilha();
	};


	/**
	 * @param maximo Tamanho maximo da pilha 
	 */
	template <typename T>
	Pilha <T>:: Pilha(int maximo) {
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
	 * @param elemento Elemento a ser adicionado a pilha 
	 * return O proximo indice onde o proximo elemento sera adicionado
	 */
	template<typename T>
	int Pilha <T>:: push(T elemento) {
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
	 * @details Caso o indice corrente seja igual ou menor que zero
	 *			nao podera mais ser removidos elementos 
	 * @return O indice anterior que representa a posicao da pilha 
	 *		   a ser removida
	 */
	template<typename T>
	int Pilha <T>:: pop(){
		try {
			if(tam <= 0) throw TAD_Vazia();
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
	 *@return O ultimo elemento da pilha 
	 */
	template<typename T>
	T Pilha <T>:: top() {
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


	/** Destrutor da pilha */
	template <typename T>
	Pilha <T>:: ~Pilha(){
		delete [] vetor;
	}
}

#endif