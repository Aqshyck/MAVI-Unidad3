//BIBLIOTECAS//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

//VARIABLES//
Texture tfondo;
Sprite sfondo;
float height_fondo, width_fondo;
float escalax, escalay;


int main()
{
	//Cargar texturas
	tfondo.loadFromFile("fondo.jpg");

	//Cargar material
	sfondo.setTexture(tfondo);

	//Posicion y escalado sprite
	sfondo.setPosition(0, 0);
	height_fondo = (float)tfondo.getSize().y;
	width_fondo = (float)tfondo.getSize().x;
	escalax = 800 / width_fondo;
	escalay = 600 / height_fondo;
	sfondo.setScale(escalax, escalay);
	tfondo.setSmooth(true);

	//Crear ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo");
	//Loop principal
	while (App.isOpen())
	{
		//Limpiar ventana
		App.clear();

		//Dibujamos
		App.draw(sfondo);

		//Mostrar
		App.display();
	}
	return 0;
}