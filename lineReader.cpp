/*
 Title: lineReader.cpp
 Description: printing each line in a file as enter button is pressed
 Date:
 Name: Raphael Onyedikachi Abangwu
 Student Number: 3389621
 Version: 1.0
*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {


    ifstream file("file.txt");
    string words;
    vector<string> empty;

    //to check if the file exists
    if(file) {

        while (getline(file, words))
        {
            empty.push_back(words);
        }//end of while

        cout << empty[0];

        for (int i = 1; i <empty.size(); i++)
        {

            cout << "\nPress 'Enter' to continue";

            if(cin.get() == '\n')
                cout << empty[i];
        }//end of for
    } else
    {
        cout << "The file does not exist!" << endl;
    }//end of else

    return 0;
}///:~
