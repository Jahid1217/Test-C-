#include <iostream>
#include <string>


using namespace std;

const int MAX_COMICS = 100;

int main() {
    string comicNames[MAX_COMICS];
    int comicQuantities[MAX_COMICS];

    int numComics;
    cout << "Enter the number of comic books in your collection: ";
    cin >> numComics;

    if (numComics > MAX_COMICS) {
        cout << "Too many comics for this program to handle." << endl;
        return 1;
    }


    for (int i = 0; i < numComics; i++) {
        cout << "Enter the name of comic book " << i + 1 << ": ";
        cin >> comicNames[i];

        cout << "Enter the quantity of " << comicNames[i] << ": ";
        cin >> comicQuantities[i];
    }


    cout << "\nComic Book Collection:\n";
    for (int i = 0; i < numComics; i++) {
        cout << "Comic Name: " << comicNames[i] << ", Quantity: " << comicQuantities[i] << endl;
    }
    return 0;
}
