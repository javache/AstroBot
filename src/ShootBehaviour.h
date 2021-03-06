/**
 * Pieter De Baets
 * Jasper Van der Jeugt
 * Groep 31
 * ShootBehaviour.h
 */
#ifndef SHOOTBEHAVIOUR_H
#define SHOOTBEHAVIOUR_H

#include "Behaviour.h"
#include "ObstacleEventListener.h"

/**
 * Behaviour that reacts when we can shoot an obstacle.
 */
class ShootBehaviour: public Behaviour,
        public ObstacleEventListener
{
    public:
        /**
         * Constructor.
         */
        ShootBehaviour();

        /**
         * Destructor.
         */
        virtual ~ShootBehaviour();

        /* Implementation. */
        bool isActive();

        /* Implementation. */
        void obstacleDetected(const ObstacleEvent &event);

        /* Implementation. */
        void noObstacle();
        
        /* Implementation. */
        void action();

    private:
        /** Last detected shootable obstacle. NULL if no obstacle detected
         *  during last scan. */
        Obstacle *lastShootableObstacle;

        /** Flag to see if this behaviour is active. */
        bool active;
};

#endif
