#ifndef MOVEBEHAVIOUR_H
#define MOVEBEHAVIOUR_H

#include "Behaviour.h"
#include "ObstacleEventListener.h"

/**
 * Behaviour that reacts when the robot can move.
 */
class MoveBehaviour: public Behaviour,
        public ObstacleEventListener
{
    public:
        /**
         * Constructor.
         */
        MoveBehaviour();

        /**
         * Destructor.
         */
        virtual ~MoveBehaviour();
        
        /* Implementation. */
        bool isActive();

        /* Implementation. */
        void action();

        /* Implementation. */
        void obstacleDetected(const ObstacleEvent &event);

        /* Implementation. */
        void noObstacle();
};

#endif
