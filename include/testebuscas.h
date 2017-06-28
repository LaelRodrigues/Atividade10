/**
 * @file	testebuscas.h
 * @brief	Definicao e implementacao das funcaes para 
 *			teste dos algoritmos de busca
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	25/06/2017
 * @date	27/06/2017
 */	

#ifndef TESTEBUSCAS_H
#define TESTEBUSCAS_H

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "buscaseq.h"
using edb1::sequencialIte;
using edb1::sequencialRec;

#include "buscabin.h"
using edb1::binariaIte;
using edb1::binariaRec;

#include "buscater.h"
using edb1::ternariaIte;
using edb1::ternariaRec;


/**
 * @brief Funcao de teste da busca sequencial iterativa 	 
 * @param vetor Sequencia onde o elemento sera buscado
 * @param tam Tamanho do vetor
 * @param chave Elemento a ser buscado 
 */
template<typename T>
void testeSequencialIte(T *vetor, int tam, T chave) {

	cout << "	[Busca sequncial iterativa]" << endl;	
	cout << endl;
	cout << "Vetor:";

	for(int i = 0; i < tam; i++) {
		vetor[i] = i+1;
		cout << " " << vetor[i];
	}

	cout << endl;
	cout << "Elemento: " << chave << endl;

	bool result = sequencialIte(vetor, tam, chave);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	cout << "_________________________________" << endl;
}
/**
 * @brief Funcao de teste da busca sequencial recursiva 	 
 * @param vetor Sequencia onde o elemento sera buscado
 * @param tam Tamanho do vetor
 * @param chave Elemento a ser buscado 
 */
template<typename T>
void testeSequencialRec(T *vetor, int tam, T chave) {

	cout << "	[Busca sequncial recursiva]" << endl;	
	cout << endl;
	cout << "Vetor:";
	
	for(int i = 0; i < tam; i++) {
		vetor[i] = i+1;
		cout << " " << vetor[i];
	}

	cout << endl;
	cout << "Elemento: " << chave << endl;

	bool result = sequencialRec(vetor, tam, chave);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	cout << "_________________________________" << endl;

}

/**
 * @brief Funcao de teste da busca binaria iterativa 	 
 * @param vetor Sequencia onde o elemento sera buscado
 * @param tam Tamanho do vetor
 * @param chave Elemento a ser buscado 
 */
template<typename T>
void testeBinariaIte(T *vetor, int tam, T chave){

	cout << "	[Busca binaria iterativa]" << endl;	
	cout << endl;
	cout << "Vetor:";
	
	for(int i = 0; i < tam; i++) {
		vetor[i] = i+1;
		cout << " " << vetor[i];
	}

	cout << endl;
	cout << "Elemento: " << chave << endl;

	bool result = binariaIte(vetor, tam, chave);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	cout << "_________________________________" << endl;

}

/**
 * @brief Funcao de teste da busca binaria recursiva 	 
 * @param vetor Sequencia onde o elemento sera buscado
 * @param tam Tamanho do vetor
 * @param chave Elemento a ser buscado 
 */
template<typename T>
void testeBinariaRec(T *vetor, int tam, T chave) {

	cout << "	[Busca binaria recursiva]" << endl;	
	cout << endl;
	cout << "Vetor:";
	
	for(int i = 0; i < tam; i++) {
		vetor[i] = i+1;
		cout << " " << vetor[i];
	}

	cout << endl;
	cout << "Elemento: " << chave << endl;

	bool result = binariaRec(vetor, tam, chave);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	cout << "_________________________________" << endl;
}


/**
 * @brief Funcao de teste da busca ternaria iterativa 	 
 * @param vetor Sequencia onde o elemento sera buscado
 * @param tam Tamanho do vetor
 * @param chave Elemento a ser buscado 
 */
template<typename T>
void testeTernariaIte(T *vetor, int tam, T chave) {

	cout << "	[Busca ternaria iterativa]" << endl;	
	cout << endl;
	cout << "Vetor:";
	
	for(int i = 0; i < tam; i++) {
		vetor[i] = i+1;
		cout << " " << vetor[i];
	}

	cout << endl;
	cout << "Elemento: " << chave << endl;

	bool result = ternariaIte(vetor, tam, chave);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	cout << "_________________________________" << endl;

}


/**
 * @brief Funcao de teste da busca ternaria recursiva 	 
 * @param vetor Sequencia onde o elemento sera buscado
 * @param tam Tamanho do vetor
 * @param chave Elemento a ser buscado 
 */
template<typename T>
void testeTernariaRec(T *vetor, int tam, T chave) {

	cout << "	[Busca ternaria recursiva]" << endl;	
	cout << endl;
	cout << "Vetor:";
	
	for(int i = 0; i < tam; i++) {
		vetor[i] = i+1;
		cout << " " << vetor[i];
	}

	cout << endl;
	cout << "Elemento: " << chave << endl;

	bool result = ternariaIte(vetor, tam, chave);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	cout << "_________________________________" << endl;

}

#endif