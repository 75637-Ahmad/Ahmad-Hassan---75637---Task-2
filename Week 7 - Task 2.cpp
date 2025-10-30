#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter First number: ";
	cin>>a;
	char Operator; 
	cout<<"Enter Operator (+,-,*,/,%): ";
	cin>>Operator;
	int b;
	cout<<"Enter Second number: ";
	cin>>b;
	switch(Operator)
	{
		case '+':
			cout<<"Result:"<<a+b;
			break;
			case '-':
				cout<<"Result: "<<a-b;
				break;
				case '/':
					cout<<"Result: "<<a/b;
					break;
					case '%':
						cout<<"Result: "<<a%b;
						break;
						case '*':
							cout<<"Result: "<<a*b;
							break;
							default:
								cout<<"Error: Invalid operator";
	}
	return 0;
}
