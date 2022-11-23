#include <iostream>

using namespace std;

double konversi (double);
float konversi (float);
int konversi (int);


int main(){
	
	double i;
	float j;
	int k;
	
	cout<<" ==================================="<<endl;
	cout<<" Konversi Suhu Fahrenheit Ke Celcius"<<endl;
	cout<<" ==================================="<<endl;
	cout<<endl;
	
	cout<<" Masukkan Suhu Fahrenheit : ";
	cin>>i;
	
	cout<<" Masukkan Suhu Fahrenheit : ";
	cin>>j;
	
	cout<<" Masukkan Suhu Fahrenheit : ";
	cin>>k;
	
	cout<<endl;
	
	cout<<" Hasil Konversi Tipe Data Double "<< konversi(i) <<" derajat celcius "<<endl;
	cout<<" Hasil Konversi Tipe Data Float "<< konversi(j) <<" derajat celcius "<<endl;
	cout<<" Hasil Konversi Tipe Data Integer "<< konversi(k) <<" derajat celcius "<<endl;
	
}


double konversi (double i){
	return ((i - 32.0) * 0.55555556);
}

float konversi (float j){
	return ((j - 32.0) * 0.55555556);
}

int konversi (int k){
	return ((k - 32.0) * 0.55555556);
}


