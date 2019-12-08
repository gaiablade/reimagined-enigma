
#pragma once
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Field.h"

class Block {
    public:
        // Default Constructor:
        Block();
        ~Block();
        // Display the block to the window:
        void render(sf::RenderWindow* window); 
        // Set Texture of block:
        void setTexture(sf::Texture* texture); // from std::map textures in Field object
        // Set Screen Position:
        void set_screen_position(sf::Vector2f pos);
        sf::Vector2f get_screen_position();
        // Set Field Position:
        void set_field_position(sf::Vector2f field_position);
        sf::Vector2f get_field_position();
        bool can_move_left();
        bool can_move_right();
        void move_left();
        void move_right();
        // Move screen_position:
        void move_screen_position(sf::Vector2f offset);
        // Rotation:
        void update_rotation(int current_rotation, int tetramino_size);
    private:
        // Sprite:
        sf::RectangleShape sprite;
        sf::Texture* texture;
        // Coordinate Position on Screen:
        sf::Vector2f screen_position;
        // Field Position:
        sf::Vector2f field_position;
};
