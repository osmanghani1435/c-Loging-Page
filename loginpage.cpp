#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
    
    
    //-------------------------------------------------------
    // create VAriables for password and username: 
    
    string username;
    int password;
    
    
    //-------------------------------------------------------
    // add a desing to display greeting and app name: 
    
    cout<< string(70, '-') << endl;
    cout<< setw(35)<< "Admin Login Pannel" <<endl;
    cout<< string(70, '-') <<endl;
    
    
    //---------------------------------------------------------------
    // take user input for username; 
    
    cout<< "Enter correct username:" <<endl;
    cin>> username;
    
    //---------------------------------------------------------------
    // verify user input password
    
    if (username== "admin"){
        cout<< username;
    }
    else{
        cout<<"Incorrect username Please Try Again Later" <<endl;
    }
    
    
    //----------------------------------------------------------
    
    // take user input password: 
    
    cout<< "Enter Correct Password:";
    cin>> password;
    
    
    //-------------------------------------------------------
    // verify user input password either it is correct neither  incorrect: 
    
    if (password==123){
        cout<< password;
    }
    else{
        cout<<" You Entered Incorrect Password Please Try Again Later" <<endl;
    }
    
    //-----------------------------------------------------------
    
    
    
}
