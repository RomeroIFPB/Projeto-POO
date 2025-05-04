#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include "Personagem.hpp"

class Inimigo : public Personagem
{
public:
	Inimigo(const Personagem &obj) : Personagem(obj) {}
	virtual ~Inimigo(){}
	
	void decisao(){}

private:
};

#endif // INIMIGO_HPP
