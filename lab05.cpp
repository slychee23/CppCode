/* Write a program that dynamically allocates an array large enough
to hold a user-defined number of test scores. Once all the scores are
entered, the array should be passed to a function that sorts them in
ascending order. Another function should be called that calculates
the average score. The program should display the sorted list of scores
and averages with appropriate headings. Use pointer notation rather than
array notation whenever possible. */
#include <iostream>
using namespace std;

//function prototypes
void sortScores(double* scores, int size);
double calcAvgScore(double* scores, int size);

int main() {
    int numScores;

    //user input for number of scores
    cout << "Enter the number of scores: ";
    cin >> numScores;

    //dynamic memory allocation for scores
    double* testScores = new double[numScores];

    for (int i = 0; i < numScores; i++) {
        cout << "Enter test score " << (i + 1) << ": ";
        cin >> testScores[i];
    }

    //sorts scores
    sortScores(testScores, numScores);
    //displays sorted scores
    cout << "Sorted list of scores: ";
    for (int i = 0; i < numScores; i++) {
        cout << testScores[i] << " ";
    }

    //calculates average score
    double averageScore = calcAvgScore(testScores, numScores);
    cout << "\nAverage score: " << averageScore << endl; //displays average score

    //releases dynamic memory
    delete[] testScores;

    return 0;
}

//using selection sort function to sorts array of test scores in ascending order
void sortScores(double* array, int size) {
    int minIndex;
    double minValue;

    for (int start = 0; start < (size - 1); start++){
        minIndex = start;
        minValue = array[start];
    for (int index = start + 1; index < size; index++) {
            if (array[index] < minValue){
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]); //swaps min value with start position
    }
}

//function to calculate the average score
double calcAvgScore(double* scores, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    return sum/size;
}
