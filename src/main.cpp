/**
 * @file	main.h
 * @brief	Arquivo corpo principal de teste
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::srand;

#include <ctime>
using std::time;

#include "buscaseq.h"
#include "buscabin.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "bubblesort.h"
#include "pilha.h"
#include "buscater.h"
#include "testebuscas.h"
#include "testeords.h"

using namespace edb1;

#define TAM 10

int main() {

	int vet[TAM];

	srand(time(NULL));
	
	cout << endl;
	cout << "-------------Testes------------" << endl << endl;
	testeSequencialIte(vet, TAM, 5);
	cout << endl;
	testeSequencialRec(vet, TAM, 10);
	cout << endl;
	testeBinariaIte(vet, TAM, 2);
	cout << endl;
	testeBinariaRec(vet, TAM, 3);
	cout << endl;
	testeBubbleSort(vet, TAM);
	cout << endl;
	testeInsertionSort(vet, TAM);
	cout << endl;
	testeSelectionSort(vet, TAM);
	cout << endl;
	testeQuickSort(vet, TAM);
	cout << endl;
	testeMergeSort(vet, TAM);
	
	return 0;
}