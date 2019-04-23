#include<iostream.h>
#include<conio.h>

main() {
int bil;
cout<<"<Masukkan Bilangan Yang Akan Di Cek = "; cin>>bil;
if (bil > 0)
  	 cout<< bil <<" Adalah Bilangan Positif";
else if (bil < 0)
   cout<< bil <<" Adalah Bilangan Negatif";
else
	cout <<"Anda Menginputkan Bilangan Nol (0)";
getch();}
