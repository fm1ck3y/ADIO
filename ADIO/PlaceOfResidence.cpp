#include <iostream>
#include <string>

#include "PlaceOfResidence.h"

PlaceOfResidence::PlaceOfResidence(string _country,string _city,string _street,int _houseNumber,int _apartmentNumber)
		{
			country = _country;
			city = _city;
			street = _street;
			houseNumber = _houseNumber;
			apartmentNumber = _apartmentNumber;
		}

void PlaceOfResidence::setCountry(string _country){
	country = _country;
}

void PlaceOfResidence::setCity(string _city){
	city = _city;
}

void PlaceOfResidence::setStreet(string _street){
	street = _street;
}

void PlaceOfResidence::setHouseNumber(int _houseNumber){
	houseNumber = _houseNumber;
}

void PlaceOfResidence::setApartmentNumber(int _apartmentNumber){
	apartmentNumber = _apartmentNumber;
}

string PlaceOfResidence::getCountry(){ return country; }
string PlaceOfResidence::getCity(){ return city; }
string PlaceOfResidence::getStreet(){ return street; }
int PlaceOfResidence::getHouseNumber(){ return houseNumber; }
int PlaceOfResidence::getApartmentNumber() { return apartmentNumber; }


