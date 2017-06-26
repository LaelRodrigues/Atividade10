/**
 * @file	buscaster.h
 * @brief	Definicao e implementacao das funçães de busca 
 *			ternaria em sua versao iterativa e recursiva
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	23/06/2017
 * @date	23/06/2017
 */	

#ifndef TERNARIA_H
#define TERNARIA_H

#include <cstring>

namespace edb1 {

	/**
	 * @brief Funcao de busca ternaria que verifica de maneira 
	 *        iterativa se um elemento esta presente no vetor 	 
 	 * @param vetor Sequencia onde o elemento sera buscado
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template<typename T>
	bool ternariaIte(T *vetor, int tam, T chave){

		try {

			if(tam <= 0) throw FalhaBusca();

			int esq, dir;
			int meio1, meio2;

			esq = 0;
			dir = tam - 1;

			do {
				meio1 = esq + (dir - esq)/3;
				meio2 = (2 * meio1) + esq;

				if(chave == vetor[meio1] || chave == vetor[meio2]) {
					return true;
				}

				else if(chave < vetor[meio1]) {
					dir = meio1 - 1;
				}
				
				else if(chave > vetor[meio2]) {
					esq = meio2 + 1;
				}
				else {
					esq = meio1 + 1;
					dir = meio2 - 1;
				}
			} while(dir >= esq);

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

	template<>
	bool ternariaIte< char* >(char** vetor, int tam, char* chave) {

		try {

			if(tam <= 0) throw FalhaBusca();
			int esq, dir;
			int meio1, meio2;

			esq = 0;
			dir = tam - 1;

			do {
				meio1 = esq + (dir - esq)/3;
				meio2 = (2 * meio1) + esq;

				if(strcmp(chave, vetor[meio1]) == 0 || strcmp(chave, vetor[meio2]) == 0) {
					return true;
				}

				else if(strcmp(chave, vetor[meio1]) < 0) {
					dir = meio1 - 1;
				}
				
				else if(strcmp(chave, vetor[meio2]) > 0) {
					esq = meio2 + 1;
				}
				else {
					esq = meio1 + 1;
					dir = meio2 - 1;
				}
			} while(dir >= esq);

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
	 * @brief Funcao de busca ternaria que verifica de maneira 
	 *        recursiva se um elemento esta presente no vetor 	 
 	 * @param vetor Sequencia onde o elemento sera buscado
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template<typename T>
	bool ternariaRec(T *vetor, int tam, T chave){

		try { 

			if(tam <= 0) throw FalhaBusca();
			int meio1, meio2;	

			if(tam == 1) {
				meio1 = 0;
				meio2 = 1;
			}
			else {
				meio1 = tam/3;
				meio2 = 2*tam/3;
			} 

			if(chave == vetor[meio1] || chave == vetor[meio2]) {
				return true;
			}

			if(meio1 == meio2) throw FalhaBusca();
			
			if(chave < vetor[meio1]) {
				return ternariaRec(vetor, meio1-1, chave);
			}
			if(chave > vetor[meio2]){
				return ternariaRec(vetor+meio2+1, tam-meio2, chave);
			}
			else {
				return ternariaRec(vetor+meio1+1, meio2-1, chave);
			}
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

	template<>
	bool ternariaRec< char* >(char** vetor, int tam, char* chave) {

		try {

			if(tam == 0) throw FalhaBusca();
			int meio1, meio2;	

			if(tam == 1) {
				meio1 = 0;
				meio2 = 1;
			}
			else {
				meio1 = tam/3;
				meio2 = 2*tam/3;
			} 

			if(strcmp(chave, vetor[meio1]) == 0 || strcmp(chave, vetor[meio2]) == 0) {
				return true;
			}

			if(meio1 == meio2) {
				return false;
			}

			if(strcmp(chave, vetor[meio1]) < 0) {
				return ternariaRec(vetor, meio1-1, chave);
			}
			if(strcmp(chave, vetor[meio2]) > 0){
				return ternariaRec(vetor+meio2+1, tam-meio2, chave);
			}
			else {
				return ternariaRec(vetor+meio1+1, meio2-1, chave);
			}
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
}

#endif