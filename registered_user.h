#include <iostream>
#include "User.h"

class registered_user : public User{
  private:
    int password;
    int clientID;

  public:
    registered_user();
    registered_user(const char uname[], const char uemail[], const char pnumber[], int upass, int cID);
    bool validateUser();
    ~registered_user();
}