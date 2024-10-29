//BIBLIOTECAS//
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

//VARIABLES//
Texture texture_black;
Texture texture_white;
Sprite cuadro;
float escalaX, escalaY;
float height_black, width_black;
float height_white, width_white;
float height_cuadros, width_cuadros;


int main()
{
	//Cargar texturas
	texture_black.loadFromFile("chessb.png");
	texture_white.loadFromFile("chessw.png");

	//Escalado sprite
	height_cuadros = 800 / 8;
	width_cuadros = 800 / 8;
	height_black = (float)texture_black.getSize().y;
	width_black = (float)texture_black.getSize().x;
	height_white = (float)texture_white.getSize().y;
	width_white = (float)texture_white.getSize().x;
	escalaX = height_cuadros / height_black;
	escalaY = width_cuadros / width_black;
	cuadro.setScale(escalaX, escalaY);

	//Crear ventana
	sf::RenderWindow App(sf::VideoMode(800, 800, 32), "Ajedrez");
	//Loop principal
	while (App.isOpen())
	{
		//Limpiar ventana
		App.clear();

		//Dibujamos
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if ((i + j) % 2 == 0)
				{
					//Aplicamos textura y posicion
					cuadro.setTexture(texture_white);
					cuadro.setPosition(i * height_cuadros, j * width_cuadros);
					App.draw(cuadro);
				}
				else
				{
					//Aplicamos textura y posicion
					cuadro.setTexture(texture_black);
					cuadro.setPosition(i * height_cuadros, j * width_cuadros);
					App.draw(cuadro);
				}
			}
		}
		//Mostrar
		App.display();
	}
	return 0;
}