#pragma once

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class LocationResidence{
	private:
		time_t dateStart;
		string region;
		string city;
		string district;

		string street;
		unsigned short int house;
		unsigned short int body;
		unsigned short int apartment;

		string issuedBy;
		int* departmentCode;
		bool isAvailable = false;
		time_t dateClose;

	public:
		LocationResidence(time_t _ds, string _region, string _city, string _district, string _street,
				unsigned short int _house, unsigned short int _body, unsigned short int _apartment, string _issuedBy,
				int* _departmentCode, bool _isAvailable, time_t _dateClose)
		{
			dateStart = _ds; 
			region = _region;
			city = _city;
			district = _district;
			street = _street;
			house = _house;
			body = _body;
			apartment = _apartment;
			issuedBy = _issuedBy;
			departmentCode = _departmentCode;
			isAvailable = _isAvailable;
			dateClose = _dateClose;
		}
};

class PlaceOfResidence{
	private:
		string country;
		string city;
		string street;
		int houseNumber;
		int apartmentNumber;
	public:
		PlaceOfResidence(string _country,string _city,string _street,int _houseNumber,int _apartmentNumber)
		{
			country = _country;
			city = _city;
			street = _street;
			houseNumber = _houseNumber;
			apartmentNumber = _apartmentNumber;
		}

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

class PlaceOfBirth{
	private:	
		string city;
		string region;
	public:
		PlaceOfBirth(string _city, string _region)
		{
			city = _city;
			region = _region;
		}

		void setCity(string _city);
		void setRegion(string _region);

		string getCity();
		string getRegion();
};

class Passport{
	private:
		string surname;
		string name;
		string middleName;
		time_t dateOfBirth;
		bool gender;

		string issuedBy;
		unsigned short int serial;
		unsigned int number;
		
		time_t dateOfIssue;
		int* departmentCode;

		PlaceOfBirth pob;
		PlaceOfResidence por;
	public:
		Passport(string _surname, string _name, string _middleName,
			unsigned short int _serial, unsigned int _number,
			bool _gender, time_t _dateOfBirth, time_t _dateOfIssue, int* _departmentCode,
			PlaceOfBirth _pob, PlaceOfResidence _por)
		{
			surname = _surname;
			name = _name;
			middleName = _middleName;
			serial = _serial;
			number = _number;
			gender = _gender;
			dateOfBirth = _dateOfBirth;
			dateOfIssue = _dateOfIssue;
			departmentCode = _departmentCode;
			pob = _pob;
			por = _por;
		}

		void setFio(string _surname, string _name, string _middleName);
		string getFio();
		void setDateOfBirth(time_t _dateOfBirth);
		void setDateOfIssue(time_t _dateOfIssue);
		bool getGender();
		void setGender(bool _gender);
		time_t getDateOfBirth();
		time_t getDateOfIssue();
		unsigned short int getSerial();
		void setSerial(unsigned short int _serial);
		void setNumber(unsigned int);
		unsigned int getNumber();
		int* getDepartmentCode();
		void setDepartmentCode(int* _departmentCode);
		PlaceOfBirth getPlaceOfBirth();
		void setPlaceOfBirth(PlaceOfBirth _pob);
		PlaceOfResidence getPlaceOfResidence();
		void setPlaceOfResidence(PlaceOfResidence _por);
};
