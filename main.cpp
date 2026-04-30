#include <iostream>
#include "Simulation.h"
using namespace std;
int main() {
    cout << "Queue Simulation System Started..." << endl;
   Simulation sim1(20, 10, 1);
   Simulation sim2(20, 10, 2);
//Then say in report:
//“We compared system performance with different numbers of servers.”
    sim.run();
    return 0;
}
