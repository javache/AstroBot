/**
 * Pieter De Baets
 * Jasper Van der Jeugt
 * Groep 31
 * Obstacle.cpp
 */
#include "Obstacle.h"

Obstacle::Obstacle(int x, int y) : Cell(x, y)
{
    accessible = false;
}

Obstacle::~Obstacle()
{
}

bool Obstacle::isAccessible() const
{
    return accessible;
}

void Obstacle::shootDown()
{
    accessible = isShootable();
}
