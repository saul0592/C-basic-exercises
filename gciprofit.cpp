#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    const double cost_per_cubic_foot = 0.23;
    const double charge_per_cubic_foot = 0.5;
    double length;//input
    double width;//input
    double height;//input
    double volume;//calculate
    double cost;//calculate
    double charge;//calculate
    double profit;//calculate
    
    cout << "Let's start with the dimension";
    cout << "Introduce the Lenght: ";
    cin >> length;
    cout << "Introduce the widt: ";
    cin >> width;
    cout << "Introduce heght: ";
    cin >> height;

     if (0 < length && length < 24 && 0 < width && width < 24 && 0 < height && height < 24) {
        volume = length * width * height;
        cost = volume * cost_per_cubic_foot;
        charge = charge_per_cubic_foot * volume;
        profit = charge - cost;
        cout << fixed << setprecision(2);
        cout << "Output Test: \nVolume= " << volume << "\nCost= " << cost << "\nCharge to customer= " << charge << "\nProfit= " << profit << endl;
        
     }else{
        cout << "The numbers can't be less than 0 or greater than 24.";
        }
    return 0;

}

