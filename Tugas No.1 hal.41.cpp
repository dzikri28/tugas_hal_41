#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
	int D;
	D=125;
	cout<<"Bilangan Kelipatan 5 Antara 125 Sampai Dengan 200 = "<<endl;
	do{
		cout<<D<<endl;
		D+=5;
	}
	while (D<=200);
	
	return 0;
}
