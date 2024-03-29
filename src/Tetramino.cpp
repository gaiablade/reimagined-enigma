#include "Tetramino.h"

// Default Constructor:
Tetramino::Tetramino() {
}

// Constructor with type:
Tetramino::Tetramino(int type, sf::Texture* texture) : type(type) {
    // Initial Rotation Value:
    currentRotation = 0;

    initBlockLayout();
    initBlockPositions(texture);
}

// Default Destructor:
Tetramino::~Tetramino() {
}

// Initialize Positions of blocks:
void Tetramino::initBlockLayout() {
    switch (type) {
        case Piece::I: initPos.resize(16);
                  initPos = {
                      '_', '_', '_', '_',
                      'X', 'X', 'X', 'X',
                      '_', '_', '_', '_',
                      '_', '_', '_', '_' 
                  };
                  blockPositions = {4, 5, 6, 7};
                  break;
        case Piece::T: initPos.resize(9);
                  initPos = {
                      '_', 'X', '_',
                      'X', 'X', 'X',
                      '_', '_', '_' 
                  }; 
                  blockPositions = {1, 3, 4, 5};
                  break;
        case Piece::J: initPos.resize(9);
                  initPos = {
                      'X', '_', '_',
                      'X', 'X', 'X',
                      '_', '_', '_'
                  };   
                  blockPositions = {0, 3, 4, 5};
                  break;
        case Piece::L: initPos.resize(9);
                  initPos = {
                      '_', '_', 'X',
                      'X', 'X', 'X',
                      '_', '_', '_'
                  };
                  blockPositions = {2, 3, 4, 5};
                  break;
        case Piece::O: initPos.resize(4);
                  initPos = {
                      'X', 'X',
                      'X', 'X'
                  };
                  blockPositions = {0, 1, 2, 3};
                  break;
        case Piece::S: initPos.resize(9);
                  initPos = {
                      '_', 'X', 'X',
                      'X', 'X', '_',
                      '_', '_', '_'
                  }; 
                  blockPositions = {1, 2, 3, 4};
                  break;
        case Piece::Z: initPos.resize(9);
                  initPos = {
                      'X', 'X', '_',
                      '_', 'X', 'X',
                      '_', '_', '_'
                  }; 
                  blockPositions = {0, 1, 4, 5};
                  break;
        case Piece::U: initPos.resize(9);
                  initPos = {
                      'X', '_', 'X',
                      'X', 'X', 'X',
                      '_', '_', '_'
                  };
                  blockPositions = {0, 2, 3, 4, 5};
                  break;
        case Piece::M: initPos.resize(9);
                  initPos = {
                      'X', '_', '_',
                      'X', 'X', '_',
                      '_', 'X', 'X'
                  };
                  blockPositions = {0, 3, 4, 7, 8};
                  break;
        case Piece::F: initPos.resize(9);
                  initPos = {
                      '_', 'X', 'X',
                      'X', 'X', '_',
                      '_', 'X', '_'
                  };
                  blockPositions = {1, 2, 3, 4, 7};
                  break;
        case Piece::N: initPos.resize(16);
                  initPos = {
                      '_', '_', 'X', '_',
                      '_', '_', 'X', '_',
                      '_', 'X', 'X', '_',
                      '_', 'X', '_', '_'
                  };
                  blockPositions = {2, 6, 9, 10, 13};
                  break;
        case Piece::P: initPos.resize(16);
                  initPos = {
                      '_', '_', '_', '_',
                      '_', 'X', 'X', '_',
                      '_', 'X', 'X', '_',
                      '_', 'X', '_', '_'
                  };
                  blockPositions = {5, 6, 9, 10, 13};
                  break;
        case Piece::V: initPos.resize(25);
                  initPos = {
                      '_', '_', 'X', '_', '_',
                      '_', '_', 'X', '_', '_',
                      '_', '_', 'X', 'X', 'X',
                      '_', '_', '_', '_', '_',
                      '_', '_', '_', '_', '_'
                  };
                  blockPositions = {2, 7, 12, 13, 14};
                  break;
        case Piece::X: initPos.resize(9);
                  initPos = {
                      '_', 'X', '_',
                      'X', 'X', 'X',
                      '_', 'X', '_'
                  };
                  blockPositions = {1, 3, 4, 5, 7};
                  break;
        case Piece::Y: initPos.resize(16);
                  initPos = {
                      '_', '_', '_', '_',
                      'X', 'X', 'X', 'X',
                      '_', 'X', '_', '_',
                      '_', '_', '_', '_'
                  };
                  blockPositions = {4, 5, 6, 7, 9};
                  break;
        case Piece::z: initPos.resize(9);
                  initPos = {
                      'X', 'X', '_',
                      '_', 'X', '_',
                      '_', 'X', 'X'
                  };
                  blockPositions = {0, 1, 4, 7, 8};
                  break;
        case Piece::t: initPos.resize(25);
                  initPos = {
                      '_', '_', 'X', '_', '_',
                      '_', '_', 'X', '_', '_',
                      '_', 'X', 'X', 'X', '_',
                      '_', '_', '_', '_', '_',
                      '_', '_', '_', '_', '_'
                  };
                  blockPositions = {2, 7, 11, 12, 13};
                  break;
        case Piece::l: initPos.resize(16);
                  initPos = {
                      '_', 'X', 'X', '_',
                      '_', '_', 'X', '_',
                      '_', '_', 'X', '_',
                      '_', '_', 'X', '_'
                  };
                  blockPositions = {1, 2, 6, 10, 14};
                  break;
        case Piece::i: initPos.resize(25);
                  initPos = {
                      '_', '_', '_', '_', '_',
                      '_', '_', '_', '_', '_',
                      'X', 'X', 'X', 'X', 'X',
                      '_', '_', '_', '_', '_',
                      '_', '_', '_', '_', '_'
                  };
                  blockPositions = {10, 11, 12, 13, 14};
                  break;
        case Piece::y: initPos.resize(16);
                  initPos = {
                      '_', '_', '_', '_',
                      '_', 'X', '_', '_',
                      'X', 'X', 'X', 'X',
                      '_', '_', '_', '_'
                  };
                  blockPositions = {5, 8, 9, 10, 11};
                  break;
        case Piece::s: initPos.resize(9);
                  initPos = {
                      '_', 'X', 'X',
                      '_', 'X', '_',
                      'X', 'X', '_'
                  };
                  blockPositions = {1, 2, 4, 6, 7};
                  break;
        case Piece::f: initPos.resize(9);
                  initPos = {
                      'X', 'X', '_',
                      '_', 'X', 'X',
                      '_', 'X', '_'
                  };
                  blockPositions = {0, 1, 4, 5, 7};
                  break;
        case Piece::Q: initPos.resize(16);
                  initPos = {
                      '_', '_', '_', '_',
                      '_', 'X', 'X', '_',
                      '_', 'X', 'X', '_',
                      '_', '_', 'X', '_'
                  };
                  blockPositions = {5, 6, 9, 10, 14};
                  break;
        case Piece::j: initPos.resize(16);
                  initPos = {
                      '_', 'X', 'X', '_',
                      '_', 'X', '_', '_',
                      '_', 'X', '_', '_',
                      '_', 'X', '_', '_'
                  };
                  blockPositions = {1, 2, 5, 9, 13};
                  break;
        case Piece::n: initPos.resize(16);
                  initPos = {
                      '_', 'X', '_', '_',
                      '_', 'X', '_', '_',
                      '_', 'X', 'X', '_',
                      '_', '_', 'X', '_'
                  };
                  blockPositions = {1, 5, 9, 10, 14};
                  break;
        default: initPos.resize(9);
                 initPos = {
                      'X', 'X', '_',
                      '_', 'X', '_',
                      '_', '_', 'X'
                 }; 
                 blockPositions = {0, 1, 4, 5};
    }
}

