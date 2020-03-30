#pragma once
#include <iostream>
#include <string>

using namespace std;

class PlaceOfResidence{
	private:
		string country;
		string city;
		string street;
		int houseNumber;
		int apartmentNumber;
	public:
		PlaceOfResidence(string _country,string _city,string _street,int _houseNumber,int _apartmentNumber);

		void setCountry(string _country);
		void setCity(string _city);
		void setStreet(string _street);
		void setHouseNumber(int _houseNumber);
		void setApartmentNumber(int _apartmentNumber);

		string getCountry();
		string getCity();
		string getStreet();
		int getHouseNumber();
		int getApartmentNumber();

};

