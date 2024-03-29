#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H
#include "Booking.h"

class HotelBooking :public Booking
{
private:
    std::string hotel;
    std::string town;
    string roomType;
    double hotelLatitude;
    double hotelLongtitude;
public:
    friend class bookingDetails;
    friend class TravelAgency;
    void setID(string inID);
    void setPrice(double inPrice);
    void setFromDate(string inFromdate);
    void setToDate(string inToDate);
    void setHotel(string inHotel);
    void setTown(string inTown);
    string getID();
    string getFromDate();
    string getToDate();
    string getHotel();
    string getTown();
    double getPrice();
    long getTravelId();
    string showDetails();
    json setgeojson();
    HotelBooking();
    HotelBooking(string inID,string inFromDate,string inToDate,string inTown,
                 string inHotel,double inPrice,long inTravelId,string InRoomType);
    ~HotelBooking(){}
};

#endif // HOTELBOOKING_H
