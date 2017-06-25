/**
 * @file	bubblesort.h
 * @brief	Definicao e implementacao do algoritmo de 
 *			ordenacao bubblesort
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <cstring>

#include <iostream>
using std::cout;
using std::endl;

namespace edb1 {

	/**
     * @brief Funcao que ordena os elementos de um vetor
     *        atraves do algoritmo bubblesort
     * @param vetor Sequencia de elementos a serem ordenados
     * @param tam Tamanho do vetor
     */ 
	template<typename T>
	void bubbleSort(T *vetor, int tam){

		T temp;

		for(int i = 0; i < tam; i++){
			for(int j = 0; j < tam-1; j++) {
				if(vetor[j+1] < vetor[j]) {
					temp = vetor[j];
					vetor[j] = vetor[j+1];
					vetor[j+1] = temp;
				}
			}
		}
	}
}

#endif