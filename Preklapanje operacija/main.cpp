#include <iostream>
#include<string.h>
#include<math.h>

// PREKLAPANJE OPERACIJA

// using namespace std;

// class Vektor {
//     int v[3];
//     public:
//         Vektor(const int a[]) {
//             for(int i = 0; i < 3; i++ ) v[i] = a[i];
//         }

//         int getX() {
//             return v[0];
//         }

//         int getY() {
//             return v[1];
//         }

//         int getZ() {
//             return v[2];
//         }

//         void setX(int a) {
//             v[0] = a;
//         }

//         void setY (int a ) {
//             v[1] = a;
//         }

//         void setZ(int b) {
//             v[2] = b;
//         }

//         void ispis() {
//             cout<<"v(";

//             for(int i = 0; i < 3; i++) {
//                 cout<<v[i]<<", ";
//             }

//             cout<<")"<<endl;
//         }

//         Vektor dodaj(Vektor v);
//         // v3 = v1.dodaj(v2);

//         Vektor operator + (Vektor v);
//         //preklopanje operatora +, poziv: v3=v1+v2;

//         Vektor pomnozi(int k);
//         // v3 = v1.pomnozi(5);

//         Vektor operator *(int k);
//         // preklopljeni operaor *. poziv: v3 = v1 * 5;

//         const Vektor& operator = (const Vektor& v);
//         // preklopljeni operator =

//         Vektor operator ++();
//         // prefiksni, poziv: v1++
//         Vektor operator ++(int);
//         // postfiksni poziv ++v1

//         Vektor operator -();
//         // preklopljeni operator -. poziv: v3 = -v1;

//         int & operator [] (int i);
//         /*preklopljeno indeksiranje npr da smo hteli da pristupimo elementu X u vektoru v1 pisali bismo v1.getX(); umesto toga sa ovim operatorom mozemo koristiti v1[0], gde je v1 objekat klase vektor. */

// };

// Vektor Vektor::operator +(Vektor v1) {
//     Vektor v2 = *this;
//     for(int i = 0; i < 3; i++) v2.v[i] += v1.v[i];
//     return v2;
// }

// Vektor Vektor::operator* (int k) {
//     Vektor v2 = *this;

//     for(int i = 0; i < 3; i++) v2.v[i] *= k;

//     return v2;
// }

// const Vektor& Vektor::operator = (const Vektor & v1) {

//     if(&v1 == this) return *this;

//     for(int i = 0; i < 3; i++) v[i] = v1.v[i];

//     return *this;

// }

// Vektor Vektor::operator ++(int) {
//     for(int i = 0; i < 3; i++) v[i]++;
//     return *this;
// }

// Vektor Vektor::operator ++() {
//     for(int i = 0; i < 3; i++ ) v[i]++;
//     return *this;
// }

// Vektor Vektor::operator -() {
//     Vektor t = *this;

//     for(int i = 0; i < 3; i++) t.v[i]*=-1;

//     return t;
// }

// int & Vektor::operator[](int i) {
//     return v[i];
// }

// int main() {
//     int a[] = {1, 2, 3};

//     Vektor v(a);
//     v.ispis();
//     Vektor zbir = v + v;
//     zbir.ispis();

//     (v * 2).ispis();
    
//     v = v = zbir;

//     zbir.ispis();

//     (zbir++).ispis();
//     (-v).ispis();
//     cout<<v[2];

//     return 0;

// }

//...........................................................

// using namespace std;

// class Razlomak {
//     int broj, imen;

//     public: 
//         Razlomak (int a, int b) : broj(a), imen(b) {};
        
//         int getBroj() {
//             return broj;    
//         }

//         int getImen() {
//             return imen;
//         }

//         void setBroj(int a) {
//             broj = a;
//         }

//         void setImen(int b) {
//             imen = b;
//         }

//         void ispis() {
//             cout<<broj<<"/"<<imen<<"\n";
//         }
        
//         friend Razlomak operator +(Razlomak v1,Razlomak v2);
        
//         Razlomak operator *(int k);
        
//         const Razlomak& operator=(const Razlomak& v);
        
//         friend Razlomak operator ++(Razlomak r);//prefiksni
//         Razlomak operator ++(int);//postfiksni
//         Razlomak operator -();
// 	    Razlomak operator <<(ostream &out);
// 	    friend ostream & operator <<(ostream &out,Razlomak r);
// 	    friend istream & operator >>(istream &in,Razlomak &r);

// };

// Razlomak operator +(Razlomak v1,Razlomak v2){
//     Razlomak v(v1.broj*v2.imen+v1.imen*v2.broj,v1.imen*v2.imen);
// 	return v;
// }

// Razlomak Razlomak::operator *(int k){
//     Razlomak v2(broj*k,imen);
// 	return v2;
// }

// const Razlomak& Razlomak::operator=(const Razlomak& v){
//   if( &v==this) return *this;
//   broj=v.broj;
//   imen=v.imen;
//   return *this;
// }
  
// Razlomak Razlomak::operator ++(int){
//     broj++;
// 	return *this;
// }

// Razlomak operator ++(Razlomak r){
//     r.broj++;
// 	return r;
// }

// Razlomak Razlomak::operator -(){
// Razlomak t=*this ;	    
// t.broj*=-1;
// return t;
// }
	
// ostream& operator <<(ostream &out,Razlomak r){
// out<<r.imen<<"/"<<r.broj;
//   return out;
// }

// istream & operator >>(istream &in,Razlomak& r){
//  cout<<"Unesite razlomak";
//  in>>r.imen>>r.broj;
//  return in;
// }

// Razlomak Razlomak::operator <<(ostream &out){
//   out<<imen<<"/"<<broj;
//   return *this;
// }

// int main(){
//   Razlomak v(1,2);  
//   v.ispis();
//   Razlomak zbir = v+v;
//   zbir.ispis();

//   (v*2).ispis();
//   v=v=zbir;  
//   zbir.ispis();  
//   (zbir++).ispis();  
//   (-v).ispis();
//   cout<<v;
//   cin>>v;
//   v<<cout;
//   return 0;
// }
