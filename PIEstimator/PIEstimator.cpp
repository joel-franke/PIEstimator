// PIEstimator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
#include <limits>
#include <iomanip>
#include <string> // Used to compare the digits of pi

using namespace std;


int compareToPI(double calculatedPI) {
	const long double real_pi = 3.141592653589793238;
	string ComparePI = to_string(calculatedPI);
	string CompareReal_PI = to_string(real_pi);
	//char ComparePIDigits = ComparePI[j];
	//char CompareReal_PI_digits = CompareReal_PI[j];


	cout << "Ausgabe echtes pi: " << setprecision(18) << real_pi << endl;
	
	for (int j = 0; j < ComparePI.size(); j++) {
		
		if (ComparePI[j] != CompareReal_PI[j]) {
			
			cout << ComparePI[j];
			
		} else {
			cout << ComparePI[j];
		}
	}
		

	
	
	return 0;
}

int main()
{
	double xcoord; //x component of coordinate
	double ycoord; //y component of coordinate
	long double pi; //to store result
	int idx; //index counter for main loop
	int numOfRuns; //holds number of trials
	int count; //counter for number of circle hits
	//initialise random number generator

	srand(time(0));
	//reset counter
	count = 0;
	//ask the user for the number of trials
	cout << "Please enter the number of trials: "; 
	cin >> numOfRuns;
	//tell user you are busy
	cout << "\nRunning ..." << endl;

	//main loop
	for (idx = 0; idx < numOfRuns; ++idx) {
		//get new random coordinate
		xcoord = ((double)rand() / RAND_MAX) * (1 - 0);
		ycoord = ((double)rand() / RAND_MAX) * (1 - 0);

		if (sqrt(pow(xcoord, 2.0) + pow(ycoord, 2.0)) <= 1) {
			//increase number of counts for circle
			count++;
		}
		//cout << count << "\n";
	}
	//estimate pi
	pi = 4.0 * ((long double)count / (long double)idx);

	//print results
	cout << "\nResult: pi=\t"  << setprecision(18) << pi  << endl;

	//compare the calculated pi to the scientific pi 
	compareToPI(pi);

	//good bye ...	
	return 0;
}
