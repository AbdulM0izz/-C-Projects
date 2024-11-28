#include <iostream>
using namespace std;
int main(){
    
       int num;
       int totalEven =0;
       int totalOdd =0;
        
        while(true){
		
        cout<<"Enter Num (0 to stop)"<<endl;
        cin>>num;
        
        if(num == 0){
        	break;
		}
		if(num % 2 == 0){
			cout<<"\nEven";
			totalEven++;
		}else{
			cout<<"\nOdd";
			totalOdd++;
		}
		cout<<" Total Even "<<totalEven<<endl;
			cout<<" Total Odd "<<totalEven<<endl;
		}
        
	return 0;
}

