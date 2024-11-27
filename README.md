# Traffic Light Simulation

This is a simple console-based traffic light simulation program written in C++. The program simulates a traffic light with red, yellow, and green lights, with configurable durations for each state. The traffic light cycles through the states indefinitely.

## Features

- **Red Light (STOP)**: Displays the red light with a countdown, representing the "STOP" state.
- **Yellow Light (GET READY TO GO)**: Displays the yellow light with a countdown, indicating that the light is about to change to green.
- **Green Light (GO)**: Displays the green light with a countdown, indicating that it is safe to go.
- **Cycle**: The traffic light continues cycling through red, yellow, and green indefinitely.

## Program Workflow

1. **Red Light**:
   - Duration is set to 30 seconds.
   - A countdown is displayed showing how many seconds remain.
   
2. **Yellow Light (Getting Ready to Go)**:
   - Duration is set to 3 seconds.
   - A countdown is displayed, indicating that the light is about to change to green.

3. **Green Light**:
   - Duration is set to 30 seconds.
   - A countdown is displayed, indicating that it is safe to go.

4. **Yellow Light (Getting Ready to Stop)**:
   - Duration is set to 3 seconds.
   - A countdown is displayed, indicating that the light is about to change to red.

The traffic light simulation runs indefinitely in a loop, cycling through all states.

## Code Explanation

- **`trafficLightState` function**: This function is responsible for displaying the current traffic light state (red, yellow, green) along with a countdown timer.
    - The `message` parameter indicates the traffic light's current state (e.g., "STOP!", "GET READY TO GO!", "GO!").
    - The `countdown` parameter indicates the duration for which the light remains in the current state, and the countdown is updated every second.
    - `system("cls")` clears the console screen to update the display.
    - `Sleep(1000)` pauses the program for 1 second to simulate the countdown.

- **`main` function**: The main function controls the cycling of the traffic lights in a loop.
    - The traffic light alternates through the red, yellow, and green states with the given durations.

## Requirements

- **Operating System**: Windows (since `Sleep` and `system("cls")` are used in the program)
- **Compiler**: Any C++ compiler that supports C++11 or higher (e.g., GCC, Visual Studio)

## Example Usage

Upon running the program, the traffic light will cycle as follows:
=================== 
| STOP! |
30 seconds remaining
(After 1 second, the countdown continues)
===================
| GET READY TO GO! |
3 seconds remaining
(After 3 seconds, the green light is displayed)
=================== 
| GO! |
30 seconds remaining
(After 30 seconds, the yellow light for stopping will appear)
=================== 

This cycle will continue indefinitely until the program is terminated.

## How to Compile and Run

1. Save the code in a file named `TrafficLight.cpp`.
2. Open a terminal or command prompt.
3. Compile the code using a C++ compiler. For example, with GCC:
   ```bash
   g++ TrafficLight.cpp -o TrafficLight

## Customization

- You can modify the duration of each light by changing the values of redDuration, yellowDuration, and greenDuration in the main function.
- The Sleep(1000) function pauses the program for 1 second between each countdown update. You can change this to adjust the delay between each countdown update (in milliseconds).

## Adding Colors to the Traffic Light States

You can enhance the simulation by adding colors to the traffic light states. 
