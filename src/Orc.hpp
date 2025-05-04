#ifndef ORC_HPP
#define ORC_HPP

#include "../ASCII_Engine/Personagem.hpp"

class Orc : public Personagem
{
public:
	Orc(const Personagem &obj) : Personagem(obj) {}
	virtual ~Orc(){}
	
	void decisao(){}

private:
};

#endif // ORC_HPP
