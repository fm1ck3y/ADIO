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

