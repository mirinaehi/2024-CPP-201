#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

enum App {
	WIDTH = 1200,
	HEIGHT = 800
};


void main(void)
{
	RenderWindow window(VideoMode(App::WIDTH, App::HEIGHT), "Project");
	// 초당 프레임 조절(컴퓨터 성능과 상관없이 일정한 속도)
	window.setFramerateLimit(60);

	RectangleShape player;
	player.setSize(Vector2f(200.f, 200.f));
	player.setPosition((App::WIDTH - player.getSize().x) / 2, (App::HEIGHT - player.getSize().y) / 2);
	player.setFillColor(Color::Magenta);

	Font font;
	font.loadFromFile("gulim.ttc");

	Text text;
	text.setFont(font);
	text.setCharacterSize(50);
	text.setString(L"비빔");
	text.setFillColor(Color::Red);
	text.setPosition(App::WIDTH-text.getGlobalBounds().width-10, 0.f);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::Right))
			player.move(10.f, 0.f);
		if (Keyboard::isKeyPressed(Keyboard::Key::Left))
			player.move(-10.f, 0.f);
		if (Keyboard::isKeyPressed(Keyboard::Key::Up))
			player.move(0.f, -10.f);
		if (Keyboard::isKeyPressed(Keyboard::Key::Down))
			player.move(0.f, 10.f);



		window.clear(Color::White);
		window.draw(player);
		window.draw(text);
		window.display();

	}
}