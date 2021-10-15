#include "reservation.h"
#include <iostream>
#include <string>
using namespace std;

reservation::reservation(){

}

reservation::reservation(int reservID, const char eventType[], int hiringHours, int photographers){
   reservationID = reservID;
   event_type = eventType;
   hiring_hours = hiringHours;
   no_of_photographers = photographers;   
   
   
}

void reservation::setreservation(){
  cout << "Event Type = " << reservationID << endl;
  cout << "Hiring Hours = " << hiring_hours << endl;
  cout << "No Of Photographers = " << no_of_photographers << "\n" << endl;
  
}

void reservation::cancle_reservation(){

}

float reservation::quotationCal(){
  
}

reservation::~reservation(){

  cout << "Deconstructor from Reservation Class" << endl;
  
}
