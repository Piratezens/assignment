#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt", ios::app); // Append mode
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    file << "Appending new line." << endl;
    file.close();
    cout << "Data appended successfully!" << endl;
    return 0;
}