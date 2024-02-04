#include <iostream>

using namespace std;

int main(){
	
	float cm,inches;
	
	cout<< "Enter a lenght in cm : ";
	cin>> cm;
	
	inches = cm/2.54;
	
	cout<< "Lenght in inches is " << inches <<endl;
	
	return 0;
}