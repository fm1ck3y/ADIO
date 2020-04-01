#include <iostream>
#include <string>
#include <ctime>

#include "LocationResidence.h"

LocationResidence::LocationResidence(time_t _ds, string _region, string _city, string _district, string _street,
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
time_t LocationResidence::getDateStart() { return dateStart; }
string LocationResidence::getRegion() { return region; }
string LocationResidence::getCity() { return city; }
string LocationResidence::getDistrcit() { return district; }
unsigned short int LocationResidence::getHouse() { return house; }
unsigned short int LocationResidence::getApartment() { return apartment; }
unsigned short int LocationResidence::getBody() { return body; }
string LocationResidence::getIssuedBy() { return issuedBy; }
int* LocationResidence::getDepartmentCode() { return departmentCode; }
bool LocationResidence::getIsAvailable() { return isAvailable; }
time_t LocationResidence:: getDateClose() { return dateClose; }

void LocationResidence::setDateStart(time_t _datestart) { dateStart = _datestart; }
void LocationResidence::setRegion(string _region) { region = _region; }
void LocationResidence::setCity(string _city) { city = _city; }
void LocationResidence::setDistrict(string _district) { district = _district; }
void LocationResidence::setStreet(string _street) { street = _street; }
void LocationResidence::setHouse(unsigned short int _house) { house = _house; }
void LocationResidence::setApartment(unsigned short int _apartment) { apartment = _apartment; }
void LocationResidence::setBody(unsigned short int _body) { body = _body; }
void LocationResidence::setIssuedBy(string _issuedBy) { issuedBy = _issuedBy; }
void LocationResidence::setDepartmentCode(int* _departmentCode) { departmentCode = _departmentCode; }
void LocationResidence::setIsAvailable(bool _isAvailable) { isAvailable = _isAvailable; }
void LocationResidence::setDateClose(time_t _dateClose) { dateClose = _dateClose; }
