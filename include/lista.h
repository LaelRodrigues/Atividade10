/**
 * @file	lista.h
 * @brief	Definicao de uma estrutura Node e uma classe Lista 
 * 			para representar uma lista duplamente encadeada generica			
 * @author	Lael Rodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */

#ifndef LISTA_H
#define LISTA_H

#include <iostream>

using std::cout;
using std::endl;

#include "falhastads.h"

namespace edb1 {

	/** 
	 * @struct  Node
	 * @brief	Tipo estrutura que  comtem um campo dado generico
	 *			e mais dois campos do tipo ponteiros genericos proximo e anterior 
	 *			que apontam para nos 
	 */
	template <typename T>
	struct Node {
			
		T dado;						/**< Dado */
		Node<T> *proximo = NULL;	/**< Proximo */
		Node<T> *anterior = NULL;	/**< Anterior */
			
	};

	/**
	 * @class 	Lista lista.h
	 * @brief 	Classe que representa um lista duplamente encadeada
	 * @details Os atributos da lista sao inicio e fim, que sao ponteiros
	 *			genericos do tipo Node que apontam para a cabeca e calda 
	 * 			da lista respectivamente		
	 */
	template <typename T> 
	class Lista {

		private:
			Node<T> *inicio; /**< Inicio  */
			Node<T> *fim;    /**< Fim */

		public:
			/** @brief Construtor padrao */
			Lista();

			/** @brief Destrutor */
			~Lista();

			/** @brief Insere elementos ordenados na lista */
			void inserirOrdenado(T elemento);

			/** @brief Acessa elementos da lista */
			bool acessar(T elemento);

			/** @brief Remove elementos da lista */
			void remover(T elemento);

	};

	//Construtor padrao
	template <typename T>
	Lista <T> :: Lista() {
		inicio = NULL;
		fim = NULL;
	}

	//Destrutor
	template<typename T>
	Lista <T>:: ~Lista() {

		Node<T> *temp = NULL; 
		while(inicio != NULL) {
			temp = inicio;
			inicio = inicio -> proximo;
			delete temp;
		}
	}

	 /**
	  * @param elemento Elemento a ser adicionado a lista
	  */
	template <typename T>
	void  Lista <T> :: inserirOrdenado(T elemento) {

		Node<T> *iterador = inicio;
		Node<T> *novoNode = new Node<T>;
		novoNode->dado = elemento;

		if(inicio == NULL && fim == NULL){
			inicio = novoNode;
			fim = novoNode;
			novoNode -> proximo = NULL;
			novoNode -> anterior = NULL;
		}

		else {


			while(iterador && elemento > iterador->dado && iterador->proximo ) {
				iterador = iterador->proximo;
			}
			if(iterador == inicio && elemento < iterador->dado){

				iterador->anterior = novoNode;
				novoNode->proximo = iterador;
				novoNode->anterior = NULL;
				inicio = novoNode;
			}

			else if(iterador == fim && elemento > fim->dado) {
				fim ->proximo = novoNode;
			   	(fim-> proximo)->anterior = fim;
			   	fim = fim -> proximo;
				fim ->proximo = NULL;
			}

			else {

				novoNode->proximo = iterador;
				(iterador->anterior)-> proximo = novoNode;
				novoNode->anterior = iterador->anterior;
				iterador->anterior = novoNode;
			}
		} 
	}

	/**
	 * @details Caso o usuario tente acessar um elemento que nao esteja 
	 *			presente na lista o programa exibe uma messagem de erro
	 * @param	elemento Elemento a ser acessado
	 * @return  true se o elemento esta na lista ou false caso contrario		
	 */
	template <typename T>
	bool Lista<T> ::acessar(T elemento){

		try {

			Node <T> *iterador = NULL;

			if(inicio == NULL) throw TAD_Vazia();
			iterador = inicio;

			while(iterador != NULL){
				if(iterador -> dado == elemento) {
					return true;
				}
				iterador = iterador->proximo;
			}

			throw ElementoNaoEncontrado();
		}
		catch (TAD_Vazia &excecao) {
			cout << excecao.what() << endl;
			return false;
		}
		catch (ElementoNaoEncontrado &excecao) {
			cout << excecao.what() << endl;
			return false;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return false;
		}	
	}

	/**
	 * @details Caso o usuario tente remover um elemento que nao esteja 
	 *			na lista ou a lista estaja vazia programa exibi uma messagem de erro
	 * @param	elemento Elemento a ser removido da lista			
	 */
	template <typename T>
	void Lista<T>:: remover(T elemento) {
		
		try {
			Node <T> *iterador = NULL;

			if(inicio == NULL) throw TAD_Vazia();
			iterador = inicio;

			while(iterador !=  NULL){
				if(iterador->dado == elemento){
					break;
				}
				iterador = iterador->proximo;
			}

			if(iterador == NULL) throw ElementoNaoEncontrado();

			else if(iterador == inicio && iterador->proximo) {
				inicio = inicio->proximo;
				inicio->anterior = NULL;
				delete iterador;
				return;
			}
			else if(iterador == inicio && iterador->proximo == NULL) {
				delete iterador;
				inicio = NULL;
				fim = NULL;
				return;
			}
			else if(iterador == fim){
				fim = fim->anterior;
				fim -> proximo = NULL;
				delete iterador;
				return;
			}
			else {
				(iterador->anterior)-> proximo = iterador->proximo;
				(iterador->proximo)->anterior = iterador->anterior;
				delete iterador;
				return;
			}
		}
		catch (TAD_Vazia &excecao) {
			cout << excecao.what() << endl;
			return;
		}
		catch (ElementoNaoEncontrado &excecao) {
			cout << excecao.what() << endl;
			return;
		}
		catch (...) {
			cout << "Erro desconhecido." << endl;
			return;
		}	
	}
}

#endif