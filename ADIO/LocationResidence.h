#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;


// This class is intended for storing a residence in a passport.
class LocationResidence{
	private:
		time_t dateStart; 
		string region; 
		string city; 
		string district;
		string street;
		unsigned short int house; // number of house
		unsigned short int body; // number of corps
		unsigned short int apartment; // number of apartment
		string issuedBy; 
		int* departmentCode;
		bool isAvailable = false;
		time_t dateClose;

	public:
		LocationResidence(time_t _ds, string _region, string _city, string _district, string _street,
				unsigned short int _house, unsigned short int _body, unsigned short int _apartment, string _issuedBy,
				int* _departmentCode, bool _isAvailable, time_t _dateClose);

		time_t getDateStart();
		string getRegion();
		string getCity();
		string getDistrcit();
		string getStreet();
		unsigned short int getHouse();
		unsigned short int getApartment();
		unsigned short int getBody();
		string getIssuedBy();
		int* getDepartmentCode();
		bool getIsAvailable();
		time_t getDateClose();
		
		void setDateStart(time_t _datestart);
		void setRegion(string _region);
		void setCity(string _city);
		void setDistrict(string _district);
		void setStreet(string _street);
		void setHouse(unsigned short int _house);
		void setApartment(unsigned short int _apartment);
		void setBody(unsigned short int _body);
		void setIssuedBy(string _issuedBy);
		void setDepartmentCode(int* _departmentCode);
		void setIsAvailable(bool _isAvailable);
		void setDateClose(time_t _dateClose);
};

