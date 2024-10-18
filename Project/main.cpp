#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

void main(void)
{
	RenderWindow window(VideoMode(1200, 800), "Project");

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		RectangleShape player;
		player.setSize(Vector2f(200.f, 200.f));
		player.setPosition((1200-200)/2, (800-200)/2);
		player.setFillColor(Color::Magenta);

		window.clear(Color::White);
		window.draw(player);
		window.display();

	}
}