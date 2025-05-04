#ifndef BLOCO_HPP
#define BLOCO_HPP

#include "../ASCII_Engine/ObjetoDeJogo.hpp"

class Bloco : public ObjetoDeJogo
{
public:
    Bloco(const ObjetoDeJogo &obj) : ObjetoDeJogo(obj), destruido(false) {}
	virtual ~Bloco(){}
	
private:
	bool destruido;
};

#endif