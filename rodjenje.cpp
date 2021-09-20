#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Unesite godinu vaseg rodjenja(npr. 2006)"<<endl;
	cin>>a;
	
	if(a>=1900 && a<=2021)
	{
		cout<<"Unesite mjesec vaseg rodjenja(1-12)"<<endl;
		cin>>b;
	c=(((2021-a)*12)+b)/12;
	d=9-(((a*12)+b)%12);
		if(a==2021 && b>9)
		{
			cout<<"\nUnesite validnu godinu i mjesec rodjenja!\n"<<endl;
		}
		else if(b>0 && b<13)
	{
			if(d>=0)
		{
				cout<<"\nImate "<<c<<"godina/e i "<<d<<"mjeseci/a\n"<<endl;	
		}
		else
		{
			c--;
			d=12+d;
			cout<<"\nImate "<<c<<"godina/e i "<<d<<"mjeseci/a\n"<<endl;	
		}
	}
	else if(b<0 || b>13)
	{
	cout<<"\nUnesite validan mjesec rodjenja-neki broj od 1 do 12!\n"<<endl;
	}
	}
	else
	{
		cout<<"\nUnesite validnu godinu rodjenja!(1900-2021)\n"<<endl;
	}
	system("pause");
	return 0;
}
