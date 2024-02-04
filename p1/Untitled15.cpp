#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	
	cout<< setw(12) << setiosflags(ios::fixed) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(1) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(2) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(3) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(4) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(5) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(6) << 2.595789 <<endl;
	cout<< setw(12) << setprecision(0) << 2.595789 <<endl;
	
	// cout<< setw(12) << setprecision() << 2.595789 <<endl;
	// cout<< setw(12) << setprecision << 2.595789 <<endl;
	
	return 0;
}