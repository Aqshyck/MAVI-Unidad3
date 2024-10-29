//BIBLIOTECAS//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

//VARIABLES//
Texture tobj;
Sprite sobj;


int main()
{
	//Cargar texturas
	tobj.loadFromFile("plataforma.jpg");

	//Cargar material
	sobj.setTexture(tobj);

	//Posicion y centro sprite
	sf::Vector2f center = sf::Vector2f(sobj.getLocalBounds().width / 2.f, sobj.getLocalBounds().height / 2.f);
	sobj.setOrigin(center);
	sobj.setPosition(400, 300);
	float angulo = 0.f;

	//Crear ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Rotacion");
	//Loop principal
	while (App.isOpen())
	{
		//Rotar el sprite
		angulo += 0.01;
		sobj.setRotation(angulo);

		//Limpiar ventana
		App.clear();

		//Dibujamos
		App.draw(sobj);

		//Mostrar
		App.display();
	}
	return 0;
}