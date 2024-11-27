#include <iostream>
#include <windows.h>
using namespace std;

// Function for traffic light
void trafficLightState(string message, int countdown) {
    for (int i = countdown; i >= 0; i--) {
        system("cls");
        cout << "===================" << endl;
        cout << "|  " << message << "  |" << endl;
        cout << "===================" << endl;
        cout << " " << i << " seconds remaining" << endl;
        Sleep(1000); // 1 second
    }
}

int main() {
    int redDuration = 30;    // Red light duration in seconds
    int yellowDuration = 3;  // Yellow light duration in seconds
    int greenDuration = 30;  // Green light duration in seconds

    while (true) {
        // Red light
        trafficLightState("STOP!", redDuration);

        // Yellow light for getting ready to go
        trafficLightState("GET READY TO GO!", yellowDuration);

        // Green light
        trafficLightState("GO!", greenDuration);

        // Yellow light for getting ready to stop
        trafficLightState("GET READY TO STOP!", yellowDuration);
    }

    return 0;
}
