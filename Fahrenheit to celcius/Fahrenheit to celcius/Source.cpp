#include <iostream>

using namespace std;

int main() {

	cout << "Fahrenheit to celcius \n" << endl;

	float celcius;

	float Fahrenheit;

	cout << "Converting Fehrenheit to celcius" << endl;

	cout << "Please enter a Fehrenheit value: " << endl;
	cin >> Fahrenheit;

	celcius = ((Fahrenheit - 32.f) * 5.f) / 9.f;

	cout << Fahrenheit << " degrees F" << " in Celcius is: " << celcius << " degrees C" << endl;

	return 0;
}