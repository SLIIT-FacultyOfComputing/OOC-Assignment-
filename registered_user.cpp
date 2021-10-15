#include "registered_user.h"
#include <iostream>
#include <string>
using namespace std;

registered_user::registered_user(){

}

registered_user::registered_user(const char uname[], const char uemail[], const char pnumber[], int upass, int cID){

  password = upass;
  clientID = cID;
  
}

bool registered_user::validateUser(){

}

registered_user::~registered_user(){

  cout << "Deconstructor from Registered User Class" << endl;
  
}