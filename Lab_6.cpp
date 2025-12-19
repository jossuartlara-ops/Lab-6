#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("students.txt");

    outFile << "Alex 85" << endl;
    outFile << "Maria 92" << endl;
    outFile << "John 78" << endl;
    outFile << "Sara 88" << endl;
    outFile << "Leo 90" << endl;

    outFile.close();

    string name;
    int score;

    ifstream inFile("students.txt");

    while (inFile >> name >> score) {
        cout << name << " " << score << endl;
    }

    inFile.close();
    return 0;
}