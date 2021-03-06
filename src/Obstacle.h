/**
 * Pieter De Baets
 * Jasper Van der Jeugt
 * Groep 31
 * Obstacle.h
 */
#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Cell.h"

/** A cell in the map */
class Obstacle : public Cell
{
    public:
        /** 
         * Constructor.
         */
        Obstacle(int x, int y);
        
        /**
         * Destructor.
         */
        virtual ~Obstacle();

        /**
         * Is the cell accessible?
         * @return If the cell is accessible.
         */
        virtual bool isAccessible() const;
        
        /**
         * Jumpable?
         * @return ok
         */
        virtual bool isJumpable() const = 0;
        
        /**
         * Shootable?
         * @return ok
         */
        virtual bool isShootable() const = 0;

        /**
         * Shoot the obstacle.
         */
        virtual void shootDown();

    private:
        /** If the obstacle is accessible. */
        bool accessible;
};

#endif
