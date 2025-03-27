/*Saul Mendoza
CSC 111
StatsApp*/


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream statsfile;
    string input;
    int number;
    int min;
    int max;
    double average;
    int total;
    int count = 0;
    statsfile.open("statistic.txt");
    if (!statsfile)
        cout << "Error openning input file!" << endl;
    else
    {
        cout << "File is open." << endl;
        while (getline(statsfile,input))
        {
            number = stoi(input);
            
            if (number < min) min = number;
            if (number < max) max = number;
            total += number;
            //cout << number << endl;
            count++;
        }

        average = total/double(count);


        cout << "The minimun is " << min << endl;
        cout << "The maximun is " << max << endl;
        cout << "The total is " << total<< endl;
        cout << "The average is " << fixed << setprecision(2) << average << endl;
        cout << "The number of records is " << count << endl;
        
        statsfile.close();
    }
}
