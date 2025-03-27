#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream file("savings.txt"); // open file

    if (!file){
        cout << "File doesn't exist, please try again."; // error if the files doesn't exist.
    }else{
        double total_savings = 0.0, amount;
        int count = 0;

        while (file >> amount){// reads the data from the file
            total_savings += amount;// calculate total
            
            //cout << amount<< endl;
            count++; 
        }
        file.close();// file close.
        if (count >0 ){// Checks if count is greater than 0 because the denominator cannot be 0 and the file must have data.
            double avarage = total_savings/ count; // calculate the avarage
            cout << fixed << setprecision(2); // we preccis only 2 decimals to out answer
            cout << "You averaged $"<< avarage << " savings per day and reached a total of $" << total_savings 
            << " saved in " << count << " days."<< endl;
            cout << "Submitted by: Saul Mendoza"<< endl;

        }
    }
    return 0;   
}
