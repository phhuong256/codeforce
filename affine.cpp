#include <iostream>  // Mat ma afine
using namespace std; 
int Kt_So(char g){	
	return  g -'A';	
}

char So_Kt(int n){
	return 'A' + n;
}

int main()
{
	string P, C;
	int a,b,c = 0, e, d; 
	cout<<"Nhap chuoi: ";
	cin>>P;
	C = P;
	cout<<"Nhap so a: ";cin>> a;	
	while(a<1 || a>25 || a %2 ==0 || a==13)
		{
			cout<<"Nhap so a: ";
			cin>> a;	
		}
	cout<<"Nhap so b: ";cin>> b;
	int a1;
	
	while(d != 1){
		c = c+1;
		e = a*c;
		d = e % 26;
	}
	for(int i=0; i<P.length(); i++)
	{	
		int m;
		m = Kt_So(P[i]);
		m = ((a*m) + b) % 26;
		C[i] = So_Kt(m);

	}
	cout<<"chuoi moi la: "<<C<<endl;
	
	for(int i=0; i<C.length(); i++)
	{	
		int m;
		m = Kt_So(C[i]);
		m = (c*(m-b+26)) % 26;
		P[i] = So_Kt(m);
	}
		cout<<"chuoi ban dau la: "<<P<<endl;
}	

	
	






