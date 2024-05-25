#include <iostream>

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

