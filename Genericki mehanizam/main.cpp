#include <iostream>
#include<string.h>

using namespace std;

// template < class T>

// void razmeni(T &a,T &b){
// 	T temp;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }

// main(){
//     int a,b;
//     char c1,c2;
//     cout<<"Unesite brojeve";
// 	cin>>a>>b;
//     cout<<"Unesite karaktere";
// 	cin>>c1>>c2;

//     razmeni(a,b); 
// 	razmeni(c1,c2);
// 	cout<<"a="<<a<<" b="<<b<<endl;
// 	cout<<"c1="<<c1<<" c2="<<c2<<endl;

// }

//..................................................

// template <class T>

// void unos( T * x, int n) {
// 	cout<<"Unesite elemente niza";
// 	for(int i = 0 ; i < n; i++) cin>>x[i];
// }

// template <class T1>

// void ispis(T1 * x,int n) {
// 	cout<<"Clanovi niza su"<<endl;
// 	for(int i = 0; i < n; i++) cout<<x[i]<<"  ";
// }

// template< class T2>

// double sr_vr (T2*a, int n) {
// 	 T2 zbir = 0;
// 	 double sr;
// 	 for(int i = 0; i< n; i++) zbir += *(a+i);
//      sr = double(zbir) / n;
// 	 return sr;
// }

// int main() {

//     int n, m , i;
//     int a[20];
//     double b[20];
//     double sr1, sr2;
//     cout<<"Unesite broj clanova prvog niza"<<endl;
//     cin>>n;
//     cout<<"Unesite elemente prvog niza\n";
//     unos(a, n);
//     cout<<"Unesite broj clanova drugog niza"<<endl;
//     cin>> m;
//     cout<<"Unesite elemente drugog niza\n";
//     unos(a, n);
//     sr1=sr_vr(a, n);
//     sr2=sr_vr(b, m);
//     cout<<"Srednja vrednost elemenata prvog niza je  "<<sr1<<endl;
//     cout<<"Srednja vrednost elemenata drugog niza je  "<<sr2<<endl;
//     cout<<"Elementi prvog niza su:"<<endl;
//     ispis(a,n);
//     cout<<"Elementi drugog niza su:"<<endl;
//     ispis(a,n);

// }

//...................................................

// template <class T, int k>

// class Vekt {
//     int duz;
//     T niz[k];

//     public:
//         Vekt();
//         T& operator[](int i) const {
//             return niz[i];
//         };
// };

// //U definiciji metode generičke klase, uz ime klase u operaciji ::mora da stoje i argumenti
// template <class T, int k> Vekt <T, k>::Vekt() {
//     duz = k;
//     for(int i = 0; i < k; niz[i++] = T());
// }

// Vekt<int, 10>niz1; // vektor čiji su elementi celi brojevi  
// Vekt<double, 20>niz2; // vektor čiji su elementi realni brojevi 
// class A{int i;};
// Vekt<A,5>a; //vektor čiji su elementi objekti klase A

//....................................................

// class A {
//     double x;
    
//     public:
//         template <typename T> A(const T& t) :x(t) {};
//         template <typename T> void m(const T & t);
// };

// template <typename T> void A::m(const T&t) {
//     x = t;
// }

// void f1() {
//     A a1(5);
//     A a2(1.2); 
//     A a3('q');
//     a1.template m<int>(1.2); 
//     a1.template m<char>(3.4); 
//     a1.m(3.4);
// }

// template <typename T> 
// class B   {
//     T t;
//     public:
//     template<typename U> void m(const U& u);
// };

// template <typename T> template<typename U> void B<T>::m(const U& u){
//     t=u;
// };

// void f2(){  
//     B<int> b1;  
//     B<float> b2;
//     b1.m(55);
//     b2.m(55);
//     b2.template m<char>(55);
// };

//...........................................

