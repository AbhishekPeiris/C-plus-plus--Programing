#include <iostream>

using namespace std;

int main(){
	
	int totprice,cusCount=1;
	float discount;
	
	cout<< "Enter your total price customer " << cusCount << " : ";
	cin>> totprice;
	
	while(totprice != -1){
	
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
		
		cusCount++;
		
		cout<< "Enter your total price customer " << cusCount << " : ";
		cin>> totprice;
	}
	
	return 0;
}