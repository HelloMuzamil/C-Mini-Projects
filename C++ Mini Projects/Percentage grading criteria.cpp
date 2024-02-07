#include<iostream>
using namespace std;
int main (){
	float num;
	float total;
	float percentage;
    cout<<"Enter Your Numbers"<<endl;
     cin>>num;
     cout<<"Enter Your Total Numbers"<<endl;
     cin>>total;
     percentage=num/total*100;
     cout<<"Your Percentage Is\t"   <<percentage<<endl;
     
     
     if(percentage>=90  && percentage<=100)
{
	cout<<"Your Grade is A\t";
}
else if (percentage>=80  && percentage<=89)  
{
    cout<<"Your Grade is B\t";	
} 
else if (percentage>=70  && percentage<=79)
{
	cout<<"Your Grade is C\t";
} 
else 
{
    cout<<"You are Fail \t";	
} 
	  return 0;
     }
