#include<iostream.h>
#include<conio.h>

void main()
{
char hari;
cout<<"MASUKKAN KODE PROGRAM HARI (A - G):";cin>>hari;
if (hari=='a'||hari=='A')
 {cout <<"SENIN";}
else if (hari=='b'||hari=='B')
	{cout <<"SELASA";}
else if (hari=='c'||hari=='C')
	{cout <<"RABU";}
else if (hari=='d'||hari=='D')
	 {cout <<"KAMIS";}
else if (hari=='e'||hari=='E')
	 {cout <<"JUMAT";}
else if (hari=='f'||hari=='F')
 {cout <<"SABTU";}
else if (hari=='g'||hari=='G')
{cout <<"MINGGU";}
else
cout<<"MAAF KODE HARI YANG ANDA MASUKKAN SALAH";
getch();}
