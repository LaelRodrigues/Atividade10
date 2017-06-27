#ifndef FALHAORDS_H
#define FALHAORDS_H

#include <exception>
using std::exception;
	
class TamanhoInvalido : public exception {
	public:
		const char* what();
};

const char* TamanhoInvalido::what(){
	return "Tamanho do vetor e invalido nao e possivel fazer a ordenacao.";
}

#endif
