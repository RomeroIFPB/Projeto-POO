#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP

#include "../ASCII_Engine/ObjetoDeJogo.hpp"
#include "Bloco.hpp"
class Personagem : public ObjetoDeJogo
{
public:
	Personagem(std::string name, const Sprite &s, int posL, int posC, bool vivo = true) : ObjetoDeJogo(name, s, posL, posC), vivo(true) {}
	virtual ~Personagem(){}

	virtual void decisao(std::string entrada, std::vector<Bloco*> blocos) = 0;
	
	bool isAlive() const { return vivo == true; };

private:
	bool vivo;
};

#endif // GUERREIRO_HPP
