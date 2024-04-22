#include <bits/stdc++.h>
using namespace std;
// for movie
class Movie {
public:
    Movie(const string& title, int duration, double price)
        : title(title), duration(duration), price(price) {}

    string getTitle() const { return title; }
    int getDuration() const { return duration; }
    double getPrice() const { return price; }

private:
    string title;
    int duration;
    double price;
};
using namespace std;
// for seats
class Seat {
public:
    Seat(int row, char col)
        : row(row), col(col), booked(false) {}

    bool isBooked() const { return booked; }
    void book() { booked = true; }

    int getRow() const { return row; }
    char getCol() const { return col; }

private:
    int row;
    char col;
    bool booked;
};
using namespace std;
// for theater
class Theater {
public:
    Theater(int numRows, int numCols)
        : numRows(numRows), numCols(numCols) {
        for (int row = 1; row <= numRows; ++row) {
            for (char col = 'A'; col < 'A' + numCols; ++col) {
                seats.push_back(Seat(row, col));
            }
        }
    }

    bool isSeatValid(int row, char col) const {
        return row >= 1 && row <= numRows && col >= 'A' && col < 'A' + numCols;
    }

    bool isSeatAvailable(int row, char col) const {
        for (const Seat& seat : seats) {
            if (seat.isBooked() && seat.getRow() == row && seat.getCol() == col) {
                return false;
            }
        }
        return true;
    }

    void bookSeat(int row, char col) {
        for (Seat& seat : seats) {
            if (seat.getRow() == row && seat.getCol() == col) {
                seat.book();
                return;
            }
        }
    }

private:
    int numRows;
    int numCols;
    vector<Seat> seats;
};
using namespace std;
int main() {
    Movie movie("Sample Movie", 120, 10.0);
    Theater theater(5, 8); 

    cout << "Welcome to Movie-Ticket-Booking-System...\n";
    cout << "Movie: " << movie.getTitle() << ", Duration: " << movie.getDuration() << " minutes\n";

    int row;
    char col;
    int numSeatsBooked = 0;
    while (true) {
        cout << "Enter the row and column of the seat you want to book (e.g., 2 B): ";
        cin >> row >> col;

        if (!theater.isSeatValid(row, col)) {
            cout << "Error: Invalid seat selection. Please try again.\n";
            continue;
        }

        if (!theater.isSeatAvailable(row, col)) {
            cout << "Error: Seat already booked. Please select another seat.\n";
            continue;
        }

        theater.bookSeat(row, col);
        numSeatsBooked++;
        cout << "Seat " << row << " " << col << " booked successfully!\n";

        char choice;
        cout << "Do you want to book another seat? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    // Calculate and display the total cost
    double totalPrice = numSeatsBooked * movie.getPrice();
    cout << "Total number of seats booked: " << numSeatsBooked << endl;
    cout << "Total cost: $" << totalPrice << endl;

    return 0;
}
