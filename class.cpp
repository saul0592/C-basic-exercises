/* 
//file open
    ifstream for input

    ifstream myfile

    myfile.opene('file.txt')
//file close
    ofstream for output
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ifstream myfile("file.txt"); // Open file directly in constructor
    string record;
    int count = 0;

    if (!myfile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Your file exists\n";

    while (getline(myfile, record)) { // Read full lines
        cout << record << endl;
        count++;// count the lines has the file
    }
    cout << "The file content "<< count << endl;

    myfile.close();
    return 0;
}
