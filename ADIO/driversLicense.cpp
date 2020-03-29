#include <iostream>
#include <string>
#include <ctime>

#include "driversLicense.h"

driversLicense::driversLicense(string _surname, string _name, string _middleName,
	time_t _dateOfBirth, time_t _dateOfIssue, time_t _expirationDate,
	string _issuedBy, unsigned short int _serial, unsigned int _number, string _placeOfRegistration,
	/* Photo human, */ /* Photo signature, */
	unsigned short int _lengthArrCar, string* _arrCar, time_t* _arrCarDateOfIssue,
	time_t* _arrCarExpirationDate, string* limitation /*, Photo barcord*/) {

	surname = _surname;
	name = _name;
	middleName = _middleName;
	dateOfBirth = _dateOfBirth;

	dateOfIssue = _dateOfIssue;
	expirationDate = _expirationDate;

	issuedBy = _issuedBy;
	serial = _serial;
	number = _number;
	placeOfRegistration = _placeOfRegistration;

	// Photo human
	// Photo signature

	lengthArrCar = _lengthArrCar;
	arrCar = new string[lengthArrCar];
	arrCarDateOfIssue = new time_t[lengthArrCar];
	arrCarExpirationDate = new time_t[lengthArrCar];
	limitations = new string[lengthArrCar];

	// Photo barcode
}

void driversLicense::setFio(string _surname, string _name, string _middleName) {
	surname = _surname;
	name = _name;
	middleName = _middleName;
}

string driversLicense::getFio() {
	return surname + name + middleName;
}


void driversLicense::setDateOfBirth(time_t _dateOfBirth) {
	dateOfBirth = _dateOfBirth;
}

time_t driversLicense::getDateOfBirth()
{
	return dateOfBirth;
}

void driversLicense::setDateOfIssue(time_t _dateOfIssue) {
	dateOfIssue = _dateOfIssue;
}

void driversLicense::setExpirationDate(time_t _expirationDate) {
	expirationDate = _expirationDate;
}

void driversLicense::setIssueBy(string _issuedBy) {
	_issuedBy = _issuedBy;
}

time_t driversLicense::getDateOfIssue()
{
	return dateOfIssue;
}

time_t driversLicense::getExpirationDate()
{
	return expirationDate;
}

string driversLicense::getIssueBy()
{
	return issuedBy;
}

void driversLicense::setSerial(unsigned short int _serial) {
	serial = _serial;
}

void driversLicense::setNumber(unsigned int _number) {
	number = _number;
}

unsigned short int driversLicense::getSerial()
{
	return serial;
}

unsigned int driversLicense::getNumber()
{
	return number;
}

void driversLicense::setPlaceOfRegistation(string _placeOfRegistration) {
	placeOfRegistration = _placeOfRegistration;
}
