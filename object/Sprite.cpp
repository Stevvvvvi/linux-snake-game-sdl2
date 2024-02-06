#include "Sprite.h"

void Sprite::draw(SDL_Renderer *renderer)
{
    SDL_Rect rect;
    rect.x = this->m_x;
    rect.y = this->m_y;
    rect.w = this->m_x+10;
    rect.h = this->m_y+10;
    SDL_RenderDrawRect(renderer, &rect);
    SDL_RenderFillRect(renderer, &rect);
}