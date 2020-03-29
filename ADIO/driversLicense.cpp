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

string driversLicense::getPlaceOfRegistation()
{
	return placeOfRegistration;
}

void driversLicense::setPhotoHuman() {
	return;
}

void driversLicense::setPhotoSignature() {
	return;
}

void driversLicense::setLengthArrCar(unsigned short int _lengthArrCar) {
	lengthArrCar = _lengthArrCar;
	arrCar = new string[_lengthArrCar];
	arrCarDateOfIssue = new time_t[_lengthArrCar];
	arrCarExpirationDate = new time_t[_lengthArrCar];
	limitations = new string[_lengthArrCar];
}

unsigned short int driversLicense::getLengthArrCar() {
	return lengthArrCar;
}

void driversLicense::setArrCar(string* _arrCar) {
	for (int i = 0; i < lengthArrCar; i++)
		arrCar[i] = _arrCar[i];
}

void driversLicense::setArrCarDateOfIssue(time_t* _arrCarDateOfIssue) {
	for (int i = 0; i < lengthArrCar; i++)
		arrCarDateOfIssue[i] = _arrCarDateOfIssue[i];
}

void driversLicense::setArrCarExpirationDate(time_t* _arrCarExpirationDate) {
	for (int i = 0; i < lengthArrCar; i++)
		arrCarExpirationDate[i] = _arrCarExpirationDate[i];
}

void driversLicense::setLimitations(string* _limitations) {
	for (int i = 0; i < lengthArrCar; i++)
		limitations[i] = _limitations[i];
}

string* driversLicense::getArrCar()
{
	return arrCar;
}

time_t* driversLicense::getArrCarDateOfIssue()
{
	return arrCarDateOfIssue;
}

time_t* driversLicense::getArrCarExpirationDate()
{
	return arrCarExpirationDate;
}

string* driversLicense::getLimitations()
{
	return limitations;
}

void driversLicense::setPhotoBarcode() {
	return;
}
