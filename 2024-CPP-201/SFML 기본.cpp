#include <SFML/Graphics.hpp>

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Example");

    // 원 모양의 도형 생성
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // 메인 루프
    while (window.isOpen())
    {
        // 이벤트 처리
        sf::Event event;
        while (window.pollEvent(event))
        {
            // 창이 닫히는 이벤트 처리
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 창 지우기
        window.clear();

        // 도형 그리기
        window.draw(shape);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
