#include <iostream>
#include <string>

#include "PlaceOfBirth.h"

PlaceOfBirth::PlaceOfBirth(string _city, string _region)
		{
			city = _city;
			region = _region;
		}
void PlaceOfBirth::setCity(string _city){
	city = _city;
}

void PlaceOfBirth::setRegion(string _region){
	region = _region;
}

string PlaceOfBirth::getCity() { return city; }
string PlaceOfBirth::getRegion() { return region; }
