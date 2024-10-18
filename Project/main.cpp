#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

#define WINDOW_WIDTH	1200
#define WINDOW_HEIGHT	800

void main(void)
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Project");

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