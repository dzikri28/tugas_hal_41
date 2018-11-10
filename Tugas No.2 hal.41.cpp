#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
	int N,jumlah,i;
	i=0;
	jumlah=0;
	cout<<"Masukan Nilai N = ";cin>>N;
	while(i<=N){
		jumlah+=i;
		i++;
	}
cout<<"jumlah bilangan sampai dengan N :"<<jumlah<<endl;
return 0;
}
