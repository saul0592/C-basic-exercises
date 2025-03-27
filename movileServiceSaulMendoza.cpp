// Saul Mendoza
//CSC 111
//Movile Service Lab Excersice

#include <iostream>
using namespace std;// to do not use iostream::cout instead of only cout

int main()
{
    string getPackage;
    int numPackage;
    double totalCost = 0;
    double additionallyCost = 0;
    
    cout << "There are three differents plans\n";
    cout << "Package A: For 39.99 per month, 4 gygabytes are provided. Additionally costs $10 per gygabyte\n";
    cout << "Package B: For 59.99 per month, 8 gygabytes are provided. Additionally costs $5 per gygabyte\n";
    cout << "Package C: For 69.99 per month, unlimitaed data is provided\n";
    cout <<"Which package did you chose (A, B, C)? ";
     //get packaget
    cin >> getPackage;
    cout << "How many gigabytes were used? ";
     //get num packaget
    cin >> numPackage;

    if (getPackage == "A" || getPackage == "a"){
        totalCost = 39.99;
        if(numPackage > 4){
            additionallyCost = (numPackage -4)*10;
            totalCost += additionallyCost;
        }
        cout << "Your amount to pay is $"<< totalCost<<"\n";
    }
    else if (getPackage == "B" || getPackage =="b"){
        totalCost = 59.99;
        if(numPackage >8){
            additionallyCost = (numPackage - 8)*5;
            totalCost += additionallyCost;
        }
        cout << "Your amount to pay is $"<< totalCost<<"\n";
        }
    else if (getPackage== "C" || getPackage =="c"){
            totalCost = 69.99;
            cout << "Your amount to pay is $"<< totalCost<<"\n";}
    else{
        cout << "Your option is incorrect\n";
        return 1;
        }
    return 0;  
}
