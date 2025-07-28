#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    string word;
    int count = 0;
    while (file >> word) {
        count++;
    }
    file.close();
    cout << "Total words: " << count << endl;
    return 0;
}