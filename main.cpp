#include <iostream>
#include "Monitor.h"

void displayMenu() {
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Power On" << std::endl;
    std::cout << "2. Power Off" << std::endl;
    std::cout << "3. Set Brightness" << std::endl;
    std::cout << "4. Change Input Source" << std::endl;
    std::cout << "5. Display Status" << std::endl;
    std::cout << "6. Change Power State" << std::endl;
    std::cout << "7. Exit" << std::endl;
}

int main() {
    Monitor monitor;
    int choice, brightness;
    std::string source;

    while (true) {
        displayMenu();
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                monitor.powerOn();
                break;
            case 2:
                monitor.powerOff();
                break;
            case 3:
                std::cout << "Set Brightness (0-100): ";
                std::cin >> brightness;
                monitor.setBrightness(brightness);
                break;
            case 4:
                std::cout << "Enter Input Source (HDMI/VGA/DisplayPort): ";
                std::cin >> source;
                monitor.changeInputSource(source);
                break;
            case 5:
                monitor.displayStatus();
                break;
            case 6:
                monitor.changePowerState();
                break;
            case 7:
                return 0;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
        }
    }
}