/* This program initializes an array and then lets the player enter this week’s winning 5-digit number.
The program should perform a linear search through the list of the player’s numbers and report whether
or not one of the tickets is a winner this week. */
#include <iostream>
using namespace std;

int linearSearch(const int arr[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found) {
        if (arr[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }

    return position;
}

int main() {

    const int LUCKY_NUMS = 10;
    const int lottery[LUCKY_NUMS] = {13579, 26791, 26792, 33445, 55555,
                                    62483, 77777, 79422, 85647, 93121};
    int winningNum;

    cout << "Enter this week's 5-digit winning number: ";
    cin >> winningNum;

    int result = linearSearch(lottery, LUCKY_NUMS, winningNum);

    if (result == -1) {
      cout << "\nSorry, you did not win the lottery. Better luck next time!\n";
    } else {
      cout << "\nCongratulations! You have won the lottery!\n";
    }

    return 0;
 }
