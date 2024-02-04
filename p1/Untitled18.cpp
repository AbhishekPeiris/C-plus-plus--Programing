#include <iostream>

using namespace std;

int main(){
	
	int num1,num2;
	
	cout<< "Enter your 1st number : ";
	cin>> num1;
	
	cout<< "Enter your 2nd number : ";
	cin>> num2;
	
	if(num1<num2){
		
		cout<< num2 << " is Largest number" <<endl;
	}
	else{
		
		cout<< num1 << " is Largest number" <<endl;
	}
	
	return 0;
}