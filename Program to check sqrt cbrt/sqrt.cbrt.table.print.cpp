#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int number;
    int num;
    	cout<<"Enter number to perform following tasks "<<endl;
    	cin>>number;
	cout<<" 1: Calculate the square root of number"<<endl;
	cout<<" 2: Calculate the cube of  number"<<endl;
	cout<<" 3: Print Number 50 times"<<endl;
	cout<<" 4: print Table of that number"<<endl;

	cout<<"Select option "<<endl;
    cin >> num ;
    
    double cube = 0;
    double square = 0 ;
	
	switch(num){

		case 1:
		 square = sqrt(number);
			cout<<" Square root of "<<number<<" = "<<square;
			break;
			
			case 2:
			   cube = cbrt(number);
				cout<<" Cube Root Of "<<number<<" = "<<cube;
				break;
				
				case 3:
					for(int i=0; i<50; i++){
						cout<<number<<" ";
					}
					break;
					case 4:
						for(int i =1; i<=10; i++){
							 cout << number << " x " << i << " = " << i * number << endl;
							break;
						}
				 default:
				 	cout<<"Invalid choice "<<endl;
				 	break;
			
		}
	
	
	return 0;
}
	

				
				
			
			  
			
	
