// PIEstimator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;


int main()
{
	double xcoord; //x component of coordinate
	double ycoord; //y component of coordinate
	double pi; //to store result
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
		xcoord = rand() % 100;
		ycoord = rand() % 100;
		//cout << "XCORD: " << xcoord << "\n";
		//cout << "YCORD: " << ycoord << "\n";

		if (sqrt(pow(xcoord, 2.0) + pow(ycoord, 2.0)) <= 100) {
			//increase number of counts for circle
			count++;
		}
		//cout << count << "\n";
	}
	//estimate pi
	pi = 4.0 * ((double)count / (double)idx);

	//print results
	cout << "\nResult: pi=\t"  << pi  << endl;
	//good bye ...	
	return 0;
}
