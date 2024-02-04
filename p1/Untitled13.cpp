#include <iostream>

using namespace std;

int main(){
	
	int number1,number2,sum;
	float average;
	
	cout<< "Enter your 1st number : ";
	cin>> number1;
	
	cout<< "Enter your 2nd number : ";
	cin>> number2;
	
	sum = number1+number2;
	
	cout<< "\nSamation = " << sum <<endl;
	
	average = sum/2.0;
	
	cout<< "Average = " << average;
	
	return 0;
}