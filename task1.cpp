#include <iostream>
#include <string>
#include "task1.h"

using namespace std;

// custom append for char array
void myAppend(char str[], int &len, int n, char c) {
    for (int i = 0; i < n; i++) {
        str[len] = c;
        len++;
    }
    str[len] = '\0';
}

void task1() {
    char arr[100];
    string str;
    int n;
    char c;

    cout << "Enter string: ";
    cin.getline(arr, 100);
    str = arr;

    cout << "Enter number of symbols: ";
    cin >> n;
    cout << "Enter symbol: ";
    cin >> c;

    int len = 0;
    while (arr[len] != '\0') len++;

    myAppend(arr, len, n, c);
    str.append(n, c);

    cout << "Custom result: " << arr << endl;
    cout << "String result: " << str << endl;

    cin.ignore();
}
