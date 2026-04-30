#include <iostream>
#include "Simulation.h"
using namespace std;
int main() {
    cout << "Queue Simulation System Started..." << endl;
    Simulation sim(20, 10, 2); // 2 servers 🔥
    sim.run();
    return 0;
}
