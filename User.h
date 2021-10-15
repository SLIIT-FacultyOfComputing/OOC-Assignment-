#include <iostream>

class User{
  private:
    const char name[];
    const char email[];
    const char phoneNumber[];

  public:
    User();
    void addAlbums();
    void removeAlbums();    
    ~User();
}