#include "ball.h"
#include <raylib.h>

Ball::Ball() 
    : x(0)
    , y(0)
    , speedX(5)
    , speedY(5)
    , radius(15) 
{
}

void Ball::Update() 
{
    x += speedX;
    y += speedY;
    
    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();
    
    if ((x + radius >= screenWidth) || (x - radius <= 0)) {
        speedX *= -1;
    }
    
    if ((y + radius >= screenHeight) || (y - radius <= 0)) {
        speedY *= -1;
    }
}

void Ball::Draw() const
{
    DrawCircle(x, y, radius, WHITE);
}