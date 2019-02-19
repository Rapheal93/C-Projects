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
