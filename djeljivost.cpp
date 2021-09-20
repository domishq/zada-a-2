#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Unesite cijeli broj a,a= ";
	cin>>a;
	if(a%3==0 && a%5==0)
	{
		cout<<"\nBroj a je djeljiv i sa 3 i sa 5\n"<<endl;
	}
	else if(a%3==0 && a%5!=0)
	{
		cout<<"\nBroj a je djeljiv samo sa 3\n"<<endl;
	}
	else if(a%5==0 && a%3!=0)
	{
		cout<<"\nBroj a je djeljiv samo sa 5\n"<<endl;
	}
	else
	cout<<"\nBroj a nije djeljiv ni sa 3,a ni sa 5\n"<<endl;
		
	system("pause");
	return 0;
}
