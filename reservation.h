#include <iostream>

class reservation{
  private:
    int reservationID;
    const char event_type[];
    int hiring_hours;
    int no_of_photographers;

  public:
    reservation();
    reservation(int reservID, const char eventType[], int hiringHours, int photographers);
    void setreservation();
    void cancle_reservation();
    float quotationCal();
    ~reservation();
}