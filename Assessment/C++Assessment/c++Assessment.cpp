#include <iostream>
#include <cmath> // For ceil() function

// Constants for cost calculation
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

class Event {
private:
    std::string eventName;
    std::string firstName;
    std::string lastName;
    int numGuests;
    int numMinutes;
    int numServers;

public:
    // Function to get input from the user
    void getInput() {
        std::cout << "Enter the NAME OF THE EVENT: ";
        std::cin >> eventName;

        std::cout << "Enter your FIRST NAME: ";
        std::cin >> firstName;

        std::cout << "Enter your LAST NAME: ";
        std::cin >> lastName;

        std::cout << "Enter the number of GUESTS: ";
        std::cin >> numGuests;

        std::cout << "Enter the number of MINUTES: ";
        std::cin >> numMinutes;
    }

    // Function to calculate the cost estimation
    void calculateCost() {
        // Calculate the number of servers needed
        numServers = static_cast<int>(std::ceil(static_cast<double>(numGuests) / 20.0));

        // Calculate the cost for one server
        double cost1 = (numMinutes / 60) * CostPerHour;
        double cost2 = (numMinutes % 60) * CostPerMinute;
        double costForOneServer = cost1 + cost2;

        // Calculate the total food cost
        double totalFoodCost = numGuests * CostOfDinner;

        // Calculate the average cost per person
        double averageCost = totalFoodCost / numGuests;

        // Calculate the total cost
        double totalCost = totalFoodCost + (costForOneServer * numServers);

        // Calculate the deposit amount
        double depositAmount = totalCost * 0.25;

        // Display the results
        displayResults(costForOneServer, totalFoodCost, averageCost, totalCost, depositAmount);
    }

    // Function to display the results
    void displayResults(double costForOneServer, double totalFoodCost, double averageCost, double totalCost, double depositAmount) {
        std::cout << "\nEvent Details:\n";
        std::cout << "Event Name: " << eventName << "\n";
        std::cout << "Organizer: " << firstName << " " << lastName << "\n";
        std::cout << "Number of Guests: " << numGuests << "\n";
        std::cout << "Number of Servers: " << numServers << "\n\n";

        std::cout << "Cost Estimation:\n";
        std::cout << "Cost for One Server: " << costForOneServer << "\n";
        std::cout << "Total Food Cost: " << totalFoodCost << "\n";
        std::cout << "Average Cost per Person: " << averageCost << "\n";
        std::cout << "Total Cost: " << totalCost << "\n";
        std::cout << "Deposit Amount (25%): " << depositAmount << "\n";
    }
};

int main() {
    // Create an instance of the Event class
    Event event;

    // Get user input
    event.getInput();

    // Calculate and display the cost estimation
    event.calculateCost();

    return 0;
}
