#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt"); // Open file in write mode
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    file << "Hello, File Handling in C++!" << endl;
    file.close();
    cout << "Data written successfully!" << endl;
    return 0;
}