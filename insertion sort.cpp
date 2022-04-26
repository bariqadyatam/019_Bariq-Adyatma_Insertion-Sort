//program insertion sort

#include <iostream>
#include<conio.h>
using namespace std;

int main(){
	//jumlah array yang akan digunakan
	int y;
	//memasukkan array
	cout<<"Masukkan berapa jumlah array yang di inginkan : "; cin>>y;
	//mendeklarasikan array
	int array[y];
	
	//input indeks array yang di inginkan
	for(int i=0;i<y;i++){
		cout<<"Masukkan indeks array ke "<<i<<" : "; cin>>array[i];
	}
	cout<<endl;
	
	//proses insertion sort nya
	cout<<"proses sortingnya"<<endl;
	for(int i=1; i<y; i++){
		int key= array[i];
		int j = i-1;
		while(j>=0 && array[j]>key){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
		for(int m=0;m<y;m++){
			cout<<array[m]<<" ";
		}
		cout<<endl;
	}
	
	//memunculkan hasil urutan
	cout<<"hasil akhir"<<endl;
	for(int m=0;m<y;m++){
		cout<<array[m]<<" ";
	}
	getch();
	return 0;
}
