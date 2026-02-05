// Law office billing program
#include <iostream>

const double RATE = 150.00; // Dollars per quarter hour

double fee(int hoursWorked, int *minutesWorked);
// Returns the charges for hoursWorked hours and
// minutesWorked minutes of legal services.


int main(){
    // Name spaces are used to avoid naming conflicts.
    // namespace is placed in the 
    using namespace std;
    int hours, minutes;
    double bill;

    cout << "Enter you hours and minutes: ";
    cin >> hours >> minutes;

    bill  = fee(hours, &minutes);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For " << hours << " hours and " << minutes
    << " minutes, your bill will be " << bill << endl;

    return 0;
}

double fee(int hoursWorked, int *minutesWorked){
    // the value being passed into this function
    // for minutesWorked is being passed in by value
    int quarterHours;
    // int minutesWorked = *minutesWorked;
    *minutesWorked = hoursWorked * 60 + *minutesWorked;
    quarterHours = *minutesWorked / 15;
    return (quarterHours * RATE);
}