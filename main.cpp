#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;
    cout << "TAXI FARES" << endl;

    while (true)
    {
        // Get distance traveled by Boston taxi, and define constants of the taxi service there (will be cooninued after getting more info on customer's trip)
        const int initialFare = 10;
        double hireOnRoad = 3;
        double farePerMeter = 0.50; // Special condition for this to apply, though...
        const int airportAdditional = 20;

        // Get information about the customer's trip
        int distance;
        cout << "How many meters are you traveling by Dubai taxi? ";
        cin >> distance;
        char airport;
        cout << "Are you taking taxi from an airport ([Y]es/[N]o)? ";
        cin >> airport;
        char time;
        cout << "Are you taking taxi between 6 AM and 10 PM ([Y]es/[N]o)? ";
        cin >> time;

        // Excluding impossible situations
        if ((distance == 0) || ((airport != 'y') && (airport != 'Y') && (airport != 'N') && (airport != 'n')))
        {
            cout << "You've gave an invalid answer to one of the questions above. Please input valid ones below..." << endl;
            continue;
        }

        // Calculating and displaying total price
        if ((time == 'N') || (time == 'n')) hireOnRoad += 0.50;
        double totalFare = initialFare + hireOnRoad;
        for (int i = distance; i % 312 == 0; i = distance - 312) totalFare += farePerMeter;
        if ((airport == 'Y') || (airport == 'y')) totalFare += airportAdditional;
        cout << "Your described trip costs AED " << totalFare << endl;
    }

    return 0;
}
