/**
 * @file	selectionsort.h
 * @brief	Definicao e implementacao do algoritmo de 
 *			ordenacao selectionsort
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

namespace edb1 {

	/**
	 * @brief Funcao que ordena os elementos de um vetor
	 *		  atraves do algoritmo selectionsort
 	 * @param vetor Sequencia de elementos a serem ordenados
 	 * @param inicio Posicao inicial do vetor
 	 * @param fim Posicao final do vetor
 	 */	
	template<typename T>
	void selectionSort(T *vetor, int tam) {

		for(int i = 0; i < tam; i++){ 		
			int pos = i;
			for (int j = i+1; j < tam; j++){
				if(vetor[j] < vetor[pos]) pos = j;
			}
			T tmp = vetor[i];
			vetor[i] = vetor[pos];
			vetor[pos] = tmp;
		}

	}
}

#endif