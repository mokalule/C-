#include <iostream>

using namespace std;

class VirtualRobot {
private:
    float currentTemperature;
    float desiredTemperature;
    bool acOn;

public:
    //Constructor to initiate the robot desired temperature and ac status
    VirtualRobot(float desiredTemp) : desiredTemperature(desiredTemp), acOn(false), currentTemperature(25.0) {} 

    // Method to take the room temperature from the user
    void takeTemperature() {
        cout << "Enter the current room temperature: ";
        cin >> currentTemperature;
    }  

    // Method to check and adjust the AC based on the current temperature
    void adjustAC() {
        if (currentTemperature > desiredTemperature) {
            acOn = true;
            cout << "The room is too hot. Turning AC ON to cool down." << endl;
        } else if (currentTemperature < desiredTemperature) {
            acOn = false;
            cout << "The room is cool enough. AC is OFF." << endl;
        } else {
            acOn = false;
            cout << "The room temperature is just right. No adjustment needed." << endl;
        }
    }

    // Method to display the current of the robot

    void displayStatus() {
        cout << "Current room temperature" << "°C" << endl;
        cout << "Desired temperature: " << desiredTemperature <<  "°C" << endl;
        cout << "AC Status: " << (acOn ? "ON" : "OFF") << endl;
    }

};

int main() {
    float desiredTemp;

    // Ask user for the desired temperature setting
    cout << "Enter the desired room temperature: ";
    cin >> desiredTemp;

    // Create an instance of the virtual robot with the desired temperature
    VirtualRobot robot(desiredTemp);

    // Simulate taking the temperature, adjusting the AC, and showin the status
    robot.takeTemperature();
    robot.adjustAC();
    robot.displayStatus();

    return 0;
}
