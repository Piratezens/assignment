#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("example.txt");
    ofstream dest("copy.txt");
    if (!source || !dest) {
        cout << "Error opening files!" << endl;
        return 1;
    }
    char ch;
    while (source.get(ch)) {
        dest << ch;
    }
    source.close();
    dest.close();
    cout << "File copied successfully!" << endl;
    return 0;
}