#include "Server.h"

Server::Server() {
    busy = false;
    remainingTime = 0;
}

void Server::assignWorker(Worker w, int currentTime) {
    busy = true;
    currentWorker = w;
    currentWorker.startTime = currentTime;
    remainingTime = w.serviceTime;
}

void Server::process() {
    if (busy) {
        remainingTime--;
        if (remainingTime <= 0) {
            busy = false;
        }
    }
}
