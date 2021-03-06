/**
 * Pieter De Baets
 * Jasper Van der Jeugt
 * Groep 31
 * BadnessBehaviour.h
 */
#ifndef BADNESSBEHAVIOUR_H
#define BADNESSBEHAVIOUR_H

#include "Behaviour.h"
#include "ObstacleEventListener.h"
#include "BinarySearchTree.h"
#include "Cell.h"
#include "Orientation.h"

class BadnessBehaviour: public Behaviour, public ObstacleEventListener
{
    public:
        /**
         * Construcor.
         */
        BadnessBehaviour(Robot *robot);

        /**
         * Destructor.
         */
        virtual ~BadnessBehaviour();

        /* Implementation. */
        bool isActive();

        /* Implementation. */
        void obstacleDetected(const ObstacleEvent &event);

        /* Implementation. */
        void noObstacle();

        /* Implementation. */
        void action();        

    protected:
        /**
         * Store the current robot position to the memory.
         * @return If this behaviour wants to be active.
         */
        bool store();

        /**
         * Get a cell rating.
         * @param cell Cell to get rating for.
         * @return The rating of the given cell.
         */
        int getBadness(const Cell &cell);

        /**
         * Increment an orientation.
         * @param orientation Orientation to increment.
         * @return The incremented orientation.
         */
        const Orientation increment(const Orientation &orientation) const;

        /**
         * Get a cell in a certain direction of an other cell.
         * @param cell Cell to get a neighbour from.
         * @param orientation Direction of the neighbour.
         * @return The requested neighbour.
         */
        const Cell getNeighbour(const Cell &cell,
                const Orientation &orientation) const;

    private:
        /** Robot to control. */
        Robot *robot;
    
        /** Flag to see if this behaviour is active. */
        bool active;

        /** Some memory. */
        BinarySearchTree<Cell, int> badness;

        /** Last seen obstacle. */
        Cell *lastSeenObstacle;

        /** Last cell chosen to continue on */
        Cell *lastDestination;

        /** Number of times to turn. */
        int delta;
};

#endif
