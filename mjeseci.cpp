// proljeæe (21. mart -21. juni); ljeto (21. juni -23. septembar);  jesen (23. septembar -21. decembar); zima (21. decembar -21. mart)
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Unesite broj nekog mjeseca, a program ce ispisati\nkojem godisnjem dobu taj mjesec pripada!(1-12)\n"<<endl;
	cin>>a;
	if(a>=1 && a<=12)
	{
		if(a==4 || a==5)
		{
			cout<<"\nGodisnje doba kojem mjesec pripada je proljece\n"<<endl;		
		}
		if(a==7 || a==8)
		{
			cout<<"\nGodisnje doba kojem mjesec pripada je ljeto\n"<<endl;		
		}
		if(a==10 || a==11)
		{
			cout<<"\nGodisnje doba kojem mjesec pripada je jesen\n"<<endl;
		}
		if(a==1 || a==2)
		{
			cout<<"\nGodisnje doba kojem mjesec pripada je zima\n"<<endl;
		}
		if(a==3)
		{
			cout<<"\n21. marta zavrsava zima i zapocinje proljece\n"<<endl;		
		}
		if(a==6)
		{
			cout<<"\n21. juna zavrsava proljece i zapocinje ljeto\n"<<endl;		
		}
		if(a==9)
		{
			cout<<"\n23. septembra zavrsava ljeto i zapocinje jesen\n"<<endl;		
		}
		if(a==12)
		{
			cout<<"\n21. decembra zavrsava jesen i zapocinje zima\n"<<endl;		
		}		
	}
	else
	{
		cout<<"\nUnesite validan broj mjeseca, tj. neki broj od 1 do 12!\n"<<endl;
	}
	system("pause");
	return 0;
}
