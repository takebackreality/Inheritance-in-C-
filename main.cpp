#include <iostream>
#include <string>
#include "Cat.h"

using namespace std;

int main() {

    string petName, catName, catBreed;
    int petAge, catAge;

    Pet myPet;
    Cat myCat;

    getline(cin, petName);
    cin >> petAge;
    cin.ignore();
    getline(cin, catName);
    cin >> catAge;
    cin.ignore();
    getline(cin, catBreed);

    // Create generic pet (assuming Pet has setters)
    myPet.SetName(petName);
    myPet.SetAge(petAge);
    myPet.PrintInfo();

    // Create cat pet (assuming Cat has a constructor or setters)
    myCat.SetName(catName);
    myCat.SetAge(catAge);
    myCat.SetBreed(catBreed);
    myCat.PrintInfo();

    // Output the cat breed using GetBreed()
    cout << "   Breed: " << myCat.GetBreed() << endl;

    return 0;
}
