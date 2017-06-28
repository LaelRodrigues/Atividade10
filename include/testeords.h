/**
 * @file	testeords.h
 * @brief	Definicao e implementacao das funcaes para 
 *			teste dos algoritmos de ordenacao
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	25/06/2017
 * @date	27/06/2017
 */	

#ifndef TESTEORDS_H
#define TESTEORDS_H

#include <cstdlib>
using std::rand;

#include "bubblesort.h"
using edb1::bubbleSort;

#include "selectionsort.h"
using edb1::selectionSort;

#include "insertionsort.h"
using edb1::insertionSort;

#include "quicksort.h"
using edb1::quickSort;

#include "mergesort.h"
using edb1::mergeSort;


/**
 * @brief Funcao de teste de algoritmo de ordenacao bubble sort
 * @param vet Sequencia de elementos a serem ordenados
 * @param tam Tamanho do vetor
 */ 
template<typename T>
void testeBubbleSort(T *vet, int tam) {

	for(int i = 0; i < tam; i++) {
		vet[i] = rand() % 1000;
	}
	cout << "		[Bubble sort]" << endl;
	cout << endl;
	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao bubble sort" << endl;
	bubbleSort(vet, tam);
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "_________________________________" << endl;
}


/**
 * @brief Funcao de teste de algoritmo de ordenacao insertion sort
 * @param vet Sequencia de elementos a serem ordenados
 * @param tam Tamanho do vetor
 */ 
template<typename T>
void testeInsertionSort(T *vet, int tam) {

	for(int i = 0; i < tam; i++) {
		vet[i] = rand() % 1000;
	}
	cout << "		[Insertion sort]" << endl;
	cout << endl;
	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao insertion sort" << endl;
	cout << endl;
	insertionSort(vet, tam);
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "_________________________________" << endl;
}


/**
 * @brief Funcao de teste de algoritmo de ordenacao selection sort
 * @param vet Sequencia de elementos a serem ordenados
 * @param tam Tamanho do vetor
 */ 
template<typename T>
void testeSelectionSort(T *vet, int tam) {

	for(int i = 0; i < tam; i++) {
		vet[i] = rand() % 1000;
	}
	cout << "		[Selection sort]" << endl;
	cout << endl;
	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao selection sort" << endl;
	cout << endl;
	selectionSort(vet, tam);
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "_________________________________" << endl;
}


/**
 * @brief Funcao de teste de algoritmo de ordenacao quick sort
 * @param vet Sequencia de elementos a serem ordenados
 * @param tam Tamanho do vetor
 */ 
template<typename T>
void testeQuickSort(T *vet, int tam) {

	for(int i = 0; i < tam; i++) {
		vet[i] = rand() % 1000;
	}
	cout << "		[Quick sort]" << endl;
	cout << endl;
	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao quick sort" << endl;
	cout << endl;
	quickSort(vet, 0, tam-1);
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "_________________________________" << endl;
}


/**
 * @brief Funcao de teste de algoritmo de ordenacao merge sort
 * @param vet Sequencia de elementos a serem ordenados
 * @param tam Tamanho do vetor
 */ 
template<typename T>
void testeMergeSort(T *vet, int tam) {

	for(int i = 0; i < tam; i++) {
		vet[i] = rand() % 1000;
	}
	cout << "		[Merge sort]" << endl;
	cout << endl;
	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao merge sort" << endl;
	cout << endl;
	mergeSort(vet, 0, tam-1);
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "_________________________________" << endl;
}

#endif