#include<iostream>
using namespace std;
int main(){
	float num1,num2,result;
	char op;
	cout<<"Enter your First number"<<endl;
	cin>>num1;
	cout<<"Enter your Second number"<<endl;
	cin>>num2;
	cout<<"Enter your operator(+-*/)"<<endl;
	cin>>op;
	switch (op){
	case '+':
	cout<<num1+num2;
	break;
	case '-':
	cout<<num1-num2;
	break;
	case '*':
	cout<<num1*num2;
	break;
	case '/':
	cout<<num1/num2;
	default:
		cout<<"Eror";
		if ( num2!=0){		
		cout<<"syntax eror";}	} }
