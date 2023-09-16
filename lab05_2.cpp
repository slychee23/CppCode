/* Write a program that uses a structure named MovieData to store the following information about a movie.
The program should create two MovieData variables, store values in their members, and pass each one,
in turn, to a function that displays the information about the movie in a clearly formatted manner. */
#include <iostream>
using namespace std;

//MovieData structures
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

//function prototype to display info about the movie
void displayInfo(MovieData& movie);

int main() {
    //MovieData variable one
    MovieData movie1;
    movie1.title = "Forrest Gump";
    movie1.director = "Robert Zemeckis";
    movie1.yearReleased = 1994;
    movie1.runningTime = 143;

    //MovieData variable two
    MovieData movie2;
    movie2.title = "Avatar: The Way of Water";
    movie2.director = "James Cameron";
    movie2.yearReleased = 2022;
    movie2.runningTime = 192;

    //displays informations about movies
    cout << "Movie 1: \n";
    displayInfo(movie1);

    cout <<"\nMovie 2: \n";
    displayInfo(movie2);

    return 0;

}

//function to display information about the movie
void displayInfo(MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time (in minutes): " << movie.runningTime << endl;
}
