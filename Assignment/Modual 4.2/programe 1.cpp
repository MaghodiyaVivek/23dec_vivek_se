# include <iostream>
using namespace std;
class vivek
{
	int d;
public :
	int add(int a, int b)
	{
		d=a+b;
		return d;
	}	
	int sub(int a, int b)
	{
		d=a-b;
		return d;
	}
	int mul(int a, int b)
	{
		d=a*b;
		return d;
	}
	int div(int a, int b)
	{
		d=a/b;
		return d;
	}	
}vivek;
int main() 
{
  	int op;
  	int num1, num2;
  	cout<< "Enter two operands: ";
  	cin >> num1 >> num2;
  	cout<<"\n1.Addition\n2.subtraction\n3.multiplication\n4.divition\n";
	cout<<"\nEnter Your Choice :";
	cin>>op;
  	switch(op) 
	{

    	case 1:
      		cout << "\nAddition is : "<<vivek.add(num1,num2); 
      		break;

    	case 2:
      		cout << "\nsubtraction is : "<<vivek.sub(num1,num2); 
      		break;

    	case 3:
      		cout << "\nmultiplication is : "<<vivek.mul(num1,num2); 
      		break;
    	case 4:
      		cout << "divition is : "<<vivek.div(num1,num2); 
      		break;

    	default:
      		cout << "Enter a valid Choice";
      		break;
  	}
  	return 0;
}
