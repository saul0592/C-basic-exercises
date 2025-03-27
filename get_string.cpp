#include <iostream>
#include <string>
using namespace std;

int main(){
    /*Test getline and using the string class*/
    string name; 
    string input;// create a variable name 
    int age;
    cout <<"Enter your name: ";
    getline(cin, name);
    cout <<"\n Enter your age: ";
    getline (cin,input);// getline expect string 
    age = stoi(input);// convert string into a integer
    //stod --> convert into a double
    //stof-- convert into a float
    //cin >> age;
    cout << "Hello " << name << ", your reached a milestone at " << age << "."<< endl;
    return 0;


}
