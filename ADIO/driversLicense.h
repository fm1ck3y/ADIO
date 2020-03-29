#pragma once

#include <string>
#include <ctime>

using namespace std;

class driversLicense {
public:
	driversLicense(string _surname, string _name, string _middleName,
		time_t _dateOfBirth, time_t _dateOfIssue, time_t _expirationDate,
		string _issuedBy, unsigned short int _serial, unsigned int _number, string _placeOfRegistration,
		/* Photo human, */ /* Photo signature, */
		unsigned short int _lengthArrCar, string* _arrCar, time_t* _arrCarDateOfIssue,
		time_t* _arrCarExpirationDate, string* limitation /*, Photo barcord*/);

	void setFio(string _surname, string _name, string _middleName);
	string getFio();

	void setDateOfBirth(time_t _dateOfBirth);
	time_t getDateOfBirth();

	void setDateOfIssue(time_t _dateOfIssue);
	void setExpirationDate(time_t _expirationDate);
	void setIssueBy(string _issuedBy);
	time_t getDateOfIssue();
	time_t getExpirationDate();
	string getIssueBy();

	void setSerial(unsigned short int _serial);
	void setNumber(unsigned int _number);
	unsigned short int getSerial();
	unsigned int getNumber();

	void setPlaceOfRegistation(string _placeOfRegistration);
private:
	string surname;
	string name;
	string middleName;
	time_t dateOfBirth;

	time_t dateOfIssue;
	time_t expirationDate;

	string issuedBy;
	unsigned short int serial;
	unsigned int number;
	string placeOfRegistration;

	// Photo human
	// Photo signature

	unsigned short int lengthArrCar;
	string* arrCar;
	time_t* arrCarDateOfIssue;
	time_t* arrCarExpirationDate;
	string* limitations;

	// Photo barcode
};
