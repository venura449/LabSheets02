#include<iostream>
#include<iomanip>

using namespace std;

struct rec {
	float length;
	float width;
};


float area(float length, float width);

int main() {
	struct rec yard,house;

	yard.length = 100;
	yard.width = 200;

	house.length = 10;
	house.width = 20;
	
	float fyard = area(yard.length, yard.width);
	float fhouse = area(house.length, house.width);

	float flawn = fyard - fhouse;

	cout << "Area of the Lawn is :" << fixed << setprecision(2) << flawn <<" Sq meters"<< endl;
}

float area(float length, float width) {
	return length * width;
}