void Tetramino::initBlockPositions(sf::Texture* texture) {

    for (int i = 0; i < getNumBlocks(); i++) {
        blocks.emplace_back(new Block());
    }
    for (auto& block : blocks) {
        block->setTexture(texture);
    }

    // Place Tetramino at the top-center of the field:
    verticalPosition = 0;
    if (getType() == 6) {
        verticalPosition = -1;
    }
    int xOff;
    switch (initPos.size()) {
        case 4: xOff = 4;
                break;
        case 9: xOff = 3;
                break;
        case 16: xOff = 3;
                 break;
        case 25: xOff = 3;
                 break;
    }
    horizontalPosition = xOff;
    // I and O : 10 / 2 - 3 = 2
    // Else : 10 / 2 - 2 = 3

    switch (initPos.size()) {
        case 4: for (int i = 0; i < getNumBlocks(); i++) {
                    blocks[i]->setScreenPosition(sf::Vector2f(
                                horizontal_offset + 50 * (blockPositions[i] % 2) + 50 * (horizontalPosition),
                                vertical_offset + 50 * (blockPositions[i] / 2) + 50 * (verticalPosition)
                                ));
                    blocks[i]->setFieldPosition(sf::Vector2i(
                                blockPositions[i] % 2 + horizontalPosition,
                                blockPositions[i] / 2 + verticalPosition
                                ));
                    blocks[i]->setSolid();
                }
                break;
        case 9 : for (int i = 0; i < getNumBlocks(); i++) {
                     blocks[i]->setScreenPosition(sf::Vector2f(
                                 horizontal_offset + 50 * (blockPositions[i] % 3) + 50 * (horizontalPosition),
                                 vertical_offset + 50 * (blockPositions[i] / 3) + 50 * (verticalPosition)
                                 ));
                     blocks[i]->setFieldPosition(sf::Vector2i(
                                 blockPositions[i] % 3 + horizontalPosition,
                                 blockPositions[i] / 3 + verticalPosition
                                 ));
                     blocks[i]->setSolid();
                 }
                 break;
        case 16 : for (int i = 0; i < getNumBlocks(); i++) {
                      blocks[i]->setScreenPosition(sf::Vector2f(
                                  horizontal_offset + 50 * (blockPositions[i] % 4) + 50 * (horizontalPosition),
                                  vertical_offset + 50 * (blockPositions[i] / 4) + 50 * (verticalPosition)
                                  ));
                      blocks[i]->setFieldPosition(sf::Vector2i(
                                  blockPositions[i] % 4 + horizontalPosition,
                                  blockPositions[i] / 4 + verticalPosition
                                  ));
                      blocks[i]->setSolid();
                  }
                  break;
        case 25 : for (int i = 0; i < getNumBlocks(); i++) {
                      blocks[i]->setScreenPosition(sf::Vector2f(
                                  horizontal_offset + 50 * (blockPositions[i] % 5) + 50 * (horizontalPosition),
                                  vertical_offset + 50 * (blockPositions[i] / 5) + 50 * (verticalPosition)
                                  ));
                      blocks[i]->setFieldPosition(sf::Vector2i(
                                  blockPositions[i] % 5 + horizontalPosition,
                                  blockPositions[i] / 5 + verticalPosition
                                  ));
                      blocks[i]->setSolid();
                  }
                  break;
    }
}

