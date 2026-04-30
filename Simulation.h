#ifndef SIMULATION_H
#define SIMULATION_H

#include "Queue.h"
#include "Server.h"

class Simulation {
private:
    int time;
    int maxTime;
    Queue queue;
    Server server;

public:
    Simulation(int simTime, int queueSize);
    void run();
};

#endif
