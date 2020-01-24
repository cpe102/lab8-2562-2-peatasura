#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    	float initial ,interest, prevba,total,pay,newba,real;
    	int end=1;
	cout << "Enter initial loan: ";
	cin >> initial;
	newba=initial;
	cout << "Enter interest rate per year (%): ";
	cin >> interest ;
	cout << "Enter amout you can pay per year: ";
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
	while (newba!=0)
	{
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << end;
	    cout << setw(13) << left << initial;
	    real=(interest/100*initial);
	    cout << setw(13) << left << real;
	    total = initial + real;
	    cout << setw(13) << left << total;
	    
	    if (pay>total)
	    {
	        pay = total;
	        cout << setw(13) << left << pay;
        }
        else
        {
              cout << setw(13) << left << pay;
        }
        newba= total-pay;
        cout << setw(13) << left << newba;
        initial=newba;
        end++;
        cout << "\n";
    }
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/

	
	return 0;
}
