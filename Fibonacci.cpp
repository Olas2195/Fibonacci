#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

class zadanie67 {
	ofstream wyniki;
	
	public:
		zadanie67();
		~zadanie67();
		void zadanie67_1();
		void zadanie67_2();
		bool pierwsze(int);
};

zadanie67::zadanie67() {
	wyniki.open("wyniki.txt");	
}

void zadanie67::zadanie67_1() {
	int A=1;
	int B=1;
	int C;
	int index=2;
	
	cout<<"Zadanie 1:\n";
	wyniki<<"Zadanie 1:\n";
	for(int i=10; i<50; i+=10) {
		do{
			C = A+B;
			A = B;
			B = C;
			index += 1;	
		}while(index!=i);
		cout<<"F"<<index<<"= "<<C<<"\n";
		wyniki<<"F"<<index<<"= "<<C<<"\n";	
	}			
}

void zadanie67::zadanie67_2() {
	int A=1;
	int B=1;
	int C;
	int index=2;
	
	cout<<"\nZadanie 2:\n";	
	wyniki<<"\nZadanie 2:\n";	
	for(int i=3; i<=40; i++) {
		C = A+B;
		A = B;
		B = C;
		index += 1;	
		if(this->pierwsze(C)) {
			cout<<"F"<<index<<"= "<<C<<"\n";
			wyniki<<"F"<<index<<"= "<<C<<"\n";	
		}	
	}	
		
}

bool zadanie67::pierwsze(int liczba) {
	for(int i=2; i*i<=liczba; i++)
		if(liczba % i==0)
			return false;
	return true;	
}

zadanie67::~zadanie67() {
	wyniki.close();
}

int main(int argc, char** argv) {
	zadanie67 z;
	z.zadanie67_1();
	z.zadanie67_2();
	
	return 0;
}
