#include <iostream>

using namespace std;

int main(){
	
	int totprice,cusCount;
	float discount;
	
	
	for(cusCount=1 ; cusCount<=3 ; cusCount++){
	
		cout<< "Enter your total price customer " << cusCount << " : ";
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
	
		cout<< "Discount Customer " << cusCount <<" = Rs. " << discount <<endl;
		cout<<endl;
	}
	
	return 0;
}