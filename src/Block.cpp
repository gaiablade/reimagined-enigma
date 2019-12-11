#include "Block.h"

Block::Block() {
    solid = false;
}

Block::~Block() {
}

void Block::render(sf::RenderWindow* window) {
    window->draw(sprite);
}

void Block::setTexture(sf::Texture* texture) {
    this->texture = texture;
    sprite.setTexture(this->texture);
    sprite.setSize(static_cast<sf::Vector2f>(texture->getSize()));
}

sf::Texture* Block::getTexture() {
    return this->texture;
}

void Block::set_screen_position(sf::Vector2f pos) {
    sprite.setPosition(pos);
}

void Block::set_field_position(sf::Vector2f field_position) {
    this->field_position = field_position;
}

sf::Vector2f Block::get_screen_position() {
    return screen_position;
}

sf::Vector2f Block::getFieldPosition() {
    return field_position;
}

bool Block::canMoveLeft() {
    if (field_position.x - 1 < 0)
        return false;
    return true;
}

bool Block::canMoveRight() {
    if (field_position.x + 1 >= field_width_v)
        return false;
    return true;
}

void Block::moveLeft() {
    field_position = sf::Vector2f(field_position.x - 1, field_position.y);
}

void Block::moveRight() {
    field_position = sf::Vector2f(field_position.x + 1, field_position.y);
}

bool Block::canMoveDown() {
    if (field_position.y + 1 >= field_height_v)
        return false;
    return true;
}

void Block::moveDown() {
    field_position = sf::Vector2f(field_position.x, field_position.y + 1);
}

void Block::move_screen_position(sf::Vector2f offset) {
    sprite.move(offset);
}

void Block::update_rotation(int current_rotation, int tetramino_size) {
    switch (tetramino_size) {
        case 9: {
                    switch (current_rotation) {
                        case 0: {
                                    break;
                                }
                        case 1: {
                                    break;
                                }
                        case 2: break;
                        case 3: break;
                    }
                }
        case 16: {
                     switch (current_rotation) {
                         case 0: break;
                         case 1: break;
                         case 2: break;
                         case 3: break;
                     }
                 }
    }
}

bool Block::isSolid() {
    return solid;
}

void Block::setSolid() {
    solid = true;
}

void Block::setSolid(bool tf) {
    solid = tf;
}

void Block::setEmpty() {
    solid = false;
}
