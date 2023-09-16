#include <iostream>
using namespace std;

int main() {

    const int MONTHS = 12;
    double rainfall[MONTHS];
    double totalRainfall = 0.0;
    double averageRainfall = 0.0;
    double highestRainfall = 0.0;
    double lowestRainfall = 0.0;
    int highestMonth = 0;
    int lowestMonth = 0;

    for (int i = 0; i < MONTHS; i++) {
        do {
            cout << "Enter total rainfall for month " << (i + 1) << ": ";
            cin >> rainfall[i];

            if (rainfall[i] < 0) {
                cout << "Invalid Input. Please enter a positive value.\n";
            }

        } while (rainfall[i] < 0);

            totalRainfall += rainfall[i];

            if (rainfall[i] > highestRainfall) {
                highestRainfall = rainfall[i];
                highestMonth = i;
            }

            if (rainfall[i] < lowestRainfall) {
                lowestRainfall = rainfall[i];
                lowestMonth = i;
            }
       }

    averageRainfall = totalRainfall / MONTHS;

    cout << "The total rainfall of the year is: " << totalRainfall << " inches\n";
    cout << "The average monthly rainfall is: " << averageRainfall << " inches\n";
    cout << "The month with the highest rainfall is: Month " << highestMonth + 1 << endl;
    cout << "The month with the lowest rainfall is: Month " << lowestMonth + 1 << endl;

   return 0;
}
