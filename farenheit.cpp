#include <iostream>
#include <iomanip>
using namespace std;

//Function to convert farenheit to celcios
double convert_farenheit(int celcious){
    return 5.0 * (celcious - 32) / 9;
}

int main(){
    cout << left <<setw(10) <<"Farenheit" << "Celsious" << endl;
    cout << "-----------------" << endl;


    //table from 32 to 100
    for(int f = 32; f <=100; f++){
        double c = convert_farenheit(f);
        cout << left << setw(12) << f << fixed << setprecision(1) << c << endl;
    }

    return 0;
    }
