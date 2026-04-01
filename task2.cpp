#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "task2.h"

using namespace std;

int countDigits(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) count++;
    }
    return count;
}

bool isValid(string str) {
    return !str.empty();
}

void task2() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (!inFile) {
        cout << "Error opening input file!" << endl;
        return;
    }

    string line;

    while (getline(inFile, line)) {
        if (isValid(line)) {
            int digits = countDigits(line);
            outFile << line << " -> digits: " << digits << endl;
        } else {
            outFile << "Invalid string" << endl;
        }
    }

    cout << "Processing complete. Check output.txt" << endl;

    inFile.close();
    outFile.close();
}
