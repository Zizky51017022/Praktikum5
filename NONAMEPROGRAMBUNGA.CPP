#include<iostream.h>
#include<conio.h>

void main()
{
char kode;
char nama[30], *bunga;
double harga, bayar;
int jumlah;
harga = 0;
clrscr();
cout <<"     ZIZKY FLORIST     \n";
cout<<"Custumor   : "; cin>>nama;
cout<<"Masukkan Kode Bunga      : "; cin>>kode;
cout<<"Masukkan Jumlah Bunga    : "; cin>>jumlah;
clrscr();
if ((kode=='a')||(kode=='A')){
   bunga = "MAWAR";
	harga = 100000;}
else if ((kode=='b')||(kode=='B')){
   bunga = "MELATI";
	harga = 200000;}
else if ((kode=='c')||(kode=='C')){
   bunga = "ANGGREK";
	harga = 300000;}
else if ((kode=='d')||(kode=='D')){
   bunga = "NUSA INDAH";
	harga = 400000;}
else {
	cout<<"Tidak Ada Kode Yang Sesuai";
   }
cout<<"      STRUK PEMBYARAN     \n";
 cout<<"-------------------------\n";
 cout<<"Nama Pembeli       :"<<nama<<"\n";
 cout<<"Jenis Bunga        :"<<bunga<<"\n";
 cout<<"Harga Persatuan    :"<<harga<<"\n";
 cout<<"Jumlah Beli        :"<<jumlah<<"\n";
 cout<<"--------------------------------------\n";
 cout<<"\t Total Harga     : Rp. "<<harga * jumlah<<"\n";
 cout<<"\t Uang Bayar      : Rp. "; cin>>bayar;
 cout<<"\t Uang Kembalian  : Rp. "<<(bayar - (harga *jumlah))<<"\n\n";
 cout<<"~~~~~~~~~~~~~~TERIMA KASIH~~~~~~~~~~~~~~~~~~";
 cout<<"\n~~~~~~~~SELAMAT DATANG KEMBALI~~~~~~~~~~~~";
 getch();
 }

