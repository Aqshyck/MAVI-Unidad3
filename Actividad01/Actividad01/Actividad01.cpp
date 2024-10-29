//BIBLIOTECAS//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

//VARIABLES//
Texture texture_rcircle;
Sprite sprite_rcircle1;
Sprite sprite_rcircle2;
Sprite sprite_rcircle3;
Sprite sprite_rcircle4;

float posicion2w;
float posicion3h;
float posicion4h, posicion4w;
float valorw, valorh;

int main()
{
	//Cargar texturas
	texture_rcircle.loadFromFile("rcircle.png");

	//Cargar material
	sprite_rcircle1.setTexture(texture_rcircle);
	sprite_rcircle2.setTexture(texture_rcircle);
	sprite_rcircle3.setTexture(texture_rcircle);
	sprite_rcircle4.setTexture(texture_rcircle);

	//Posicion y escalado sprite
	valorw = (float)texture_rcircle.getSize().x;
	valorh = (float)texture_rcircle.getSize().y;
	sprite_rcircle1.setPosition(15, 15);
	posicion2w = 800 - valorw - 15;
	sprite_rcircle2.setPosition(posicion2w, 15);
	posicion3h = 600 - valorh - 15;
	sprite_rcircle3.setPosition(15, posicion3h);
	posicion4h = posicion3h;
	posicion4w = posicion2w;
	sprite_rcircle4.setPosition(posicion4w, posicion4h);

	//Crear ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper*4");
	//Loop principal
	while (App.isOpen())
	{
		//Limpiar ventana
		App.clear();

		//Dibujamos
		App.draw(sprite_rcircle1);
		App.draw(sprite_rcircle2);
		App.draw(sprite_rcircle3);
		App.draw(sprite_rcircle4);

		//Mostrar
		App.display();
	}
	return 0;
}