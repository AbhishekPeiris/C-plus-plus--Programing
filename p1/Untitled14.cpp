/*
  Write a C++ program to input the length and the
 width of a rectangle and calculate and print the
 perimeter
 
*/

#include <iostream>

using namespace std;

int main(){
	
	float lenght,widht,perimeter;
	
	cout<< "Input the lenght of the rectangle : ";
	cin>> lenght;
	
	cout<< "Input the widht of the rectangle : ";
	cin>> widht;
	
	perimeter = 1/2.0*lenght*widht;
	
	cout<< "\nPerimeter of the Rectangle : " << perimeter;
	
	return 0;
}