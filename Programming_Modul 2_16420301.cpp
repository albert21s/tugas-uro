#include<iostream>
#include<math.h>
using namespace std;

//Algoritma untuk mencari nilai y dari x tertentu
float A(float x,float y,float z, float a){
    float nil;
    nil = y*x*x + z*x + a ;
    return nil;
}
// Algoritma untuk mencari luas trapesium dari batas - batas yang dipilih
float B(float x, float y, float z){
    float nil;
    nil = (x + y)*z/2;
    return nil;

}
// Fungsi integral dengan metode trapesium
int fungsi2(){
    //kamus
    float a,b,c,d,L,Lt,x1,x2,h1,h2,i,e,f,g;
   cout<<"Grafik fungsi yang akan dihitung : Ax^2 + Bx + C"<<endl;
   cout<<"Tentukan nilai A : "<<endl;
   cin>>e;
   cout<<"Tentukan nilai B : "<<endl;
   cin>>f;
   cout<<"Tentukan nilai C : "<<endl;
   cin>>g;
   cout<<"Tentukan Batas bawah : "<<endl;
   cin>>a;
   cout<<"Tentukan Batas atas : "<<endl;
   cin>>b;
   cout<<"Tentukan Jumlah Partisi : "<<endl;
   cin>>c;
   d = (b-a)/c;
   x1 = a;
   // for loop untuk mencari jumlah luas dari partisi partisi trapesium yang sudah ditentukan
   for (i=0;i<c;i++){
        x2 = x1 + d;
        h1 = A(x1,e,f,g);
        h2 = A(x2,e,f,g);
        L = B(h1,h2,d);
        Lt = Lt + L;
        x1 = x2;


   }
    cout<<"Luas dari grafik "<<e<<"x^2 + "<<f<<"x + "<<g<<" dengan batas bawah  ";
    cout<<a<<" dan batas atas "<<b<<endl;
    cout<<" dengan "<<c<<" partisi adalah " <<Lt<<"satuan luas."<<endl;

}
//Fungsi kalkulator sederhana
int fungsi1(){
    float a,b;
    char opr;
    cout<<"Masukkan angka ke-1 : "<<endl;
    cin>>a;
    cout<<"Masukkan angka ke-2 : "<<endl;
    cin>>b;
    cout<<"Masukkan Operand(+, -, *, /, ^) : "<<endl;
    cin>>opr;
    //beberapa kondisi yang mungkin dipilih pengguna
    if(opr=='+'){
        cout<<"Jawaban : ";
        cout<< a + b;
    }else if(opr=='-'){
        cout<<"Jawaban : ";
        cout<< a - b;
    }else if(opr=='*'){
        cout<<"Jawaban : ";
        cout<< a*b;
    }else if(opr=='/'){
        cout<<"Jawaban : ";
        cout<< a/b;
    }else if(opr=='^'){
        cout<<"Jawaban : ";
        cout<< pow(a,b);
    }else {
        cout<<"Operand Salah";
    }

}
//Fungsi utama
int main (){
    int pilih, derajat ;
    char cek;
    f1 :
    cout<<"1. Kalkulator biasa"<<endl;
    cout<<"2. integral"<<endl;
    cout<<"Pilih fungsi yang ingin digunakan :"<<endl;
    cin>>pilih;
    if (pilih==1){
    fungsi1();
    }else if (pilih==2){
    fungsi2();
    }else{
        cout<<"Input tidak valid"<<endl;
        cout<<"Apakah ingin melanjutkan perhitungan ? Y/N"<<endl;
        cin>>cek;
        if(cek=='Y'){
            goto f1;
        }else{
        cout<<"Terima Kasih"<<endl;
        }
    }
}

