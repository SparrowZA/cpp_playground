#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
    /* This is the flow example from Chapter 2
    ex 16.
    */
    cout << "What hair cut should you get?" << endl;
    // Level 1
    int gender;
    cout << "Are you a male or female?" << endl;
    cout << "1. Male." << endl;
    cout << "2. Female" << endl;
    cin >> gender;

    // Level 2
    int hero_type;
    cout << "Are you a superhero or super villian?" << endl;
    cout << "1. Superhero." << endl;
    cout << "2. Super villian." << endl;
    cin >> hero_type;

    if((gender == 1 || hero_type == 2) || (gender == 2 || hero_type == 2)){
        cout << "You should get a mohawk!";
    }

    // Level 3
    int level3;
    if(gender == 1 || hero_type == 2){
        cout << "Steak or sushi?" << endl;
        cout << "1. Steak" << endl;
        cout << "2. Sushi" << endl;
        cin >> level3;
        if(level3 == 1){
            cout << "You should get a flat top.";
        }
        else if(level3 == 2){
            cout << "You should get a pompadour.";
        }
    }
    else if(gender == 2 || hero_type == 2){
        cout << "Anime or sitcom?";
        cout << "1. Anime" << endl;
        cout << "2. Sitcom" << endl;
        cin >> level3;
        if(level3 == 1){
            cout << "You should go with bangs.";
        }
        else if(level3 == 2){
            cout << "You should get a bob.";
        }
    }

    return 0;
}