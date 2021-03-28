#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;

    while (true)
    {
        // Get distance traveled by Boston taxi, and define constants of the taxi service there (will be cooninued after getting more info on customer's trip)
        const int initialFare = 10;
        const double farePerMeter = 0.50;
        const int airportAdditional = 20;

        // Get information about the customer's trip
        int distance;
        cout << "How many meters are you traveling by Dubai taxi? ";
        cin >> distance;
        char airport;
        cout << "Are you taking taxi from an airport ([Y]es/[N]o)? ";
        cin >> airport;
        char tip;
        cout << "Are you going to gratuate the taxi driver ([Y]es/[N]o)? ";
        cin >> tip;
        char time;
        cout << "Are you taking taxi between 6 AM and 10 PM ([Y]es/[N]o)? ";
        cin >> time;

        // Excluding impossible situations
        if ((distance == 0) || ((airport != 'y') && (airport != 'Y') && (airport != 'N') && (airport != 'n')) || ((tip != 'y') && (tip != 'Y') && (tip != 'N') && (tip != 'n')))
        {
            cout << "You've gave an invalid answer to one of the questions above. Please input valid ones below..." << endl;
            continue;
        }

        // Calculating and displaying total price
        double totalFare = initialFare + distance * farePerMeter;
        if ((airport == 'Y') || (airport == 'y')) totalFare += airportAdditional;
        if ((tip == 'Y') || (tip == 'y')) totalFare *= 1.1;
        cout << "Your described trip costs AED" << totalFare << endl;
    }

    return 0;
}
