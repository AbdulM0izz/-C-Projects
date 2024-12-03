#include <iostream>
using namespace std;
int main(){
	cout << " 1. Tea 2$ "<<endl;
	cout << " 2. Coffee 3$ "<<endl;
	cout << " 3. Sandwish 5$ "<<endl;
	cout << " 4. Burger 7$ "<<endl;
	cout << " 5. EXIT "<<endl;
	int tbill = 0;
	int choice;
	do{
		cin >> choice;
		switch ( choice ){
			case 1:
				cout<<" Tea Added In Bill  "<<endl;
				tbill += 2;
				break;
				
				case 2:
				cout<<" Coffee Added In Bill  "<<endl;
				tbill += 3;
				break;
				
				case 3:
				cout<<" Sandwish Added In Bill  "<<endl;
				tbill += 5;
				break;
				
				case 4:
				cout<<" Burger Added In Bill  "<<endl;
				tbill += 7;
				break;
				
		}
	}while (choice != 5);
	cout << " Total Bill = " << tbill << "$" << endl;
	
	
	
	
	return 0;
}
