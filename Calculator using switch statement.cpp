#include<iostream>
using namespace std;
int main()
{
   double m,n;
//   cout<<"Enter two number"<<endl;
//   cout<<"m";
   cin>>m;
   char op;
   cin>>op;
//   cout<<"n";
   cin>>n;
   
   switch(op){
   	case '+':
   		cout<<"The sum is: "<<m+n;
   		break;
   	case '-':
   		cout<<"The subtraction is: "<<m-n;
   		break;
   	case '*':
   		cout<<"The multiplication is : "<<m*n;
   	case '/':
   		if (n!=0)
   		{cout<<"The division is: "<<m/n;
		   }
		else{
			cout<<"Infinite";
		}
   	default:
   		break;
   }
}
