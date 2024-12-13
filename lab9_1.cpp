#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    
    double loan, rate, pay;
    
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
    	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for(int i=1;loan>0;i++){
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i;              //EndOfYear#
	    cout << setw(13) << left << loan;           //PrevBalance
	    cout << setw(13) << left << loan*rate/100;  //Interest
	    loan = loan + loan*rate/100;                //Total
	    cout << setw(13) << left << loan;
	    if(pay > loan){                             //Payment
	        cout << setw(13) << left << loan;
	        loan = 0;                               //Set NewBalance
	    } else{
	        cout << setw(13) << left << pay;
	        loan = loan - pay;                      //Set NewBalance
	    }
	    cout << setw(13) << left << loan;           //NewBalance
	    cout << "\n";
	}
	
	return 0;
}
