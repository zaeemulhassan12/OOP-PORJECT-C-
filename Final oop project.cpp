////
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////const int TOTAL_SEATS = 10; // Total number of seats per flight class
////
////// Parent Class
////class Flight {
////protected:
////    string route;
////    string time;
////    vector<bool> seats;
////
////public:
////    Flight() : seats(TOTAL_SEATS, false) {}
////
////    virtual void displayRoutes() = 0;
////    virtual void displayTimes() = 0;
////
////    void showSeatAvailability() {
////        cout << "\nCurrent seat reservations:" << endl;
////        for (int i = 0; i < TOTAL_SEATS; ++i) {
////            cout << "Seat " << i + 1 << ": " << (seats[i] ? "Reserved" : "Available") << endl;
////        }
////    }
////
////    bool reserveSeat(int seatNumber) {
////        if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
////            cout << "Invalid seat number! Please enter a number between 1 and " << TOTAL_SEATS << "." << endl;
////            return false;
////        } else if (seats[seatNumber - 1]) {
////            cout << "Seat " << seatNumber << " is already reserved." << endl;
////            return false;
////        } else {
////            seats[seatNumber - 1] = true;
////            cout << "Seat " << seatNumber << " has been successfully reserved." << endl;
////            return true;
////        }
////    }
////};
////
////// Child Class: DomesticFlight
////class DomesticFlight : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nSelect Route for Domestic Flight:" << endl;
////        cout << "1. Lahore to Islamabad" << endl;
////        cout << "2. Lahore to Multan" << endl;
////        cout << "3. Lahore to Sargodha" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nSelect Time for Domestic Flight:" << endl;
////        cout << "1. 8 AM" << endl;
////        cout << "2. 3 PM" << endl;
////    }
////};
////
////// Child Class: InternationalFlight
////class InternationalFlight : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nSelect Route for International Flight:" << endl;
////        cout << "1. Lahore to Dubai" << endl;
////        cout << "2. Lahore to London" << endl;
////        cout << "3. Lahore to New York" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nSelect Time for International Flight:" << endl;
////        cout << "1. 10 AM" << endl;
////        cout << "2. 9 PM" << endl;
////    }
////};
////
////// Child Class: PrivateCharter
////class PrivateCharter : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nSelect Route for Private Charter:" << endl;
////        cout << "1. Lahore to Islamabad" << endl;
////        cout << "2. Lahore to Karachi" << endl;
////        cout << "3. Lahore to Gwadar" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nSelect Time for Private Charter:" << endl;
////        cout << "1. 7 AM" << endl;
////        cout << "2. 1 PM" << endl;
////    }
////};
////
////// Child Class: CargoFlight
////class CargoFlight : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nSelect Route for Cargo Flight:" << endl;
////        cout << "1. Lahore to Karachi" << endl;
////        cout << "2. Lahore to Islamabad" << endl;
////        cout << "3. Lahore to Peshawar" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nSelect Time for Cargo Flight:" << endl;
////        cout << "1. 6 AM" << endl;
////        cout << "2. 4 PM" << endl;
////    }
////};
////
////// Child Class: HelicopterRide
////class HelicopterRide : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nSelect Route for Helicopter Ride:" << endl;
////        cout << "1. Lahore to Murree" << endl;
////        cout << "2. Lahore to Nathia Gali" << endl;
////        cout << "3. Lahore to Hunza" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nSelect Time for Helicopter Ride:" << endl;
////        cout << "1. 9 AM" << endl;
////        cout << "2. 2 PM" << endl;
////    }
////};
////
////int main() {
////    int choice;
////    do {
////        cout << "\n=== Flight Reservation System ===" << endl;
////        cout << "1. Reserve a Seat for Domestic Flight" << endl;
////        cout << "2. Reserve a Seat for International Flight" << endl;
////        cout << "3. Reserve a Seat for Private Charter" << endl;
////        cout << "4. Reserve a Seat for Cargo Flight" << endl;
////        cout << "5. Reserve a Seat for Helicopter Ride" << endl;
////        cout << "6. Exit" << endl;
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Exiting the program." << endl;
////                return 0;
////            default:
////                cout << "Invalid choice! Please enter a number between 1 and 6." << endl;
////                continue;
////        }
////
////        flight->displayRoutes();
////        int routeChoice;
////        cin >> routeChoice;
////
////        flight->displayTimes();
////        int timeChoice;
////        cin >> timeChoice;
////
////        flight->showSeatAvailability();
////        int seatNumber;
////        cout << "\nEnter the seat number to reserve (1-" << TOTAL_SEATS << "): ";
////        cin >> seatNumber;
////
////        flight->reserveSeat(seatNumber);
////        delete flight;
////
////    } while (choice != 6);
////
////    return 0;
////}
//
//
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////const int TOTAL_SEATS = 10; // Total number of seats per flight class
////
////// Parent Class
////class Flight {
////protected:
////    string route;
////    string time;
////    vector<bool> seats;
////
////public:
////    Flight() : seats(TOTAL_SEATS, false) {}
////
////    virtual void displayRoutes() = 0;
////    virtual void displayTimes() = 0;
////
////    void showSeatAvailability() {
////        cout << "\nCurrent seat reservations:" << endl;
////        for (int i = 0; i < TOTAL_SEATS; ++i) {
////            cout << "Seat " << i + 1 << ": " << (seats[i] ? "Reserved" : "Available") << endl;
////        }
////    }
////
////    bool reserveSeat(int seatNumber) {
////        if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
////            cout << "Invalid seat number! Please enter a number between 1 and " << TOTAL_SEATS << "." << endl;
////            return false;
////        } else if (seats[seatNumber - 1]) {
////            cout << "Seat " << seatNumber << " is already reserved." << endl;
////            return false;
////        } else {
////            seats[seatNumber - 1] = true;
////            cout << "Seat " << seatNumber << " has been successfully reserved." << endl;
////            return true;
////        }
////    }
////};
////
////// Grandchild Classes
////class EconomyClass : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nEconomy Class Routes:" << endl;
////        cout << "1. Lahore to Islamabad" << endl;
////        cout << "2. Lahore to Multan" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nEconomy Class Times:" << endl;
////        cout << "1. 9 AM" << endl;
////        cout << "2. 6 PM" << endl;
////    }
////};
////
////class BusinessClass : public Flight {
////public:
////    void displayRoutes() override {
////        cout << "\nBusiness Class Routes:" << endl;
////        cout << "1. Lahore to Karachi" << endl;
////        cout << "2. Lahore to Quetta" << endl;
////    }
////
////    void displayTimes() override {
////        cout << "\nBusiness Class Times:" << endl;
////        cout << "1. 10 AM" << endl;
////        cout << "2. 4 PM" << endl;
////    }
////};
////
////// Other grandchild classes (FirstClass, EconomyPlus, etc.) would follow a similar structure.
////
////// Main Menu Functionality
////int main() {
////    int choice;
////    do {
////        cout << "\n=== Flight Reservation System ===" << endl;
////        cout << "1. Domestic Flight" << endl;
////        cout << "2. Exit" << endl;
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        if (choice == 1) {
////            int subChoice;
////            cout << "\nSelect Class:" << endl;
////            cout << "1. Economy Class" << endl;
////            cout << "2. Business Class" << endl;
////            cout << "Enter your choice: ";
////            cin >> subChoice;
////
////            Flight* flight = nullptr;
////            if (subChoice == 1) {
////                flight = new EconomyClass();
////            } else if (subChoice == 2) {
////                flight = new BusinessClass();
////            } else {
////                cout << "Invalid choice! Returning to main menu." << endl;
////                continue;
////            }
////
////            flight->displayRoutes();
////            int routeChoice;
////            cin >> routeChoice;
////
////            flight->displayTimes();
////            int timeChoice;
////            cin >> timeChoice;
////
////            flight->showSeatAvailability();
////            int seatNumber;
////            cout << "\nEnter the seat number to reserve (1-" << TOTAL_SEATS << "): ";
////            cin >> seatNumber;
////
////            flight->reserveSeat(seatNumber);
////            delete flight;
////
////        } else if (choice != 2) {
////            cout << "Invalid choice! Please enter a valid option." << endl;
////        }
////    } while (choice != 2);
////
////    cout << "Exiting the program." << endl;
////    return 0;
////}
//
//
//
//
//
//
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////// Base class: Flight
////class Flight {
////protected:
////    string flightType;
////    vector<bool> seats;
////
////public:
////    Flight(int numSeats) : seats(numSeats, false) {}
////
////    virtual void displayClasses() = 0; // Pure virtual function
////
////    void showSeatAvailability() {
////        cout << "\nSeat Availability:\n";
////        for (size_t i = 0; i < seats.size(); ++i) {
////            cout << "Seat " << i + 1 << ": " << (seats[i] ? "Booked" : "Available") << "\n";
////        }
////    }
////
////    bool bookSeat(int seatNumber) {
////        if (seatNumber < 1 || seatNumber > seats.size()) {
////            cout << "Invalid seat number.\n";
////            return false;
////        }
////        if (seats[seatNumber - 1]) {
////            cout << "Seat already booked.\n";
////            return false;
////        }
////        seats[seatNumber - 1] = true;
////        cout << "Seat " << seatNumber << " successfully booked!\n";
////        return true;
////    }
////};
////
////// DomesticFlight class
////class DomesticFlight : public Flight {
////public:
////    DomesticFlight() : Flight(10) { flightType = "Domestic Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Economy Class\n2. Business Class\n";
////    }
////};
////
////// InternationalFlight class
////class InternationalFlight : public Flight {
////public:
////    InternationalFlight() : Flight(15) { flightType = "International Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. First Class\n2. Economy Plus\n";
////    }
////};
////
////// PrivateCharter class
////class PrivateCharter : public Flight {
////public:
////    PrivateCharter() : Flight(5) { flightType = "Private Charter"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////};
////
////// CargoFlight class
////class CargoFlight : public Flight {
////public:
////    CargoFlight() : Flight(0) { flightType = "Cargo Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable categories in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////};
////
////// HelicopterRide class
////class HelicopterRide : public Flight {
////public:
////    HelicopterRide() : Flight(3) { flightType = "Helicopter Ride"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable types in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////};
////
////void mainMenu() {
////    int choice;
////    do {
////        cout << "\nMain Menu: Select a flight type:\n";
////        cout << "1. Domestic Flight\n";
////        cout << "2. International Flight\n";
////        cout << "3. Private Charter\n";
////        cout << "4. Cargo Flight\n";
////        cout << "5. Helicopter Ride\n";
////        cout << "6. Exit\n";
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Exiting...\n";
////                return;
////            default:
////                cout << "Invalid choice. Please try again.\n";
////                continue;
////        }
////
////        flight->displayClasses();
////
////        if (choice != 4) { // Cargo flights do not have seats to book
////            flight->showSeatAvailability();
////            int seatNumber;
////            cout << "\nEnter seat number to book (or 0 to skip): ";
////            cin >> seatNumber;
////            if (seatNumber != 0) {
////                flight->bookSeat(seatNumber);
////            }
////        }
////
////        delete flight;
////
////    } while (choice != 6);
////}
////
////int main() {
////    cout << "Welcome to the Flight Reservation System!\n";
////    mainMenu();
////    return 0;
////}
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////// Base class: Flight
////class Flight {
////protected:
////    string flightType;
////    vector<bool> seats;
////    vector<string> routes;
////    vector<string> times;
////
////public:
////    Flight(int numSeats, vector<string> routeOptions, vector<string> timeOptions)
////        : seats(numSeats, false), routes(routeOptions), times(timeOptions) {}
////
////    virtual void displayClasses() = 0; // Pure virtual function
////
////    void showSeatAvailability() {
////        cout << "\nSeat Availability:\n";
////        for (size_t i = 0; i < seats.size(); ++i) {
////            cout << "Seat " << i + 1 << ": " << (seats[i] ? "Booked" : "Available") << "\n";
////        }
////    }
////
////    bool bookSeat(int seatNumber) {
////        if (seatNumber < 1 || seatNumber > seats.size()) {
////            cout << "Invalid seat number.\n";
////            return false;
////        }
////        if (seats[seatNumber - 1]) {
////            cout << "Seat already booked.\n";
////            return false;
////        }
////        seats[seatNumber - 1] = true;
////        cout << "Seat " << seatNumber << " successfully booked!\n";
////        return true;
////    }
////
////    void showRoutes() {
////        cout << "\nSelect a route:\n";
////        for (size_t i = 0; i < routes.size(); ++i) {
////            cout << i + 1 << ". " << routes[i] << "\n";
////        }
////    }
////
////    void showTimes() {
////        cout << "\nSelect a time:\n";
////        for (size_t i = 0; i < times.size(); ++i) {
////            cout << i + 1 << ". " << times[i] << "\n";
////        }
////    }
////};
////
////// DomesticFlight class
////class DomesticFlight : public Flight {
////public:
////    DomesticFlight() : Flight(10, {"Lahore to Islamabad", "Karachi to Lahore"}, {"10:00 AM", "2:00 PM"}) { flightType = "Domestic Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Economy Class\n2. Business Class\n";
////    }
////};
////
////// InternationalFlight class
////class InternationalFlight : public Flight {
////public:
////    InternationalFlight() : Flight(15, {"New York to London", "Toronto to Dubai"}, {"8:00 AM", "6:00 PM"}) { flightType = "International Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. First Class\n2. Economy Plus\n";
////    }
////};
////
////// PrivateCharter class
////class PrivateCharter : public Flight {
////public:
////    PrivateCharter() : Flight(5, {"New York to Paris", "Los Angeles to Tokyo"}, {"9:00 AM", "5:00 PM"}) { flightType = "Private Charter"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////};
////
////// CargoFlight class
////class CargoFlight : public Flight {
////public:
////    CargoFlight() : Flight(0, {"USA to Europe", "Asia to Africa"}, {}) { flightType = "Cargo Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable categories in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////};
////
////// HelicopterRide class
////class HelicopterRide : public Flight {
////public:
////    HelicopterRide() : Flight(3, {"Downtown to Airport", "City Tour"}, {"7:00 AM", "3:00 PM"}) { flightType = "Helicopter Ride"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable types in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////};
////
////void mainMenu() {
////    int choice;
////    do {
////        cout << "\nMain Menu: Select a flight type:\n";
////        cout << "1. Domestic Flight\n";
////        cout << "2. International Flight\n";
////        cout << "3. Private Charter\n";
////        cout << "4. Cargo Flight\n";
////        cout << "5. Helicopter Ride\n";
////        cout << "6. Exit\n";
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Exiting...\n";
////                return;
////            default:
////                cout << "Invalid choice. Please try again.\n";
////                continue;
////        }
////
////        flight->displayClasses();
////        flight->showRoutes();
////
////        int routeChoice;
////        cout << "\nSelect your route: ";
////        cin >> routeChoice;
////
////        flight->showTimes();
////        int timeChoice;
////        cout << "\nSelect your time: ";
////        cin >> timeChoice;
////
////        if (choice != 4) { // Cargo flights do not have seats to book
////            flight->showSeatAvailability();
////            int seatNumber;
////            cout << "\nEnter seat number to book (or 0 to skip): ";
////            cin >> seatNumber;
////            if (seatNumber != 0) {
////                flight->bookSeat(seatNumber);
////            }
////        }
////
////        delete flight;
////
////    } while (choice != 6);
////}
////
////int main() {
////    cout << "   ********Welcome to the Flight Reservation System!********\n";
////    mainMenu();
////    return 0;
////}
//
//
//
//
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////// Base class: Flight
////class Flight {
////protected:
////    string flightType;
////    vector<bool> seats;
////    vector<string> routes;
////    vector<string> times;
////    int selectedClass;
////    int selectedRoute;
////    int selectedTime;
////
////public:
////    Flight(int numSeats, vector<string> routeOptions, vector<string> timeOptions)
////        : seats(numSeats, false), routes(routeOptions), times(timeOptions), selectedClass(-1), selectedRoute(-1), selectedTime(-1) {}
////
////    virtual void displayClasses() = 0; // Pure virtual function to display classes
////
////    void showSeatAvailability() {
////        cout << "\nSeat Availability:\n";
////        for (size_t i = 0; i < seats.size(); ++i) {
////            cout << "Seat " << i + 1 << ": " << (seats[i] ? "Booked" : "Available") << "\n";
////        }
////    }
////
////    bool bookSeat(int seatNumber) {
////        if (seatNumber < 1 || seatNumber > seats.size()) {
////            cout << "Invalid seat number.\n";
////            return false;
////        }
////        if (seats[seatNumber - 1]) {
////            cout << "Seat already booked.\n";
////            return false;
////        }
////        seats[seatNumber - 1] = true;
////        cout << "Seat " << seatNumber << " successfully booked!\n";
////        return true;
////    }
////
////    void selectClass() {
////        cout << "\nSelect a class:\n";
////        displayClasses(); // Show the available classes based on the flight type
////        cout << "Enter your choice: ";
////        cin >> selectedClass;
////        if (selectedClass < 1 || selectedClass > 2) { // Adjust for class choices in each flight type
////            cout << "Invalid class choice, please try again.\n";
////            selectClass();
////        }
////    }
////
////    void selectRoute() {
////        cout << "\nSelect a route:\n";
////        for (size_t i = 0; i < routes.size(); ++i) {
////            cout << i + 1 << ". " << routes[i] << "\n";
////        }
////        cout << "Enter your choice: ";
////        cin >> selectedRoute;
////        if (selectedRoute < 1 || selectedRoute > routes.size()) {
////            cout << "Invalid route choice, please try again.\n";
////            selectRoute();
////        }
////    }
////
////    void selectTime() {
////        // Skip time selection for Cargo Flight
////        if (times.empty()) return;
////
////        cout << "\nSelect a time:\n";
////        for (size_t i = 0; i < times.size(); ++i) {
////            cout << i + 1 << ". " << times[i] << "\n";
////        }
////        cout << "Enter your choice: ";
////        cin >> selectedTime;
////        if (selectedTime < 1 || selectedTime > times.size()) {
////            cout << "Invalid time choice, please try again.\n";
////            selectTime();
////        }
////    }
////};
////
////// DomesticFlight class
////class DomesticFlight : public Flight {
////public:
////    DomesticFlight() : Flight(10, {"Lahore to Islamabad", "Karachi to Lahore"}, {"10:00 AM", "2:00 PM"}) { flightType = "Domestic Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Economy Class\n2. Business Class\n";
////    }
////};
////
////// InternationalFlight class
////class InternationalFlight : public Flight {
////public:
////    InternationalFlight() : Flight(15, {"Lahore to New York", "Lahore to London"}, {"8:00 AM", "6:00 PM"}) { flightType = "International Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. First Class\n2. Economy Plus\n";
////    }
////};
////
////// PrivateCharter class
////class PrivateCharter : public Flight {
////public:
////    PrivateCharter() : Flight(5, {"Lahore to Paris", "Lahore to Tokyo"}, {"9:00 AM", "5:00 PM"}) { flightType = "Private Charter"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////};
////
////// CargoFlight class
////class CargoFlight : public Flight {
////public:
////    CargoFlight() : Flight(0, {"Lahore to USA", "Lahore to Europe", "Lahore to Asia"}, {}) { flightType = "Cargo Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable categories in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////};
////
////// HelicopterRide class
////class HelicopterRide : public Flight {
////public:
////    HelicopterRide() : Flight(3, {"Lahore to Airport", "Lahore City Tour"}, {"7:00 AM", "3:00 PM"}) { flightType = "Helicopter Ride"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable types in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////};
////
////void mainMenu() {
////    int choice;
////    do {
////        cout << "\nMain Menu: Select a flight type:\n";
////        cout << "1. Domestic Flight\n";
////        cout << "2. International Flight\n";
////        cout << "3. Private Charter\n";
////        cout << "4. Cargo Flight\n";
////        cout << "5. Helicopter Ride\n";
////        cout << "6. Exit\n";
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Exiting...\n";
////                return;
////            default:
////                cout << "Invalid choice. Please try again.\n";
////                continue;
////        }
////
////        flight->selectClass();  // Prompt to select a class first
////
////        // Select route and time after class selection
////        flight->selectRoute();
////
////        // Skip time selection for Cargo Flight
////        if (choice != 4) {  // If not Cargo Flight, ask for time
////            flight->selectTime();
////        }
////
////        if (choice != 4) { // Cargo flights do not have seats to book
////            flight->showSeatAvailability();
////            int seatNumber;
////            cout << "\nEnter seat number to book (or 0 to skip): ";
////            cin >> seatNumber;
////            if (seatNumber != 0) {
////                flight->bookSeat(seatNumber);
////            }
////        }
////
////        delete flight;
////
////    } while (choice != 6);
////}
////
////int main() {
////    cout << "   ********Welcome to the Flight Reservation System!********\n";
////    mainMenu();
////    return 0;
////}
//
//
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////// Base class: Flight
////class Flight {
////protected:
////    string flightType;
////    vector<bool> seats;
////    vector<string> routes;
////    vector<string> times;
////    int selectedClass;
////    int selectedRoute;
////    int selectedTime;
////
////public:
////    Flight(int numSeats, vector<string> routeOptions, vector<string> timeOptions)
////        : seats(numSeats, false), routes(routeOptions), times(timeOptions), selectedClass(-1), selectedRoute(-1), selectedTime(-1) {}
////
////    virtual void displayClasses() = 0; // Pure virtual function to display classes
////
////    void showSeatAvailability() {
////        cout << "\nSeat Availability:\n";
////        for (size_t i = 0; i < seats.size(); ++i) {
////            cout << "Seat " << i + 1 << ": " << (seats[i] ? "Booked" : "Available") << "\n";
////        }
////    }
////
////    bool bookSeat(int seatNumber) {
////        if (seatNumber < 1 || seatNumber > seats.size()) {
////            cout << "Invalid seat number.\n";
////            return false;
////        }
////        if (seats[seatNumber - 1]) {
////            cout << "Seat already booked.\n";
////            return false;
////        }
////        seats[seatNumber - 1] = true;
////        cout << "Seat " << seatNumber << " successfully booked!\n";
////        return true;
////    }
////
////    void selectClass() {
////        cout << "\nSelect a class:\n";
////        displayClasses(); // Show the available classes based on the flight type
////        cout << "Enter your choice: ";
////        cin >> selectedClass;
////        if (selectedClass < 1 || selectedClass > 2) { // Adjust for class choices in each flight type
////            cout << "Invalid class choice, please try again.\n";
////            selectClass();
////        }
////    }
////
////    void selectRoute() {
////        cout << "\nSelect a route:\n";
////        for (size_t i = 0; i < routes.size(); ++i) {
////            cout << i + 1 << ". " << routes[i] << "\n";
////        }
////        cout << "Enter your choice: ";
////        cin >> selectedRoute;
////        if (selectedRoute < 1 || selectedRoute > routes.size()) {
////            cout << "Invalid route choice, please try again.\n";
////            selectRoute();
////        }
////    }
////
////    void selectTime() {
////        // Skip time selection for Cargo Flight, but ask for time after route selection
////        if (times.empty()) {
////            cout << "\nCargo flight successfully booked!\n";
////            cout << "Please enter your preferred time for the flight:\n";
////            string time;
////            cout << "Enter the time (e.g., 3:00 PM): ";
////            cin >> time;
////            cout << "Cargo flight to " << routes[selectedRoute - 1] << " at " << time << " is successfully booked!\n";
////            return;
////        }
////
////        cout << "\nSelect a time:\n";
////        for (size_t i = 0; i < times.size(); ++i) {
////            cout << i + 1 << ". " << times[i] << "\n";
////        }
////        cout << "Enter your choice: ";
////        cin >> selectedTime;
////        if (selectedTime < 1 || selectedTime > times.size()) {
////            cout << "Invalid time choice, please try again.\n";
////            selectTime();
////        }
////    }
////};
////
////// DomesticFlight class
////class DomesticFlight : public Flight {
////public:
////    DomesticFlight() : Flight(10, {"Lahore to Islamabad", "Karachi to Lahore"}, {"10:00 AM", "2:00 PM"}) { flightType = "Domestic Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Economy Class\n2. Business Class\n";
////    }
////};
////
////// InternationalFlight class
////class InternationalFlight : public Flight {
////public:
////    InternationalFlight() : Flight(15, {"Lahore to New York", "Lahore to London"}, {"8:00 AM", "6:00 PM"}) { flightType = "International Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. First Class\n2. Economy Plus\n";
////    }
////};
////
////// PrivateCharter class
////class PrivateCharter : public Flight {
////public:
////    PrivateCharter() : Flight(5, {"Lahore to Paris", "Lahore to Tokyo"}, {"9:00 AM", "5:00 PM"}) { flightType = "Private Charter"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////};
////
////// CargoFlight class
////class CargoFlight : public Flight {
////public:
////    CargoFlight() : Flight(0, {"Lahore to USA", "Lahore to Europe", "Lahore to Asia"}, {}) { flightType = "Cargo Flight"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable categories in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////};
////
////// HelicopterRide class
////class HelicopterRide : public Flight {
////public:
////    HelicopterRide() : Flight(3, {"Lahore to Airport", "Lahore City Tour"}, {"7:00 AM", "3:00 PM"}) { flightType = "Helicopter Ride"; }
////
////    void displayClasses() override {
////        cout << "\nAvailable types in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////};
////
////void mainMenu() {
////    int choice;
////    do {
////        cout << "\nMain Menu: Select a flight type:\n";
////        cout << "1. Domestic Flight\n";
////        cout << "2. International Flight\n";
////        cout << "3. Private Charter\n";
////        cout << "4. Cargo Flight\n";
////        cout << "5. Helicopter Ride\n";
////        cout << "6. Exit\n";
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Exiting...\n";
////                return;
////            default:
////                cout << "Invalid choice. Please try again.\n";
////                continue;
////        }
////
////        flight->selectClass();  // Prompt to select a class first
////
////        // Select route and time after class selection
////        flight->selectRoute();
////
////        // For Cargo Flight, time will be prompted after booking the flight
////        flight->selectTime();
////
////        if (choice != 4) { // Cargo flights do not have seats to book
////            flight->showSeatAvailability();
////            int seatNumber;
////            cout << "\nEnter seat number to book (or 0 to skip): ";
////            cin >> seatNumber;
////            if (seatNumber != 0) {
////                flight->bookSeat(seatNumber);
////            }
////        }
////
////        delete flight;
////
////    } while (choice != 6);
////}
////
////int main() {
////    cout << "   ********Welcome to the Flight Reservation System!********\n";
////    mainMenu();
////    return 0;
////}
//
//
//
//
//
////80%correct
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////// Base class: Flight
////class Flight {
////protected:
////    string flightType;
////    vector<string> routes;
////    vector<string> times;
////
////public:
////    Flight(vector<string> routeOptions, vector<string> timeOptions)
////        : routes(routeOptions), times(timeOptions) {}
////
////    virtual void displayClasses() = 0; // Pure virtual function
////
////    void showRoutes() {
////        cout << "\nSelect a route:\n";
////        for (size_t i = 0; i < routes.size(); ++i) {
////            cout << i + 1 << ". " << routes[i] << "\n";
////        }
////    }
////
////    void showTimes() {
////        cout << "\nSelect a time:\n";
////        for (size_t i = 0; i < times.size(); ++i) {
////            cout << i + 1 << ". " << times[i] << "\n";
////        }
////    }
////
////    virtual void bookFlight() { // Mark this as virtual to allow overriding
////        int routeChoice, timeChoice;
////        
////        showRoutes();
////        cout << "\nEnter your choice for route: ";
////        cin >> routeChoice;
////
////        showTimes();
////        cout << "\nEnter your choice for time: ";
////        cin >> timeChoice;
////
////        if (routeChoice < 1 || routeChoice > routes.size()) {
////            cout << "Invalid route choice. Please try again.\n";
////            return;
////        }
////        if (timeChoice < 1 || timeChoice > times.size()) {
////            cout << "Invalid time choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Flight successfully booked!\n";
////        cout << "Route: " << routes[routeChoice - 1] << "\n";
////        cout << "Time: " << times[timeChoice - 1] << "\n";
////    }
////};
////
////// DomesticFlight class
////class DomesticFlight : public Flight {
////public:
////    DomesticFlight() : Flight({"Lahore to Islamabad", "Karachi to Lahore"}, {"10:00 AM", "2:00 PM"}) {
////        flightType = "Domestic Flight";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Economy Class\n2. Business Class\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for Domestic Flight:\n";
////        displayClasses();
////        int classChoice;
////        cout << "\nEnter your choice for class: ";
////        cin >> classChoice;
////
////        if (classChoice == 1) {
////            cout << "Economy class flight successfully booked!\n";
////        } else if (classChoice == 2) {
////            cout << "Business class flight successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// InternationalFlight class
////class InternationalFlight : public Flight {
////public:
////    InternationalFlight() : Flight({"New York to London", "Toronto to Dubai"}, {"8:00 AM", "6:00 PM"}) {
////        flightType = "International Flight";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. First Class\n2. Economy Plus\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for International Flight:\n";
////        displayClasses();
////        int classChoice;
////        cout << "\nEnter your choice for class: ";
////        cin >> classChoice;
////
////        if (classChoice == 1) {
////            cout << "First class flight successfully booked!\n";
////        } else if (classChoice == 2) {
////            cout << "Economy Plus flight successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// PrivateCharter class
////class PrivateCharter : public Flight {
////public:
////    PrivateCharter() : Flight({"LA to Vegas", "NYC to Miami"}, {"9:00 AM", "5:00 PM"}) {
////        flightType = "Private Charter";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////
////    void showGrandchildClasses() {
////        cout << "\nAvailable Grandchild Classes in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////
////    void bookFlight() override {
////        showGrandchildClasses();  // Show grandchild classes first
////        Flight::showRoutes();  // Show routes after grandchild classes
////        Flight::showTimes();   // Show times after grandchild classes
////        int routeChoice, timeChoice;
////
////        cout << "\nEnter your choice for route: ";
////        cin >> routeChoice;
////
////        cout << "\nEnter your choice for time: ";
////        cin >> timeChoice;
////
////        if (routeChoice < 1 || routeChoice > routes.size()) {
////            cout << "Invalid route choice. Please try again.\n";
////            return;
////        }
////        if (timeChoice < 1 || timeChoice > times.size()) {
////            cout << "Invalid time choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Private Charter flight successfully booked!\n";
////        cout << "Route: " << routes[routeChoice - 1] << "\n";
////        cout << "Time: " << times[timeChoice - 1] << "\n";
////    }
////};
////
////// CargoFlight class
////class CargoFlight : public Flight {
////public:
////    CargoFlight() : Flight({"Dubai to London", "Singapore to Dubai"}, {"11:00 AM", "3:00 PM"}) {
////        flightType = "Cargo Flight";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////
////    void showGrandchildClasses() {
////        cout << "\nAvailable Grandchild Classes in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////
////    void bookFlight() override {
////        showGrandchildClasses();  // Show grandchild classes first
////        Flight::showRoutes();  // Show routes after grandchild classes
////        Flight::showTimes();   // Show times after grandchild classes
////        int routeChoice, timeChoice;
////
////        cout << "\nEnter your choice for route: ";
////        cin >> routeChoice;
////
////        cout << "\nEnter your choice for time: ";
////        cin >> timeChoice;
////
////        if (routeChoice < 1 || routeChoice > routes.size()) {
////            cout << "Invalid route choice. Please try again.\n";
////            return;
////        }
////        if (timeChoice < 1 || timeChoice > times.size()) {
////            cout << "Invalid time choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Cargo flight successfully booked!\n";
////        cout << "Route: " << routes[routeChoice - 1] << "\n";
////        cout << "Time: " << times[timeChoice - 1] << "\n";
////    }
////};
////
////// HelicopterRide class
////class HelicopterRide : public Flight {
////public:
////    HelicopterRide() : Flight({"New York City", "San Francisco"}, {"12:00 PM", "4:00 PM"}) {
////        flightType = "Helicopter Ride";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////
////    void showGrandchildClasses() {
////        cout << "\nAvailable Grandchild Classes in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////
////    void bookFlight() override {
////        showGrandchildClasses();  // Show grandchild classes first
////        Flight::showRoutes();  // Show routes after grandchild classes
////        Flight::showTimes();   // Show times after grandchild classes
////        int routeChoice, timeChoice;
////
////        cout << "\nEnter your choice for route: ";
////        cin >> routeChoice;
////
////        cout << "\nEnter your choice for time: ";
////        cin >> timeChoice;
////
////        if (routeChoice < 1 || routeChoice > routes.size()) {
////            cout << "Invalid route choice. Please try again.\n";
////            return;
////        }
////        if (timeChoice < 1 || timeChoice > times.size()) {
////            cout << "Invalid time choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Helicopter ride successfully booked!\n";
////        cout << "Route: " << routes[routeChoice - 1] << "\n";
////        cout << "Time: " << times[timeChoice - 1] << "\n";
////    }
////};
////
////// Main Menu Function
////void mainMenu() {
////    int choice;
////    do {
////        cout << "\nMain Menu: Select a flight type:\n";
////        cout << "1. Domestic Flight\n";
////        cout << "2. International Flight\n";
////        cout << "3. Private Charter\n";
////        cout << "4. Cargo Flight\n";
////        cout << "5. Helicopter Ride\n";
////        cout << "6. Exit\n";
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Exiting...\n";
////                return;
////            default:
////                cout << "Invalid choice. Please try again.\n";
////                continue;
////        }
////
////        flight->bookFlight();  // Call bookFlight method of the selected flight type
////
////        delete flight;  // Free the memory allocated for the flight object
////
////    } while (choice != 6);
////}
////
////int main() {
////    mainMenu();  // Start the program
////    return 0;
////}
//
//
////95%correct
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////
////// Base class: Flight
////class Flight {
////protected:
////    string flightType;
////    vector<string> routes;
////    vector<string> times;
////
////public:
////    Flight(vector<string> routeOptions, vector<string> timeOptions)
////        : routes(routeOptions), times(timeOptions) {}
////
////    virtual void displayClasses() = 0; // Pure virtual function for displaying classes
////
////    void showRoutes() {
////        cout << "\nSelect a route:\n";
////        for (size_t i = 0; i < routes.size(); ++i) {
////            cout << i + 1 << ". " << routes[i] << "\n";
////        }
////    }
////
////    void showTimes() {
////        cout << "\nSelect a time:\n";
////        for (size_t i = 0; i < times.size(); ++i) {
////            cout << i + 1 << ". " << times[i] << "\n";
////        }
////    }
////
////    virtual void bookFlight() {
////        int routeChoice, timeChoice;
////
////        // Show routes and time selection
////        showRoutes();
////        cout << "\nEnter your choice for route: ";
////        cin >> routeChoice;
////
////        showTimes();
////        cout << "\nEnter your choice for time: ";
////        cin >> timeChoice;
////
////        if (routeChoice < 1 || routeChoice > routes.size()) {
////            cout << "Invalid route choice. Please try again.\n";
////            return;
////        }
////        if (timeChoice < 1 || timeChoice > times.size()) {
////            cout << "Invalid time choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Flight successfully booked!\n";
////        cout << "Route: " << routes[routeChoice - 1] << "\n";
////        cout << "Time: " << times[timeChoice - 1] << "\n";
////    }
////};
////
////// DomesticFlight class
////class DomesticFlight : public Flight {
////public:
////    DomesticFlight() : Flight({"Lahore to Islamabad", "Karachi to Lahore"}, {"10:00 AM", "2:00 PM"}) {
////        flightType = "Domestic Flight";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. Economy Class\n2. Business Class\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for Domestic Flight:\n";
////        displayClasses();
////        int classChoice;
////        cout << "\nEnter your choice for class: ";
////        cin >> classChoice;
////
////        if (classChoice == 1) {
////            cout << "Economy class flight successfully booked!\n";
////        } else if (classChoice == 2) {
////            cout << "Business class flight successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        // Show and select seat for Domestic Flight
////        cout << "\nSelect a seat:\n";
////        for (int i = 1; i <= 20; ++i) {
////            cout << "Seat " << i << " is available.\n";
////        }
////        int seatChoice;
////        cout << "Enter your choice for seat: ";
////        cin >> seatChoice;
////
////        if (seatChoice < 1 || seatChoice > 20) {
////            cout << "Invalid seat choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Seat " << seatChoice << " successfully booked!\n";
////
////        // Show routes and times
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// InternationalFlight class
////class InternationalFlight : public Flight {
////public:
////    InternationalFlight() : Flight({"New York to London", "Toronto to Dubai"}, {"8:00 AM", "6:00 PM"}) {
////        flightType = "International Flight";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable classes in " << flightType << ":\n";
////        cout << "1. First Class\n2. Economy Plus\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for International Flight:\n";
////        displayClasses();
////        int classChoice;
////        cout << "\nEnter your choice for class: ";
////        cin >> classChoice;
////
////        if (classChoice == 1) {
////            cout << "First class flight successfully booked!\n";
////        } else if (classChoice == 2) {
////            cout << "Economy Plus flight successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        // Show and select seat for International Flight
////        cout << "\nSelect a seat:\n";
////        for (int i = 1; i <= 20; ++i) {
////            cout << "Seat " << i << " is available.\n";
////        }
////        int seatChoice;
////        cout << "Enter your choice for seat: ";
////        cin >> seatChoice;
////
////        if (seatChoice < 1 || seatChoice > 20) {
////            cout << "Invalid seat choice. Please try again.\n";
////            return;
////        }
////
////        cout << "Seat " << seatChoice << " successfully booked!\n";
////
////        // Show routes and times
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// PrivateCharter class
////class PrivateCharter : public Flight {
////public:
////    PrivateCharter() : Flight({"New York to Paris", "Los Angeles to Tokyo"}, {"9:00 AM", "5:00 PM"}) {
////        flightType = "Private Charter";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable types in " << flightType << ":\n";
////        cout << "1. Corporate Charter\n2. Luxury Charter\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for Private Charter:\n";
////        displayClasses();
////        int classChoice;
////        cout << "\nEnter your choice for type: ";
////        cin >> classChoice;
////
////        if (classChoice == 1) {
////            cout << "Corporate charter flight successfully booked!\n";
////        } else if (classChoice == 2) {
////            cout << "Luxury charter flight successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        // Show routes and times for Private Charter
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// CargoFlight class
////class CargoFlight : public Flight {
////public:
////    CargoFlight() : Flight({"USA to Europe", "Asia to Africa"}, {"10:00 AM", "12:00 PM"}) {
////        flightType = "Cargo Flight";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable categories in " << flightType << ":\n";
////        cout << "1. Perishable Goods\n2. Non-Perishable Goods\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for Cargo Flight:\n";
////        displayClasses();
////        int classChoice;
////        cout << "\nEnter your choice for cargo type: ";
////        cin >> classChoice;
////
////        if (classChoice == 1) {
////            cout << "Perishable Goods flight successfully booked!\n";
////        } else if (classChoice == 2) {
////            cout << "Non-Perishable Goods flight successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        // Show routes and times for Cargo Flight
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// HelicopterRide class
////class HelicopterRide : public Flight {
////public:
////    HelicopterRide() : Flight({"Downtown to Airport", "City Tour"}, {"7:00 AM", "3:00 PM"}) {
////        flightType = "Helicopter Ride";
////    }
////
////    void displayClasses() override {
////        cout << "\nAvailable types in " << flightType << ":\n";
////        cout << "1. Scenic Tour\n2. Emergency Services\n";
////    }
////
////    void bookFlight() override {
////        cout << "\nBooking for Helicopter Ride:\n";
////        displayClasses();
////        int typeChoice;
////        cout << "\nEnter your choice for type: ";
////        cin >> typeChoice;
////
////        if (typeChoice == 1) {
////            cout << "Scenic tour helicopter ride successfully booked!\n";
////        } else if (typeChoice == 2) {
////            cout << "Emergency services helicopter ride successfully booked!\n";
////        } else {
////            cout << "Invalid choice. Please try again.\n";
////            return;
////        }
////
////        // Show routes and times for Helicopter Ride
////        Flight::bookFlight();  // Call to base class to choose route and time
////    }
////};
////
////// Main Menu Function
////void mainMenu() {
////    int choice;
////    do {
////        cout << "\nMain Menu: Select a flight type:\n";
////        cout << "1. Domestic Flight\n";
////        cout << "2. International Flight\n";
////        cout << "3. Private Charter\n";
////        cout << "4. Cargo Flight\n";
////        cout << "5. Helicopter Ride\n";
////        cout << "6. Exit\n";
////        cout << "Enter your choice: ";
////        cin >> choice;
////
////        Flight* flight = nullptr;
////
////        switch (choice) {
////            case 1:
////                flight = new DomesticFlight();
////                break;
////            case 2:
////                flight = new InternationalFlight();
////                break;
////            case 3:
////                flight = new PrivateCharter();
////                break;
////            case 4:
////                flight = new CargoFlight();
////                break;
////            case 5:
////                flight = new HelicopterRide();
////                break;
////            case 6:
////                cout << "Thank you for using the Flight Reservation System! Goodbye.\n";
////                return;
////            default:
////                cout << "Invalid choice. Please try again.\n";
////                continue;
////        }
////
////        flight->bookFlight();
////        delete flight;  // Clean up dynamically allocated memory
////
////    } while (true);
////}
////
////int main() {
////    cout << "********Welcome to the Flight Reservation System!********\n";
////    mainMenu();
////    return 0;
////}


