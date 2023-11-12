#include <iostream>

using namespace std;

int main()
{

    string firstName = "Arina";
    string middleName = "Jannat";
    string lastName = "Ananna";

    string fullName = firstName + " " + middleName + " " + lastName;

    int length = fullName.length();

    string subName = fullName.substr(5, 3);

    char searchChar = 'D';

    size_t found = fullName.find(searchChar);

    if (found != string::npos) {
        cout << "Character '" << searchChar << "' found at position " << found <<endl;
    } else {
        cout << "Character '" << searchChar << "' not found in the string" <<endl;
    }

    cout << "Full Name: " << fullName <<endl;
    cout << "Length of Full Name: " << length <<endl;
    cout << "Substring: " << subName << endl;


    return 0;
}
