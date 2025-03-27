#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int count = 1;
    string record;
    ifstream lineup;
    lineup.open("LineUp.txt");
    if (!lineup){
        cout << "FILE DOESN'T READ"<< endl;
        return 1;
    }else{
        cout << "File read it succesfully."<< endl;


        while (getline(lineup, record)) { // Read full lines
        //cout << record << endl;
        //count++;
        cout << count << "-" << record << endl;
        count++;// count the lines has the file
        }
        lineup.close();
        
    }
    return 0;
}