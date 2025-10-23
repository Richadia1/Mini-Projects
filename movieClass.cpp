#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class MovieData { //creating the class and its members
private:
    string title;
    string director;
    int timMin;
    int yearReleased;
    float prodCost;
    float revenues;

public:
    // Default constructor
    MovieData() {
        title = "";
        director = "";
        timMin = 0;
        yearReleased = 0;
        prodCost = 0.0;
        revenues = 0.0;
    }

    // Parameterized constructor
    MovieData(string t, string d, int y, int m, float p, float r) {
        title = t;
        director = d;
        yearReleased = y;
        timMin = m;
        prodCost = p;
        revenues = r;
    }

    //setters
    void set_title(string t);
    void set_director(string d);
    void set_timeMin(int m);
    void set_yearReleased(int y);
    void set_prodCost(float p);
    void set_revenues(float r);

    //getters
    string get_title();
    string get_director();
    int get_timeMin();
    int get_yearReleased();
    float get_prodCost();
    float get_revenues();

    // calculate profit
    float get_profit() {
        return revenues - prodCost;
    }
};

// Setter 
void MovieData::set_title(string t) { title = t; }
void MovieData::set_director(string d) { director = d; }
void MovieData::set_timeMin(int m) { timMin = m; }
void MovieData::set_yearReleased(int y) { yearReleased = y; }
void MovieData::set_prodCost(float p) { prodCost = p; }
void MovieData::set_revenues(float r) { revenues = r; }

// Getter 
string MovieData::get_title() { return title; }
string MovieData::get_director() { return director; }
int MovieData::get_timeMin() { return timMin; }
int MovieData::get_yearReleased() { return yearReleased; }
float MovieData::get_prodCost() { return prodCost; }
float MovieData::get_revenues() { return revenues; }

bool get_data(MovieData movies[], string filename) {
    ifstream inFile(filename); //open file
    if (!inFile) {
        cerr << "Error: Can't open file " << filename << endl; 
        return false; // if file doesn’t exist
    }

    for (int i = 0; i < 50 && !inFile.eof(); i++) {
        string title, director;
        int yearReleased, timeMin;
        float prodCost, revenues;

        inFile >> title >> director >> yearReleased >> timeMin >> prodCost >> revenues;

        // Use constructor to create MovieData object
        movies[i] = MovieData(title, director, yearReleased, timeMin, prodCost, revenues);
    }

    inFile.close();
    return true; // successful 
}

// Find maximum profit
MovieData find_max_revenue(MovieData movies[], int size) {  
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (movies[i].get_profit() > movies[maxIndex].get_profit()) {
            maxIndex = i;
        }
    }
    return movies[maxIndex]; 
}

// MAIN 
int main() {
    MovieData movies[50];
    string filename;
    bool validFile = false;

    //  while loop until valid file name is entered
    while (!validFile) {
        cout << "Enter filename: ";
        cin >> filename;
        validFile = get_data(movies, filename);
    }

    //display movie with the maximum profit
    MovieData maxMovie = find_max_revenue(movies, 50);

    cout << "\nMovie with Maximum Profit:\n";
    cout << "-----------------------------------\n";
    cout << "Title: " << maxMovie.get_title() << endl;
    cout << "Director: " << maxMovie.get_director() << endl;
    cout << "Year Released: " << maxMovie.get_yearReleased() << endl;
    cout << "Profit: $" << maxMovie.get_profit() << endl;

    return 0;
}

