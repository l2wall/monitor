#include "Monitor.h"

Monitor::Monitor() : resolution("1920x1080"), brightness(50), isOn(false), inputSource("HDMI") {}

Monitor::Monitor(std::string res, int bri, bool state, std::string source)
    : resolution(res), brightness(bri), isOn(state), inputSource(source) {}

Monitor::~Monitor() {}

void Monitor::powerOn() {
    isOn = true;
    std::cout << "Monitor powered on." << std::endl;
}

void Monitor::powerOff() {
    isOn = false;
    std::cout << "Monitor powered off." << std::endl;
}

void Monitor::setBrightness(int value) {
    if (value >= 0 && value <= 100) {
        brightness = value;
        std::cout << "Brightness set to " << brightness << "." << std::endl;
    } else {
        std::cout << "Invalid brightness value. Please use a value between 0 and 100." << std::endl;
    }
}

void Monitor::changeInputSource(std::string source) {
    inputSource = source;
    std::cout << "Input source changed to " << inputSource << "." << std::endl;
}

void Monitor::displayStatus() {
    std::cout << "Monitor Status: " << (isOn ? "On" : "Off") << std::endl;
    std::cout << "Resolution: " << resolution << std::endl;
    std::cout << "Brightness: " << brightness << std::endl;
    std::cout << "Input Source: " << inputSource << std::endl;
}

void Monitor::changePowerState() {
    isOn = !isOn;
    std::cout << "Monitor is now " << (isOn ? "On" : "Off") << "." << std::endl;
}