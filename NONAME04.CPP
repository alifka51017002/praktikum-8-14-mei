#include <iostream.h>
#include <conio.h>
main(){
int pil;

menu:
cout<<"menu:";
cout<<"\n[1] tambah";
cout<<"\n[2] kurang";
cout<<"\n[3] kali";
cout<<"\n[4] bagi";
cout<<"\n[5] modulo";
cout<<"\nINput pilihan : ";
cin>>pil;

if(pil==1)
{int a,b,c,jawab;
cout<<"input angka 1 : ";cin>>a;
cout<<"input angka 2 : ";cin>>b;
c=a+b;
cout<<"hasil jumlahnya : "<<c;
cout<<"\nIngin kembali ke menu ?";cin>>jawab;
if (jawab==1)
{clrscr();
goto menu;}
else if (jawab==0)
cout<<"makasih";}
getch();}
