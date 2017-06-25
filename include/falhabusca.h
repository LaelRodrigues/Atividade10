#ifndef FALHABUSCA_H
#define FALHABUSCA_H

#include <exception>
using std::exception;

namespace edb1 {
	
	class FalhaBusca : public exception {
		public:
			const char* what();
	};

	const char* FalhaBusca::what(){
		return "Elemento buscado nao foi encontrado ou tamanho do vetor e invalido.";
	}
}

#endif