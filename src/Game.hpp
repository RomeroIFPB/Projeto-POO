#ifndef GAME_HPP
#define GAME_HPP

#include "FaseStart.hpp"

#include "../ASCII_Engine/Sprite.hpp"
#include "../ASCII_Engine/SpriteAnimado.hpp"
#include "../ASCII_Engine/Cores.hpp"

class Game
{
public:
	Game(){}
	~Game(){}
	
	static void run()
	{
		SpriteBuffer buffer(250,57);
	
		FaseStart start("FaseStart",Sprite("rsc/background.img"));
		
		start.init();
		start.run(buffer);

	}
};

#endif // GAME_HPP
