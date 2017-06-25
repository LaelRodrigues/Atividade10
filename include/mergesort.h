/**
 * @file	mergesort.h
 * @brief	Definicao e implementacao do algoritmo de 
 *			ordenacao mergesort
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef MERGESORT_H
#define MERGESORT_H

namespace edb1 {

	/**
	 * @brief Funcao de ordenação e intercalacao das sub partes
	 *		  do vetor
 	 * @param vetor Sequencia de elementos a serem ordenados
 	 * @param inicio Posicao inicial do vetor
 	 * @param meio Posicao central do vetor
 	 * @param fim Posicao final do vetor
 	 */	
	template <typename T>
	void merge(T *vetor, int inicio, int meio, int fim) {
	    
		int inicio1 = inicio, inicio2 = meio+1, aux = 0;
		T *vetAux = new T[fim-inicio+1];
		while(inicio1<=meio && inicio2<=fim){
			if(vetor[inicio1] <= vetor[inicio2]){
				vetAux[aux] = vetor[inicio1];
				inicio1++;
			}
			else {
				vetAux[aux] = vetor[inicio2];
				inicio2++;
			}
			aux++;
		}

		while(inicio1<=meio){ 
			vetAux[aux] = vetor[inicio1];
			aux++;inicio1++;
		}

		while(inicio2<=fim){  
			vetAux[aux] = vetor[inicio2];
			aux++; inicio2++;
		}

		for(aux=inicio;aux<=fim;aux++){   
			vetor[aux] = vetAux[aux-inicio];
		}
		delete [] vetAux;
	}
	/**
	 * @brief Funcao para dividir o vetor sub partes
 	 * @param vetor Sequencia de elementos a se rem ordenados
 	 * @param inicio Posicao inicial do vetor
 	 * @param fim Posicao final do vetor
 	 */	
	template<typename T>
	void mergeSort(T *vetor, int inicio, int fim){
		
		if (inicio < fim) {
		int meio = (inicio+fim)/2;
		mergeSort(vetor, inicio, meio);
		mergeSort(vetor, meio+1, fim);
		merge(vetor, inicio, meio, fim);
		}
	}
}

#endif