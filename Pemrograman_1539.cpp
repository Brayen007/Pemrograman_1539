#include <iostream>
#include <windows.h>
using namespace std;

class Bangun_Datar{
protected :
    float panjang,lebar;
public :
    void set_values (float p, float l){
    panjang=p;
    lebar=l;
    }
    void set_values(float p){
    panjang=p;
    }
};

class Segitiga: public Bangun_Datar{
public :
    float luas(){
    return (panjang*lebar)/2;
    }
    float kel(){
    return panjang+panjang+panjang;
    }
};

class Lingkaran: public Bangun_Datar{
public :
    float luas(){
    return 3.14*(panjang*panjang);
    }
    float kel(){
    return (2*22)*(panjang/7);
    }
};

class Persegi: public Bangun_Datar{
public :
    float luas(){
    return panjang*panjang;
    }
    float kel(){
    return 4*panjang;
    }
};

class Persegi_Panjang: public Bangun_Datar{
public :
    float luas(){
    return panjang*lebar;
    }
    float kel(){
    return 2*(panjang+lebar);
    }
};

void kpl(){
    cout<<"======================================="<<endl;
	cout<<"|== Program Menghitung Bangun Luas  ==|"<<endl;
	cout<<"======================================="<<endl;
}

int main(){
float a,b;
int pilih;
char plh;
Segitiga segitiga;
Lingkaran lingkaran;
Persegi persegi;
Persegi_Panjang panjang;
menu :
kpl();
cout<<"Hitung Bangun :"<<endl;
cout<<"1. Segitiga"<<endl;
cout<<"2. Lingkaran"<<endl;
cout<<"3. Persegi"<<endl;
cout<<"4. Persegi Panjang"<<endl;
cout<<"0. Keluar"<<endl;
cout<<"Masukkan Pilihan :";
cin>>pilih;

switch(pilih){
case 1 :
    hitung1 :
    system("cls");
    kpl();
    cout<<"Masukkan Alas :";
    cin>>a;
    cout<<"Masukkan Tinggi :";
    cin>>b;
    segitiga.set_values(a,b);
    cout<<"Luas :"<<segitiga.luas()<<" cm^2";
    cout<<"\nKeliling :"<<segitiga.kel()<<" cm";
    cout<<endl;
    jawaban1 :
    cout<<"Hitung Kembali (y/n) ? ";
    cin>>plh;
    if(plh=='y' || plh=='Y'){
        goto hitung1;
    }else if(plh=='n' || plh=='N'){
        system("cls");
        goto menu;
    }else{
        cout<<"Masukkan Anda Salah\n";
        goto jawaban1;
        break;
		}

case 2 :
    hitung2 :
    system("cls");
    kpl();
    cout<<"Masukkan Jari-Jari :";
    cin>>a;
    lingkaran.set_values(a);
    cout<<"Luas :"<<lingkaran.luas()<<" cm^2";
    cout<<"\nKeliling :"<<lingkaran.kel()<<" cm";
    cout<<endl;
    jawaban2 :
    cout<<"Hitung Kembali (y/n) ? ";
    cin>>plh;
    if(plh=='y' || plh=='Y'){
        goto hitung2;
    }else if(plh=='n' || plh=='N'){
        system("cls");
        goto menu;
    }else{
        cout<<"Masukkan Anda Salah\n";
        goto jawaban2;
        break;
    }

case 3 :
    hitung3 :
    system("cls");
    kpl();
    cout<<"Masukkan Panjang :";
    cin>>a;
    cout<<"Masukkan Lebar :";
    cin>>b;
    persegi.set_values(a,b);
    cout<<"Luas :"<<persegi.luas()<<" cm^2";
    cout<<"\nKeliling :"<<persegi.kel()<<" cm";
    cout<<endl;
    jawaban3 :
    cout<<"Hitung Kembali (y/n) ? ";
    cin>>plh;
    if(plh=='y' || plh=='Y'){
        goto hitung3;
    }else if(plh=='n' || plh=='N'){
        system("cls");
        goto menu;
    }else{
        cout<<"Masukkan Anda Salah";
        goto jawaban3;
        break;
    }

case 4 :
    hitung4 :
    system("cls");
    kpl();
    cout<<"Masukkan Panjang :";
    cin>>a;
    cout<<"Masukkan Lebar :";
    cin>>b;
    panjang.set_values(a,b);
    cout<<"Luas :"<<panjang.luas()<<" cm^2";
    cout<<"\nKeliling :"<<panjang.kel()<<" cm";
    cout<<endl;
    jawaban4 :
    cout<<"Hitung Kembali (y/n) ? ";
    cin>>plh;
    if(plh=='y' || plh=='Y'){
        goto hitung4;
    }else if(plh=='n' || plh=='N'){
        system("cls");
        goto menu;
    }else{
        cout<<"Masukkan Anda Salah\n";
        goto jawaban4;
        break;
    }

case 0:
    cout<<"======================================="<<endl;
    cout<<"\t   TERIMA KASIH"<<endl;
    cout<<"======================================="<<endl;
}
return 0;
}
