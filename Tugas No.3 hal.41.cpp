#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int N, j, ik, un;
	j=1;
	cout<<"Masukan Nilai N = ";cin>>N;
	cout<<"Jumlah Bilangan 1 Sampai Dengan N = "<<endl;
	do{
		ik=j+N;
		cout<<ik<<endl;
	}
	while (ik<=j);
	cout<<"Nilai Rata-Rata = "<<endl;
	do{
		un=ik/2;
		cout<<un<<endl;
	}
	while (un<=j);

	return 0;
}
