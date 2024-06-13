#include<bits/stdc++.h>
using namespace std;

class Guest {
public:
    int age;
    Guest(int age) : age(age) {}
    int getPrice() const {
        if (age <= 2) return 0;
        if (age > 2 && age < 18) return 100;
        if (age >= 18 && age < 60) return 500;
        if (age >= 60) return 300;
        return 0;
    }
};

class Ticket {
private:
    vector<Guest> guests;
    int totalCharge;

public:
    Ticket() : totalCharge(0) {}

    void addGuest(int age) {
        Guest guest(age);
        guests.push_back(guest);
        totalCharge += guest.getPrice();
    }

    int getTotalCharge() const {
        return totalCharge;
    }

    void printTicketDetails() const {
        for (long long i = 0; i < guests.size(); ++i) {
            cout << "Guest " << i + 1 << " (age: " << guests[i].age << ")" << endl;
        }
        cout << "Total Charge: INR " << totalCharge << endl;
    }
};

class TicketingSystem {
public:
    Ticket issueTicket(const vector<int>& guestAges) {
        Ticket ticket;
        for (int age : guestAges) {
            ticket.addGuest(age);
        }
        return ticket;
    }
};

int main() {
    TicketingSystem ticketingSystem;
    vector<int> guestAges;
    int numGuests, age;

    // Take Input the number of guests
    cout << "Enter the number of guests: ";
    cin >> numGuests;

    // Take Input the age of each guest
    for (int i = 0; i < numGuests; ++i) {
        cout << "Enter age of guest " << i + 1 << ": ";
        cin >> age;
        guestAges.push_back(age);
    }

    // Issue the ticket
    Ticket ticket = ticketingSystem.issueTicket(guestAges);

    // Print the ticket details for verification
    cout << "\nTicket Details:" << endl;
    ticket.printTicketDetails();

    return 0;
}
