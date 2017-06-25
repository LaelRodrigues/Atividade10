/**
 * @file	quicksort.h
 * @brief	Definicao e implementacao do algoritmo de 
 *			ordenacao quicksort
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef QUICKSORT_H
#define QUICKSORT_H

namespace edb1 {

	/**
	 * @brief Funcao que ordena os elementos de um vetor
	 *		  atraves do algoritmo quicksort  
 	 * @param vetor Sequencia de elementos a serem ordenados
 	 * @param inicio Posicao inicial do vetor
 	 * @param fim Posicao do ultimo elemento do vetor
 	 */	
	template <typename T>
	void quickSort(T *vetor, int inicio, int fim){
	  
		int pivot, i, j, temp;
		if(inicio < fim) {
			pivot = inicio;
			i = inicio;
			j = fim;
			while(i < j) {
				while(vetor[i] <= vetor[pivot] && i <= fim)
					i++;
				while(vetor[j] > vetor[pivot] && j >= inicio)
					j--;
				if(i < j) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
				}
			}

		temp = vetor[j];
		vetor[j] = vetor[pivot];
		vetor[pivot] = temp;

		quickSort(vetor, inicio, j-1);
		quickSort(vetor, j+1, fim);
		
		}

	}
}

#endif