// Render Tetramino:
void Tetramino::render(sf::RenderWindow* window) {
    for (auto& i : blocks)
        i->render(window);
}

// Return character at the rotated index:
char Tetramino::getBlock(int x, int y) {
    if (initPos.size() == 9) {
        switch (currentRotation % 4) {
            case 0: // Return the unrotated character:
                return initPos[x + ( 3 * y )]; 
            case 1: return initPos[( 3 * x ) - y + 2];
            case 2: return initPos[8 - ( 3 * y ) - x];
            case 3: return initPos[6 - ( 3 * x ) + y];
            default: return 'E';
        }
    }
    else {
        switch (currentRotation % 4) {
            case 0: return initPos[0 + ( 4 * y ) + x];
            case 1: return initPos[3 + ( 4 * x ) - y];
            case 2: return initPos[15 - ( 4 * y ) - x];
            case 3: return initPos[12 - ( 4 * x ) + y];
            default: return 'E';
        }
    }
}

// Rotations:
void Tetramino::rotate(int r, int offset) {
    currentRotation = (currentRotation + r) % 4;
    rotateBlocks(offset);
}

void Tetramino::rotateBlocks(int offset) {
//    int i = 0;
    switch (offset) {
        case 1: break; // in place
        case 3: verticalPosition--; // up
                break;
        case 2: verticalPosition++; // down
                break;
        case 4: horizontalPosition--; // left
                break;
        case 5: horizontalPosition++; // right
                break;
        case 6: horizontalPosition--; // up left
                verticalPosition--;
                break;
        case 7: horizontalPosition++; // up right
                verticalPosition--;
                break;
        case 8: horizontalPosition--; // down left
                verticalPosition++;
                break;
        case 9: horizontalPosition++; // down right
                verticalPosition++;
                break;
        case 10: horizontalPosition -= 1;
                 verticalPosition += 2;
                 break;
        case 11: horizontalPosition += 1;
                 verticalPosition += 2;
                 break;
    }
//    for (auto& b : blocks) {
    for (int i = 0; i < getNumBlocks(); i++) {
        int x;
        int y;
        int pos;
        switch (initPos.size()) {
            case 4: x = blockPositions[i] % 2;
                    y = blockPositions[i] / 2;
                    switch (currentRotation % 4) {
                        case 0: pos = x + (2 * y);
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 2) + horizontalPosition, (pos / 2) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 2) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 2) + 50 * (verticalPosition))
                                        );
                                break;
                        case 1: pos = (2 * x) - y + 1;
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 2) + horizontalPosition, (pos / 2) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 2) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 2) + 50 * (verticalPosition))
                                        );
                                break;
                        case 2: pos = 3 - (2 * y) - x;
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 2) + horizontalPosition, (pos / 2) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 2) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 2) + 50 * (verticalPosition))
                                        );
                                break;
                        case 3: pos = 2 - (2 * x) + y;
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 2) + horizontalPosition, (pos / 2) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 2) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 2) + 50 * (verticalPosition))
                                        );
                                break;
                    }
                    break;
            case 9: x = blockPositions[i] % 3;
                    y = blockPositions[i] / 3;
                    switch (currentRotation % 4) {
                        case 0: pos = x + (3 * y);
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 3) + horizontalPosition, (pos / 3) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 3) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 3) + 50 * (verticalPosition))
                                        );
                                break;
                        case 1: pos = (3 * x) - y + 2;
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 3) + horizontalPosition, (pos / 3) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 3) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 3) + 50 * (verticalPosition))
                                        );
                                break;
                        case 2: pos = 8 - (3 * y) - x;
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 3) + horizontalPosition, (pos / 3) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 3) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 3) + 50 * (verticalPosition))
                                        );
                                break;
                        case 3: pos = 6 - (3 * x) + y;
                                blocks[i]->setFieldPosition(sf::Vector2i((pos % 3) + horizontalPosition, (pos / 3) + verticalPosition));
                                blocks[i]->setScreenPosition(sf::Vector2f(
                                            horizontal_offset + 50 * (pos % 3) + 50 * (horizontalPosition),
                                            vertical_offset + 50 * (pos / 3) + 50 * (verticalPosition))
                                        );
                                break;
                    }
                    break;
            case 16: x = blockPositions[i] % 4;
                     y = blockPositions[i] / 4;
                     switch (currentRotation % 4) {
                         case 0: pos = x + (4 * y);
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 4) + horizontalPosition, (pos / 4) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 4) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 4) + 50 * (verticalPosition))
                                         );
                                 break;
                         case 1: pos = (4 * x) - y + 3;
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 4) + horizontalPosition, (pos / 4) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 4) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 4) + 50 * (verticalPosition))
                                         );
                                 break;
                         case 2: pos = 15 - (4 * y) - x;
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 4) + horizontalPosition, (pos / 4) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 4) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 4) + 50 * (verticalPosition))
                                         );
                                 break;
                         case 3: pos = 12 - (4 * x) + y;
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 4) + horizontalPosition, (pos / 4) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 4) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 4) + 50 * (verticalPosition))
                                         );
                                 break;
                     }
                     break;
            case 25: x = blockPositions[i] % 5;
                     y = blockPositions[i] / 5;
                     switch (currentRotation % 4) {
                         case 0: pos = x + (5 * y);
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 5) + horizontalPosition, (pos / 5) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 5) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 5) + 50 * (verticalPosition))
                                         );
                                 break;
                         case 1: pos = (5 * x) - y + 4;
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 5) + horizontalPosition, (pos / 5) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 5) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 5) + 50 * (verticalPosition))
                                         );
                                 break;
                         case 2: pos = 24 - (5 * y) - x;
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 5) + horizontalPosition, (pos / 5) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 5) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 5) + 50 * (verticalPosition))
                                         );
                                 break;
                         case 3: pos = 20 - (5 * x) + y;
                                 blocks[i]->setFieldPosition(sf::Vector2i((pos % 5) + horizontalPosition, (pos / 5) + verticalPosition));
                                 blocks[i]->setScreenPosition(sf::Vector2f(
                                             horizontal_offset + 50 * (pos % 5) + 50 * (horizontalPosition),
                                             vertical_offset + 50 * (pos / 5) + 50 * (verticalPosition))
                                         );
                                 break;
                     }
                     break;
        }
    }
}

