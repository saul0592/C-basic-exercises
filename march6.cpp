#include <string>
#include <iostream>
using namespace std;

//Prototype of submitted by
void submittedBy(string );
//protoyoe int= sub3numbers;

int sum3number(int, int, int);

int main(){
    int x,y,z;
    cout << "Enter 3 integers " << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << "the sum is " << sum3number(x,y,z)<< endl;


    string name = "Saul Mendoza";
    cout << "Current name is "<< name << endl;
    submittedBy(name);
    cout << "After function call, name is " << name <<endl;
    return 0;
}

/// &refname it made the fucntion wants to modify the first name it change the function completely, intead of withouf=t && just keep the same name always even if it has a statement of changing.

void submittedBy(string &refname){


    cout << "Please enter ypur name ";
    getline(cin, refname);
    cout << "Sumbitter by: " << myname <<endl;
    return ;

}

int sum3number (int p1, int p2, int p3){
    return p1+p2+p3;
}