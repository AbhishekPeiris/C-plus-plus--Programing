#include <iostream>

using namespace std;

int main(){
	
	double salary,netSalary;
	int etype,other,otRate;
	
	cout<< "Enter Employee Type : ";
	cin>> etype;
	
	cout<< "Enter Salary : ";
	cin>> salary;
	
	cout<< "Enter Others : ";
	cin>> other;
	
	switch(etype){
		
		case 1:{
			otRate = 1000;
			break;
		}
		case 2:{
			otRate = 1500;
			break;
		}
		default :{
			otRate = 1700;
			break;
		}
	}
	
	netSalary = salary + other*otRate;
	
	cout<< "Net Salary is " << netSalary;
	
	return 0;
}