// Positional:
void Tetramino::move(int direction) {
   switch (direction) {
       case Direction::Left: horizontalPosition --;
                             for (auto& block : blocks) {
                                 block->moveScreenPosition(sf::Vector2f(-50, 0));
                                 block->moveLeft();
                             }
                             break;
       case Direction::Right: horizontalPosition++;
                              for (auto& block : blocks) {
                                  block->moveScreenPosition(sf::Vector2f(50, 0));
                                  block->moveRight();
                              }
                              break;
       case Direction::Down: verticalPosition++;
                             for (auto& block : blocks) {
                                 block->moveScreenPosition(sf::Vector2f(0, 50));
                                 block->moveDown();
                             }
                             break;
   }
}

// Get Block pointer:
Block* Tetramino::getBlock(int index) {
    return blocks[index];
}

// Get Field Position of block
sf::Vector2i Tetramino::getFieldPosition(int block, int rotation_offset) {
    // Value: X Position + (width * Y position) 
    int rotation = (currentRotation + rotation_offset) % 4;
    int fpos = blockPositions[block];
    int x; 
    int y; 
    int pos;
    if (initPos.size() == 4) {
        x = fpos % 2;
        y = fpos / 2;
        switch (rotation) {
            case 0: pos = (x + (2 * y));
                    break;
            case 1: pos = ((2 * x) - y + 1);
                    break;
            case 2: pos = (3 - (2 * y) - x);
                    break;
            case 3: pos = (2 - (2 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 2) + horizontalPosition, (pos / 2) + verticalPosition);
    }
    else if (initPos.size() == 9) {
        x = fpos % 3;
        y = fpos / 3;
        switch (rotation) {
            case 0: pos = (x + (3 * y));
                    break;
            case 1: pos = ((3 * x) - y + 2);
                    break;
            case 2: pos = (8 - (3 * y) - x);
                    break;
            case 3: pos = (6 - (3 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 3) + horizontalPosition, (pos / 3) + verticalPosition);
    }
    else if (initPos.size() == 16) {
        x = fpos % 4;
        y = fpos / 4;
        switch (rotation) {
            case 0: pos = (x + (4 * y));
                    break;
            case 1: pos = (3 + (4 * x) - y);
                    break;
            case 2: pos = (15 - (4 * y) - x);
                    break;
            case 3: pos = (12 - (4 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 4) + horizontalPosition, (pos / 4) + verticalPosition);
    }
    else {
        x = fpos % 5;
        y = fpos / 5;
        switch (rotation) {
            case 0: pos = 0 + x + (5 * y);
                    break;
            case 1: pos = 4 + (5 * x) - y;
                    break;
            case 2: pos = 24 - x - (5 * y);
                    break;
            case 3: pos = 20 - (5 * x) + y;
                    break;
        }
        return sf::Vector2i((pos % 5) + horizontalPosition, (pos / 5) + verticalPosition);
    }
}

sf::Vector2i Tetramino::getDefaultPosition(int block, int rotation_offset) {
    int rotation = (currentRotation + rotation_offset) % 4;
    int fpos = blockPositions[block];
    int x; 
    int y; 
    int pos;
    if (initPos.size() == 4) {
        x = fpos % 2;
        y = fpos / 2;
        switch (rotation) {
            case 0: pos = (x + (2 * y));
                    break;
            case 1: pos = ((2 * x) - y + 1);
                    break;
            case 2: pos = (3 - (2 * y) - x);
                    break;
            case 3: pos = (2 - (2 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 2), (pos / 2));
    }
    else if (initPos.size() == 9) {
        x = fpos % 3;
        y = fpos / 3;
        switch (rotation) {
            case 0: pos = (x + (3 * y));
                    break;
            case 1: pos = ((3 * x) - y + 2);
                    break;
            case 2: pos = (8 - (3 * y) - x);
                    break;
            case 3: pos = (6 - (3 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 3), (pos / 3));
    }
    else if (initPos.size() == 16) {
        x = fpos % 4;
        y = fpos / 4;
        switch (rotation) {
            case 0: pos = (x + (4 * y));
                    break;
            case 1: pos = (3 + (4 * x) - y);
                    break;
            case 2: pos = (15 - (4 * y) - x);
                    break;
            case 3: pos = (12 - (4 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 4), (pos / 4));
    }
    else {
        x = fpos % 5;
        y = fpos / 5;
        switch (rotation) {
            case 0: pos = (x + (5 * y));
                    break;
            case 1: pos = (4 + (5 * x) - y);
                    break;
            case 2: pos = (24 - (5 * y) - x);
                    break;
            case 3: pos = (20 - (5 * x) + y);
                    break;
        }
        return sf::Vector2i((pos % 5), (pos / 5));
    }
}

// Get Num Blocks (Usually 4):
int Tetramino::getNumBlocks() {
    return blockPositions.size();
}

// Get Tetramino type:
int Tetramino::getType() {
    return this->type;
}

// Testing:
void Tetramino::printBlocks() {
    sf::Vector2i pos;
    for (int i = 0; i < getNumBlocks(); i++) {
        pos = getFieldPosition(i, 0);
        std::cout << "Block " << i << ": <" << pos.x << ", " << pos.y << ">" << std::endl;
    }
    std::cout << std::endl;
}
