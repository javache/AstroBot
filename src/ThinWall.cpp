#include "ThinWall.h"

ThinWall::ThinWall(int x, int y): Obstacle(x, y)
{
}

ThinWall::~ThinWall()
{
}

bool ThinWall::isShootable() const
{
    return true;
}

bool ThinWall::isJumpable() const
{
    return false;
}
