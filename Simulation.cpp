#include "Simulation.h"
#include <iostream>
using namespace std;

Simulation::Simulation(int simTime, int queueSize, int n)
    : queue(queueSize) {

    time = 0;
    maxTime = simTime;
    numServers = n;

    servers = new Server[numServers];
}

void Simulation::run() {
    int workerID = 1;

    for (time = 0; time < maxTime; time++) {
        cout << "Time: " << time << endl;

        // Simulate worker arrival every 2 units
        if (time % 2 == 0) {
            Worker w(workerID++, time, 3);
            queue.enqueue(w);
            cout << "Worker " << w.id << " arrived\n";
        }

        // Assign worker if server is free
       for (int i = 0; i < numServers; i++) {
    if (!servers[i].busy && !queue.isEmpty()) {
        Worker w = queue.dequeue();
        servers[i].assignWorker(w, time);

        cout << "Worker " << w.id 
             << " assigned to Server " << i << endl;
    }
}

        // Process server
       for (int i = 0; i < numServers; i++) {
    servers[i].process();
}
        cout << "------------------\n";
    }
}
