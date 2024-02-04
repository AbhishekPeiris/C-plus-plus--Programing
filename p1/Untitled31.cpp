#include <iostream>

using namespace std;

int main(){
	
	int no;
	long fac;
	
	cout<< "Enter a Number : ";
	cin>> no; // 5
	
	fac = 1;
	
	for(int r=no ; r>=1 ; r--){ 
		
		fac = fac*r; // 5*1 // 4*5 // 3*4*5 // 2*3*4*5 // 1*2*3*4*5
	
	cout<< "Factorial of " << no << " is " << fac;

	}
	return 0;
}