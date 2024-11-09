#include <SFML/Graphics.hpp>

int main()
{
    // Crear ventana
    auto window = sf::RenderWindow({1920u, 1080u}, "CMake SFML Project");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        // Manejo de eventos
        for (auto event = sf::Event(); window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Limpiar la ventana
        window.clear(sf::Color(135,206,235));
        
        // Mostrar lo que se ha dibujado
        window.display();
    }

    return 0;
}
