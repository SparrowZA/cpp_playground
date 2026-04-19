#include <iostream>
#include <string>


int main(){
    using namespace std;
    int i;
    string t;
    cout << "please enter an age: ";
    cin >> i;
    cout << "Please enter a name: ";
    // cin >> t;
    cin.ignore();
    cout << "\n";
    cout << t;
    getline(cin, t);
    
    cout << "\n";
    cout << to_string(i);
    cout << "\n";
    cout << t;
    return 0;
}
