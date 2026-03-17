#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

// Enum for Vehicle Types
enum VehicleType {
    CAR = 1,
    MOTORCYCLE,
    BUS,
    TRUCK,
    EMERGENCY_AMBULANCE,
    EMERGENCY_POLICE,
    EMERGENCY_MILITARY
};

// Enum for Location Types
enum LocationType {
    URBAN_ROAD = 1,
    HIGHWAY
};

// GPS System Class
class GPSSystem {
private:
    double latitude;
    double longitude;
    LocationType currentLocation;
    
public:
    GPSSystem() : latitude(0.0), longitude(0.0), currentLocation(URBAN_ROAD) {}
    
    void updateLocation(double lat, double lon, LocationType locType) {
        latitude = lat;
        longitude = lon;
        currentLocation = locType;
        cout << "\n[GPS] Location Updated: ";
        cout << "Lat: " << fixed << setprecision(4) << latitude 
             << ", Lon: " << longitude << endl;
    }
    
    LocationType getCurrentLocation() const {
        return currentLocation;
    }
    
    string getLocationName() const {
        return (currentLocation == URBAN_ROAD) ? "Urban Road" : "Highway";
    }
};

// Speed Regulation Digital System Class
class SpeedRegulationSystem {
private:
    map<pair<VehicleType, LocationType>, int> speedLimits;
    VehicleType vehicleType;
    int currentSpeed;
    int maxAllowedSpeed;
    bool emergencyOverride;
    GPSSystem* gpsSystem;
    
    void initializeSpeedLimits() {
        // Speed limits for regular vehicles on urban roads (km/h)
        speedLimits[{CAR, URBAN_ROAD}] = 50;
        speedLimits[{MOTORCYCLE, URBAN_ROAD}] = 40;
        speedLimits[{BUS, URBAN_ROAD}] = 40;
        speedLimits[{TRUCK, URBAN_ROAD}] = 40;
        
        // Speed limits for regular vehicles on highways (km/h)
        speedLimits[{CAR, HIGHWAY}] = 100;
        speedLimits[{MOTORCYCLE, HIGHWAY}] = 80;
        speedLimits[{BUS, HIGHWAY}] = 80;
        speedLimits[{TRUCK, HIGHWAY}] = 70;
        
        // Emergency vehicles have higher limits but still regulated
        speedLimits[{EMERGENCY_AMBULANCE, URBAN_ROAD}] = 80;
        speedLimits[{EMERGENCY_AMBULANCE, HIGHWAY}] = 120;
        speedLimits[{EMERGENCY_POLICE, URBAN_ROAD}] = 80;
        speedLimits[{EMERGENCY_POLICE, HIGHWAY}] = 120;
        speedLimits[{EMERGENCY_MILITARY, URBAN_ROAD}] = 80;
        speedLimits[{EMERGENCY_MILITARY, HIGHWAY}] = 120;
    }
    
    bool isEmergencyVehicle() const {
        return (vehicleType == EMERGENCY_AMBULANCE || 
                vehicleType == EMERGENCY_POLICE || 
                vehicleType == EMERGENCY_MILITARY);
    }
    
public:
    SpeedRegulationSystem(VehicleType vType, GPSSystem* gps) 
        : vehicleType(vType), currentSpeed(0), emergencyOverride(false), gpsSystem(gps) {
        initializeSpeedLimits();
        updateSpeedLimit();
    }
    
    void updateSpeedLimit() {
        LocationType location = gpsSystem->getCurrentLocation();
        maxAllowedSpeed = speedLimits[{vehicleType, location}];
        
        cout << "[SYSTEM] Speed Limit Updated: " << maxAllowedSpeed 
             << " km/h for " << gpsSystem->getLocationName() << endl;
    }
    
    void setEmergencyOverride(bool status) {
        if (isEmergencyVehicle()) {
            emergencyOverride = status;
            cout << "[EMERGENCY] Override " << (status ? "ACTIVATED" : "DEACTIVATED") << endl;
        } else {
            cout << "[ERROR] Emergency override not authorized for this vehicle type!" << endl;
        }
    }
    
    bool accelerate(int speedIncrement) {
        int requestedSpeed = currentSpeed + speedIncrement;
        
        // Check if emergency override is active
        if (emergencyOverride && isEmergencyVehicle()) {
            currentSpeed = requestedSpeed;
            cout << "[SPEED] Emergency Mode: " << currentSpeed << " km/h (Override Active)" << endl;
            return true;
        }
        
        // Normal speed regulation
        if (requestedSpeed <= maxAllowedSpeed) {
            currentSpeed = requestedSpeed;
            cout << "[SPEED] Current: " << currentSpeed << " km/h" << endl;
            return true;
        } else {
            currentSpeed = maxAllowedSpeed;
            cout << "[RESTRICTED] Speed limited to: " << currentSpeed 
                 << " km/h (Max allowed: " << maxAllowedSpeed << " km/h)" << endl;
            return false;
        }
    }
    
