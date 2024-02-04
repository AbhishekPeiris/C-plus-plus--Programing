#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float lenght,width,perimeter;
	
	cout<< "Input the lenght : ";
	cin>> lenght;
	
	cout<< "Input the width : ";
	cin>> width;
	
	
	perimeter = lenght*width;
	
	cout<< "Perimeter of Rectrangle : ";
	cout<< setprecision(2) << perimeter; 
	
	return 0;
	
}