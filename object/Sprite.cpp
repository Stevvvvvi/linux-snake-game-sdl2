#include "Sprite.h"

void Sprite::draw(SDL_Renderer *renderer)
{
    SDL_Rect rect;
    rect.x = this->m_x;
    rect.y = this->m_y;
    rect.w = 10;
    rect.h = 10;
    SDL_SetRenderDrawColor( renderer, this->m_color.r, this->m_color.g, this->m_color.b, this->m_color.a ); 
    SDL_RenderDrawRect(renderer, &rect);
    SDL_RenderFillRect(renderer, &rect);
}