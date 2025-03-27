/*Saul Mendoza
CSC111
World Serier Winner excersice of array*/

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>//Needed for find_if() to search the team list
#include <vector> //  is a dynamic array that can resize itself automatically when elements are added or removed

using namespace std;

void appendNewFile(const string& newWinnersFile, const string& worldWinnerFile){
    ifstream file(newWinnersFile);
    ifstream worldFile(worldWinnerFile);
    ofstream newWorldfile(worldWinnerFile, ios::app); //ios::app-->it append the new lines
    string newLine, newOutput_string;
    vector<string> newOutput;
    if (!file || !newWorldfile || !newWorldfile) {
        cout << "Error opening files." << endl;
        return;
    }

    while (getline(worldFile, newOutput_string)){
        newOutput.push_back(newOutput_string);
        
    }

    while (getline(file, newLine)) {
        // Check if the new line already exists
        if (find(newOutput.begin(), newOutput.end(), newLine) == newOutput.end()) {
            newWorldfile << newLine << endl;
            cout << "Content ADDED: " << newLine << endl;
        }
    }
    file.close();
    worldFile.close();
    newWorldfile.close();
}




int main(){
    
    string worldTeam;
    string team;
    string teamSelected;

    //arrays/vectors
    vector<string> teamlist;
    vector<string> teamSelectedList;

    //open files
    ifstream teamsFile("TeamsForMac.txt"), worldWinnerFile("WorldSeriesWinnersForMac.txt"), newfile("newwinners.txt"); 
    
    if(!teamsFile || !worldWinnerFile || !newfile){
        cout << "FILE DOESN'T READ"<< endl;
        return 1;
    }else{
        cout << "The files exists" << endl;
        while(getline(teamsFile, team)){
            teamlist.push_back(team);
        }
        teamsFile.close();
        while(getline(worldWinnerFile,teamSelected)){
            teamSelectedList.push_back(teamSelected);
        }
        worldWinnerFile.close();
        
        //display the teams 
        cout << "Teams: " << endl;
        for(size_t i=0; i< teamlist.size(); i++){
            cout << teamlist[i] << endl;

        }
        appendNewFile("newwinners.txt", "WorldSeriesWinnersForMac.txt");

        //loop if u want to search more teams.
        bool continueSearching = true;
        while(continueSearching){
            cout << "Please enter a team: " << endl;
            getline(cin, teamSelected);

            //validate if the team exist
            while (find(teamSelectedList.begin(), teamSelectedList.end(), teamSelected) == teamSelectedList.end()) {
                cout << "Team not found it. Please try again: ";
                getline(cin, teamSelected);
                }  
            //start to count
            int count = 1903;
            int countWins = 0;
            //loop to see in the array what tthe team selected and print with it
            for(size_t j=0; j < teamSelectedList.size(); j++){
                if(teamSelectedList[j] == teamSelected){
                cout << count << " - " << teamSelectedList[j] << endl;
                countWins++;
                }
                //skip the numbers  
                if(count == 1904 || count== 1994){
                count++;
                }
                count++;
        }
            cout << "\nTotal World Series wins: " << countWins << endl;
            cout << "Do you want to search for another team? (y/n): ";
            char choice;
            cin >> choice;
            cin.ignore();  // to ignore the newline character left by cin
            if (choice != 'y' && choice != 'Y') {
                //the loop will finish is you didn't type y or Y
                continueSearching = false;
            }
        }
        
        cout << "Submited By: Saul Mendoza CSC 111" << endl;
        return 0;
    }
}
   