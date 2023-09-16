/* Prompt: A prime number is a number that is only evenly divisible by itself and 1.
For example, the number 5 is prime because it can only be evenly divided by 1 and 5.
The number 6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
Write a function name isPrime , which takes an integer as an argument and returns true
if the argument is a prime number, or false otherwise. Demonstrate the function in a
complete program. */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    // if the number is less than or equal to 1, it is not prime
    if (num <= 1)
        return false;

    /* if the inputted number is divisible by x as it is incremented by one
    each time, terminating 1 integer before x equals the number unless a divisor is found*/
    for (int x = 2; x < num; x++){
        if (num % x == 0){
        return false; // if a divisor is found, the number is not prime
        }
    }
    return true; // if the loop terminates, the number is prime
}

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "\nResult: ";
    cout << "\n-------\n";

    if (isPrime(num)){
        cout << num << " is prime";
    } else {
        cout << num << " is not prime";
    }

    return 0;

}

