#include<iostream>
using namespace std;
char printO(int x, int y)
{
	if (x > 0 && y > 0)
	{	
		int u=0;
		do 
		{
			for (int i =0 ; i<y; i++)
			{
				/*for (int j = 0 ; j<=i; j++)
				{
					cout << "o";
				}*/
				cout << "o";
					
			}
				cout << "\n";
				u++;
		
			
		}
		while (u<x);
		
	
	}
	else
		{
		    cout << "Invalid Input\n";
        }
}
//Write the function printO() here

int main(){
	
	printO(3,3);
	cout << "\n";
	
	printO(5,7);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