    void brake(int speedDecrement) {
        currentSpeed = max(0, currentSpeed - speedDecrement);
        cout << "[SPEED] Reduced to: " << currentSpeed << " km/h" << endl;
    }
    
    int getCurrentSpeed() const {
        return currentSpeed;
    }
    
    int getSpeedLimit() const {
        return maxAllowedSpeed;
    }
    
    string getVehicleTypeName() const {
        switch(vehicleType) {
            case CAR: return "Car";
            case MOTORCYCLE: return "Motorcycle";
            case BUS: return "Bus";
            case TRUCK: return "Truck";
            case EMERGENCY_AMBULANCE: return "Emergency Ambulance";
            case EMERGENCY_POLICE: return "Police Vehicle";
            case EMERGENCY_MILITARY: return "Military Vehicle";
            default: return "Unknown";
        }
    }
    
    void displayStatus() const {
        cout << "\n========================================" << endl;
        cout << "  VEHICLE SPEED REGULATION STATUS" << endl;
        cout << "========================================" << endl;
        cout << "Vehicle Type: " << getVehicleTypeName() << endl;
        cout << "Current Location: " << gpsSystem->getLocationName() << endl;
        cout << "Current Speed: " << currentSpeed << " km/h" << endl;
        cout << "Speed Limit: " << maxAllowedSpeed << " km/h" << endl;
        cout << "Emergency Override: " << (emergencyOverride ? "ACTIVE" : "INACTIVE") << endl;
        cout << "========================================\n" << endl;
    }
};

// Main Menu Function
void displayMenu() {
    cout << "\n----- VEHICLE CONTROL MENU -----" << endl;
    cout << "1. Accelerate (+10 km/h)" << endl;
    cout << "2. Accelerate (+20 km/h)" << endl;
    cout << "3. Brake (-10 km/h)" << endl;
    cout << "4. Change to Urban Road" << endl;
    cout << "5. Change to Highway" << endl;
    cout << "6. Toggle Emergency Override" << endl;
    cout << "7. Display Status" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter choice: ";
}

int main() {
    cout << "========================================" << endl;
    cout << "  VEHICLE SPEED REGULATION SYSTEM" << endl;
    cout << "========================================\n" << endl;
    
    // Select Vehicle Type
    cout << "Select Vehicle Type:" << endl;
    cout << "1. Car" << endl;
    cout << "2. Motorcycle" << endl;
    cout << "3. Bus" << endl;
    cout << "4. Truck" << endl;
    cout << "5. Emergency Ambulance" << endl;
    cout << "6. Police Vehicle" << endl;
    cout << "7. Military Vehicle" << endl;
    cout << "Enter choice (1-7): ";
    
    int vehicleChoice;
    cin >> vehicleChoice;
    
    if (vehicleChoice < 1 || vehicleChoice > 7) {
        cout << "Invalid choice! Defaulting to Car." << endl;
        vehicleChoice = 1;
    }
    
    VehicleType selectedVehicle = static_cast<VehicleType>(vehicleChoice);
    
    // Initialize GPS System
    GPSSystem gps;
    gps.updateLocation(26.9124, 75.7873, URBAN_ROAD); // Jaipur coordinates
    
    // Initialize Speed Regulation System
    SpeedRegulationSystem regulationSystem(selectedVehicle, &gps);
    
    cout << "\n[SYSTEM] Vehicle initialized: " << regulationSystem.getVehicleTypeName() << endl;
    regulationSystem.displayStatus();
    
    // Main Control Loop
    int choice;
    bool running = true;
    
    while (running) {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                regulationSystem.accelerate(10);
                break;
                
            case 2:
                regulationSystem.accelerate(20);
                break;
                
            case 3:
                regulationSystem.brake(10);
                break;
                
            case 4:
                gps.updateLocation(26.9124, 75.7873, URBAN_ROAD);
                regulationSystem.updateSpeedLimit();
                break;
                
            case 5:
                gps.updateLocation(26.8500, 75.8000, HIGHWAY);
                regulationSystem.updateSpeedLimit();
                break;
                
            case 6: {
                static bool overrideStatus = false;
                overrideStatus = !overrideStatus;
                regulationSystem.setEmergencyOverride(overrideStatus);
                break;
            }
                
            case 7:
                regulationSystem.displayStatus();
                break;
                
            case 8:
                cout << "\n[SYSTEM] Shutting down Speed Regulation System..." << endl;
                running = false;
                break;
                
            default:
                cout << "[ERROR] Invalid choice! Please try again." << endl;
        }
    }
    
    cout << "\nThank you for using the Speed Regulation System!" << endl;
    return 0;
}
