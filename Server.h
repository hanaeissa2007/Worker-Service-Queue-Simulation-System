#ifndef SERVER_H
#define SERVER_H

#include "Worker.h"

class Server {
public:
    bool busy;
    int remainingTime;
    Worker currentWorker;

    Server();

    void assignWorker(Worker w, int currentTime);
    void process();
};

#endif
