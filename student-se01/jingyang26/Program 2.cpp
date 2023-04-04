// Programming Technique II (SCSJ1023)
// Tutorial 1: Procedural Programming (PP) vs. Object-Oriented Programming (OOP)
// Program 2: Using PP with struct
// Use the following coordinates: (1, 2) and (3, 4) for Circle 1 and 2 to test your code
// The distance and slope between these two circle centres are 2.83 and 1 respectively

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// ! Task 1: Define a struct data type to hold information about a circle
	struct Circle
	{
		int x,y;	
	};


// ! Task 2: Define a function to calculate the distance between two circle centres.
double distance(Circle a, Circle b)
{
	return sqrt(pow(((double)b.x-a.x),2) + pow(((double)b.y-a.y),2));
	
}


// ! Task 3: Define a function to calculate the slope between two circle centres.
double slope(Circle a, Circle b)
{
	return (double)(b.y-a.y)/(b.x-a.x);
}



int main()
{
	// ! Task 4: Define a circle with specified information from the struct data type
	Circle a,b;
	
	cout << "Please enter the centre coordinates of Circle 1" << endl;
	cin >> a.x >> a.y;
	cout << "\nPlease enter the centre coordinates of Circle 2" << endl;
	cin >> b.x >> b.y;


	// ! Task 5: Calculate the distance and slope between two circle centres
	double d = distance(a,b);
	double s = slope(a,b);


	// ! Task 6: Display the distance and slope between two circle centres
	cout << "Distance = " << fixed << setprecision(2) << d << endl;
	cout << "Slope = " << s << endl;


	return 0;
}




