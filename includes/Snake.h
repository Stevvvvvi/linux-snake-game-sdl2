#include "Sprite.h"
#include <vector>
class Snake: public Sprite 
{
public:
    Snake():Snake(0,0){};
    Snake(int x, int y):Sprite(x,y)
    {
        this->nodes.push_back(Sprite(20,0));
        this->nodes.push_back(Sprite(10,0));
        this->nodes.push_back(Sprite(0,0));
    };
    void draw(SDL_Renderer *renderer) override;
private:
    std::vector<Sprite> nodes;
    
};