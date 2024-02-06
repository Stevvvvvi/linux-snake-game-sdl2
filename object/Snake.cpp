#include "Snake.h"

void Snake::draw(SDL_Renderer *renderer)
{
    for (unsigned int i = 0; i < this->nodes.size(); i++)
    {
        nodes[i].draw(renderer);
    }
}