//BIBLIOTECAS//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

//VARIABLES//
Texture trojo, tamarillo, tazul, tnegro;
Sprite srojo, samarillo, sazul, snegro;
float escxrojo, escxamarillo, escxazul, escxnegro, escyrojo, escyamarillo, escyazul, escynegro;
float xcuadro, ycuadro;
float xrojo, xamarillo, xazul, xnegro;
float yrojo, yamarillo, yazul, ynegro;


int main()
{
	//Cargar texturas
	trojo.loadFromFile("cuad_red.png");
	tamarillo.loadFromFile("cuad_yellow.png");
	tazul.loadFromFile("cuad_blue.png");
	tnegro.loadFromFile("chessb.png");
	
	//Aplicar texturas
	srojo.setTexture(trojo);
	samarillo.setTexture(tamarillo);
	sazul.setTexture(tazul);
	snegro.setTexture(tnegro);

	//Posicion y escalado sprite
	xcuadro = 300; ycuadro = 300;
	//Obtencion medidas texturas
	xrojo = trojo.getSize().x; yrojo = trojo.getSize().y;
	xamarillo = tamarillo.getSize().x; yamarillo = tamarillo.getSize().y;
	xazul = tazul.getSize().x; yazul = tazul.getSize().y;
	xnegro = tnegro.getSize().x; ynegro = tnegro.getSize().y;
	//Escalas
	escxrojo = xcuadro / xrojo; escyrojo = ycuadro / yrojo;
	escxamarillo = xcuadro / xamarillo; escyamarillo = ycuadro / yamarillo;
	escxazul = xcuadro / xazul; escyazul = ycuadro / yazul;
	escxnegro = xcuadro / xnegro; escynegro = ycuadro / ynegro;
	//Aplicando escalas
	srojo.setScale(escxrojo, escyrojo);
	samarillo.setScale(escxamarillo, escyamarillo);
	sazul.setScale(escxazul, escyazul);
	snegro.setScale(escxnegro, escynegro);
	//Posicion
	srojo.setPosition(0, 0);
	samarillo.setPosition(300, 0);
	sazul.setPosition(0, 300);
	snegro.setPosition(300, 300);


	//Crear ventana
	sf::RenderWindow App(sf::VideoMode(600, 600, 32), "Cuadrados");
	//Loop principal
	while (App.isOpen())
	{
		//Limpiar ventana
		App.clear();

		//Dibujamos
		App.draw(srojo);
		App.draw(samarillo);
		App.draw(sazul);
		App.draw(snegro);

		//Mostrar
		App.display();
	}
	return 0;
}