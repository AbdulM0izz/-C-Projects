#include <iostream>
using namespace std;
int main(){
  
	  int marks;
    cout<<"\nEnter your marks To calulate Grade: "<<endl;
    cout<<"\n Press 5 For exit "<<endl;
do{

 cin>>marks;
 if(marks==5){
 	break;
 }
 
    if (marks >=90 && marks <= 100){
        cout<<"Grade  A: "<<endl;
    }else if( marks >=80 && marks <=89 ){
        cout<<"Grade B: "<<endl;
    }else if(marks >=70 && marks <=79){
        cout<<"Grade C: "<<endl;
    }else if(marks >= 60 && marks <=69 ){
        cout<<" Grade D: "<<endl;
    }else{
    	cout<<"Fail "<<endl;

	}
    
    }while(marks!=5);
    cout<<"Bye......... "<<endl;


    return 0;
}
