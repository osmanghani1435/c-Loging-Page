#include <iostream>
#include <string>
using namespace std;

void menu(){

    cout << "_____________________________________" << endl;
    cout << "++++++++++++++++Menu+++++++++++++++++" << endl;

}

int main(){

    string name;

    cout << "enter name:" << endl;
    cin >> name;

    if(name == "Osman"){

        
        menu(); // function call

    }
    else{
        cout<< "Incorrect Name";
    }

}
