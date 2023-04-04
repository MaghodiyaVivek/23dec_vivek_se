#include <iostream>
#include <cmath>
using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

class Event {
    private:
        string eventName;
        string firstName;
        int numOfGuests;
        int numOfMinutes;
        int numOfServers;
        double costForOneServer;
        double totalFoodCost;
        double averageCost;
        double totalCost;
        double depositAmount;
        
    public:
        void setEventName(string name) {
            eventName = name;
        }
        
        void setFirstName(string first) {
            firstName = first;
        }
        
        void setNumOfGuests(int guests) {
            numOfGuests = guests;
        }
        
        void setNumOfMinutes(int minutes) {
            numOfMinutes = minutes;
        }
        
        void calculateNumOfServers() {
            numOfServers = ceil(numOfGuests/20.0);
        }
        
        void calculateCostForOneServer() {
            double cost1 = (numOfMinutes/60.0) * CostPerHour;
            double cost2 = (numOfMinutes%60) * CostPerMinute;
            costForOneServer = cost1 + cost2;
        }
        
        void calculateTotalFoodCost() {
            totalFoodCost = numOfGuests * CostOfDinner;
        }
        
        void calculateAverageCost() {
            averageCost = totalFoodCost / numOfGuests;
        }
        
        void calculateTotalCost() {
            totalCost = totalFoodCost + (costForOneServer * numOfServers);
        }
        
        void calculateDepositAmount() {
            depositAmount = totalCost * 0.25;
        }
        
        void displayCostEstimation() {
            cout << "Cost Estimation for " << eventName << " Event:" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Number of Guests: " << numOfGuests << endl;
            cout << "Number of Servers: " << numOfServers << endl;
            cout << "Cost for One Server: $" << costForOneServer << endl;
            cout << "Total Food Cost: $" << totalFoodCost << endl;
            cout << "Average Cost per Person: $" << averageCost << endl;
            cout << "Total Cost: $" << totalCost << endl;
            cout << "Deposit Amount: $" << depositAmount << endl;
        }
};

int main() {
    Event myEvent;
    string name;
    string first;
    string last;
    int guests;
    int minutes;
    
    cout << "Enter the name of the event: ";
    getline(cin, name);
    myEvent.setEventName(name);
    
    cout << "Enter your first name: ";
    cin >> first;
    myEvent.setFirstName(first);
    
    cout << "Enter the number of guests: ";
    cin >> guests;
    myEvent.setNumOfGuests(guests);
    
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    myEvent.setNumOfMinutes(minutes);
    
    myEvent.calculateNumOfServers();
    myEvent.calculateCostForOneServer();
    myEvent.calculateTotalFoodCost();
    myEvent.calculateAverageCost();
    myEvent.calculateTotalCost();
    myEvent.calculateDepositAmount();
    
    myEvent.displayCostEstimation();
    
    return 0;
    
	}
    
    

