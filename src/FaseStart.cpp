#include "FaseStart.hpp"
#include <iostream>
#include <future>
#include <chrono>

#include "../ASCII_Engine/ObjetoDeJogo.hpp"
#include "../ASCII_Engine/Cores.hpp"

std::string getInputWithTimeout(int timeout_seconds) {
    std::promise<std::string> promise;
    auto future = promise.get_future();

    std::thread([&promise]() {
        std::string input;
        std::getline(std::cin, input);
        promise.set_value(input);
    }).detach();

    if (future.wait_for(std::chrono::seconds(timeout_seconds)) == std::future_status::ready) {
        return future.get();
    } else {
        return ""; // Timeout, nenhum input
    }
}

void FaseStart::init()
{
	
	//Instanciar um objeto do tipo guerreiro
	guerreiro = new Guerreiro("Guerreiro",Sprite("rsc/guerreiro.img"),7,49);
	// Colocar na lista de objetos de jogo
	objs.push_back(guerreiro);
	for(int linha = 0; linha < 10; linha++)
	{
		for(int coluna = 0; coluna < 25; coluna++)
		{
			if(matriz_blocos[linha][coluna] == 1)
			{
				int new_linha = 4 + (linha * 3);
				int new_coluna = 7 + (coluna * 7);
				blocos.push_back(new Bloco( ObjetoDeJogo("Bloco", Sprite("rsc/bloco.img",COR::AZUL),new_linha,new_coluna)));
			}
		}
	}

	for(auto bloco : blocos){
		objs.push_back(bloco);
	}
	

}



unsigned FaseStart::run(SpriteBuffer &screen)
{
	std::string ent;
	//padrão
	screen.clear();
	draw(screen);
	system("clear");
	show(screen);

	while(true){
		ent = getInputWithTimeout(1);
		// Usar método decisão
		guerreiro->decisao(ent,blocos);

		update();
		draw(screen);
		system("clear");
		show(screen);
		std::cout << guerreiro->getPosL() << guerreiro->getPosC();
	}
}

