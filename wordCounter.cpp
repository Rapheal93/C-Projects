/*
 Title: wordCounter.cpp
 Description: Counting the number of white space separated words in a file
 Date:
 Name: Raphael Onyedikachi Abangwu
 Student Number: 3389621
 Version: 1.0
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string fileName;

    cout << "Enter a file name: " << endl;
    cin >> fileName;

    ifstream file(fileName);

    string words;
    int count = 0;

    //to check if the file exists
    if(file) {
        while (file >> words) {
            count++;

        }
        cout << "The number of whitespaces is: " << count << endl;
    } else
        {
            cout << "The file " << fileName << " does not exist!" << endl;
        }

    return 0;
}///:~