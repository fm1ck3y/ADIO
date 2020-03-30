#pragma once
#include <iostream>
#include <string>
#include <ctime>

#include "PlaceOfResidence.h"
#include "LocationResidence.h"
#include "PlaceOfBirth.h"

using namespace std;
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

		PlaceOfBirth* placeOfBirth;
		PlaceOfResidence* placeOfResidence;
		LocationResidence* locationResidence; 

	public:
		Passport(string _surname, string _name, string _middleName,
			unsigned short int _serial, unsigned int _number,
			bool _gender, time_t _dateOfBirth, time_t _dateOfIssue, int* _departmentCode,
			PlaceOfResidence* _placeOfResidence, PlaceOfBirth* _placeOfBirth, LocationResidence* locRes)
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
			locationResidence = locRes;
			placeOfResidence = _placeOfResidence;
			placeOfBirth = _placeOfBirth;
		}

		void setFio(string _surname, string _name, string _middleName);
		string getFio();
		
		void setDateOfBirth(time_t _dateOfBirth);
		void setDateOfIssue(time_t _dateOfIssue);
		
		string getIssuedBy();
		void setIssuedBy(string _issuedBy);

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
		
		PlaceOfBirth* getPlaceOfBirth();
		void setPlaceOfBirth(PlaceOfBirth* _pob);

		PlaceOfResidence* getPlaceOfResidence();
		void setPlaceOfResidence(PlaceOfResidence* _por);

		LocationResidence* getLocationResidence();
		void setLocationResidence(LocationResidence* _loc);
};
