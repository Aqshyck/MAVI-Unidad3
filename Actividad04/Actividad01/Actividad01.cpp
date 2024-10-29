//BIBLIOTECAS//
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

//VARIABLES//
Texture tplataforma;
Sprite splataforma;
float escx, escy;
float heightp, widthp;
float heightw, widthw;
float x, y;

int main()
{
	//Cargar texturas
	tplataforma.loadFromFile("plataforma.jpg");

	//Cargar material
	splataforma.setTexture(tplataforma);

	//Escalado sprite
	heightw = 600; widthw = 800;
	heightp = (float)tplataforma.getSize().y;
	widthp = (float)tplataforma.getSize().x;
	escx = (widthw / 20) / widthp; 
	escy = (heightw / 10) / heightp;


	//Crear ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Plataformas");
	//Loop principal
	while (App.isOpen())
	{
		//Limpiar ventana
		App.clear();

		//Dibujamos
		for (int i = 0; i < 7; i++)
		{
			splataforma.setScale(escx, escy * (i + 1));
			splataforma.setPosition((25 + (25 * i) + (i * 40)), 600 - (60 * (i + 1)));
			App.draw(splataforma);
			if (i < 5)
			{
				splataforma.setScale(escy*5, escx);
				splataforma.setPosition(25 + (25 * 7) + (7 * 40), 600 - (60 * (7)));
				App.draw(splataforma);
			}
		}
		

		//Mostrar
		App.display();
	}
	return 0;
}