#include <iostream>

using namespace std;

int main(){
	
	int totprice;
	float discount;
	
	cout<< "Enter your total price : ";
	cin>> totprice;
	
	if(totprice>10000){
		
		discount = totprice*(25/100.0);
	}
	else if(10000>=totprice && totprice>5000){
		
		discount = totprice*(15/100.0);
	}
	else if(5000>=totprice && totprice>3000){
		
		discount = totprice*(10/100.0);
	}
	else{
		
		discount = totprice*(0/100.0);
	}
	
	cout<< "Discount = Rs. " << discount <<endl;
	
	return 0;
}