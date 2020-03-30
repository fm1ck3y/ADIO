#pragma once

#include <iostream>
#include <string>
#include <ctime>

using namespace std;
class PlaceOfBirth{
	private:	
		string city;
		string region;
	public:
		PlaceOfBirth(string _city, string _region);

		void setCity(string _city);
		void setRegion(string _region);

		string getCity();
		string getRegion();
};


