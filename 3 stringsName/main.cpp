#include <iostream>

using namespace std;

int main()
{
    string string1 = "Arina";
    string string2 = "Jannat";
    string string3 = "Ananna";


    string full_name = string1 + " " + string2 + " " + string3;
    cout << "Concatenation: " << full_name <<endl;


    int length1 = string1.length();
    int length2 = string2.length();
    int length3 = string3.length();

    cout << "Length of string1: " << length1 << endl;
    cout << "Length of string2: " << length2 << endl;
    cout << "Length of string3: " << length3 << endl;


    string upper_string1 = string1;

    for (char &c : upper_string1) {
        c = std::toupper(c);
    }

    std::string lower_string2 = string2;

    for (char &c : lower_string2) {
        c =tolower(c);
    }

    cout << "Uppercase string1: " << upper_string1 << endl;
    cout << "Lowercase string2: " << lower_string2 << endl;


    string new_string3 = string3;

    size_t found = new_string3.find("Smith");

    if (found !=string::npos) {
        new_string3.replace(found, 5, "Johnson");
    }
    cout << "Replace string3: " << new_string3 << endl;


    string substring_string1 = string1.substr(1, 2);

    cout << "Substring of string1: " << substring_string1 << endl;

    return 0;
}
