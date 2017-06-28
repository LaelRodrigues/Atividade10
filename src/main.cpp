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
#include "testetads.h"

using namespace edb1;

#define TAM 10

int main() {

	int vet[TAM];

	srand(time(NULL));

	Pilha <int> pilha(TAM);
	Fila <int> fila(TAM);
	Lista <int> lista;

	cout << endl;
	cout << "-------------Testes------------" << endl << endl;
	testeSequencialIte(vet, TAM, 13);
	cout << endl;
	testeSequencialRec(vet, 0, 11);
	cout << endl;
	testeBinariaIte(vet, TAM, -1);
	cout << endl;
	testeBinariaRec(vet, TAM, 27);
	cout << endl;
	testeTernariaIte(vet, TAM, 14);
	cout << endl;
	testeTernariaRec(vet, TAM, -20);
	cout << endl;
	testeBubbleSort(vet, -5);
	cout << endl;
	testeInsertionSort(vet, -10);
	cout << endl;
	testeSelectionSort(vet, -15);
	cout << endl;
	testeQuickSort(vet, 0);
	cout << endl;
	testeMergeSort(vet, 10);
	cout << endl;
	testePilha(pilha, TAM);
	cout << endl;
	testeFila(fila, TAM);
	cout << endl;
	testeLista(lista);
	/*cout << "		[Pilha]"<< endl;
	cout << endl;
	pilha.pop();
	cout << "Elmentos:";
	for(int i = 0; i < TAM; i++) {
		pilha.push(i+1);
		cout << " " << pilha.top();
	}
	cout << endl;
	pilha.push(11);
	cout << "_________________________________" << endl;*/

	
	return 0;
}