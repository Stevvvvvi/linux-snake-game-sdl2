#include "SDL.h" 

class Sprite
{
protected:
    int m_x;
    int m_y;
    SDL_Color m_color; 
public:
    Sprite():Sprite(0,0){};
    Sprite(int x, int y):m_x(x),m_y(y),m_color({255,0,0,1}){};
    virtual void draw(SDL_Renderer *renderer);
};
