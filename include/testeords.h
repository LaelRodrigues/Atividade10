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
	cout << "Vetor ordenado: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << "_________________________________" << endl;
}

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
	insertionSort(vet, tam);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << "_________________________________" << endl;
}

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
	selectionSort(vet, tam);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << "_________________________________" << endl;
}

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
	quickSort(vet, 0, tam-1);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << "_________________________________" << endl;
}

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
	mergeSort(vet, 0, tam-1);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < tam; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << "_________________________________" << endl;
}

#endif