#include "Worker.h"

Worker::Worker(int id, int arrival, int service) {
    this->id = id;
    this->arrivalTime = arrival;
    this->serviceTime = service;
    this->startTime = -1;
}



