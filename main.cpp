#include "game.h"



int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(512, 256), "Tilemap");

    // define the level with an array of tile indices
    const int level[] =
    {
        4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        4, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 2, 4, 0, 0, 0,
        1, 1, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3,
        23, 1, 0, 4, 2, 3, 3, 3, 3, 4, 1, 1, 1, 4, 4, 4,
        4, 1, 1, 4, 3, 3, 3, 4, 4, 4, 1, 1, 1, 2, 4, 4,
        4, 4, 1, 4, 3, 4, 2, 2, 4, 4, 1, 1, 1, 1, 2, 4,
        2, 4, 1, 4, 3, 4, 2, 2, 2, 4, 1, 1, 1, 1, 1, 1,
        4, 4, 1, 4, 3, 2, 2, 2, 4, 4, 4, 4, 1, 1, 1, 1,
    };

    // create the tilemap from the level definition
    MyTiles map;
    if (!map.load("rpg_textures.png", sf::Vector2u(32, 32), level, 16, 8))
        return -1;

    // run the main loop
    while (window.isOpen())
    {
        // handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        // draw the map
        window.clear();
        window.draw(map);
        window.display();
    }

    return 0;
}

/**

int main()
{


    sf::Vertex vertex;

    //to set coordiantes
    vertex.position = sf::Vector2f(10.f,50.f);

    // to set color
    vertex.color = sf::Color::Green;

    vertex.texCoords = sf::Vector2f(100.f,100.f);

  // create an array of 3 vertices that define a triangle primitive
  
sf::VertexArray triangle(sf::Triangles, 3);

// define the position of the triangle's points
triangle[0].position = sf::Vector2f(10.f, 10.f);
triangle[1].position = sf::Vector2f(100.f, 10.f);
triangle[2].position = sf::Vector2f(100.f, 100.f);

// define the color of the triangle's points
triangle[0].color = sf::Color::Red;
triangle[1].color = sf::Color::Blue;
triangle[2].color = sf::Color::Green;

    sf::RenderWindow window(sf::VideoMode(640, 480), "Window name");

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {

            if(event.type == sf::Event::Closed)
            {
                // Close window button clicked.
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        // Draw here.
        //window.draw(triangle);
        window.display();
    




}

}

*/