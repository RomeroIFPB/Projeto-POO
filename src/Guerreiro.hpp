#ifndef GUERREIRO_HPP
#define GUERREIRO_HPP

#include "Personagem.hpp"
#include "Bloco.hpp"
#include <string>

class Guerreiro : public Personagem
{
public:
	Guerreiro(std::string nome, const Sprite &sprite, int posL, int posC) : Personagem(nome,sprite,posL,posC) {};
	~Guerreiro(){};

	void decisao(std::string entrada, std::vector<Bloco*> blocos) override;

	void soltarBomba(){

	}

private:
};

#endif // GUERREIRO_HPP
