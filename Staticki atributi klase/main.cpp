#include <iostream>
#include<string.h>
#include<math.h>

// STATICKI PODACI (ATRIBUTI) KLASE

// using namespace std;

// class Poklon {
//     public:
//         static int posId;
//     private:
//         int id;
//         float cena;
//     public: 
//         Poklon(float c) {
//             cena = c;
//             // Svaki put kad kreiramo novi objekat uvećavamo posId
//             // posId predstavlja broj trenutno stvorenih objekata
//             id = ++posId;

//         }

//         // kopi konstruktor takode uvecava broj stvorenih objekata posId
//         Poklon(const Poklon& p) {

//             cena = p.cena;
//             id = ++posId;

//         }

//         void ispis() {
//             cout<<id<<"("<<cena<<")";
//         }
// };

// int Poklon::posId = 0;

// int main() {
//     Poklon p1(500), p2(1500);

//     p1.ispis();
//     p2.ispis();
//     Poklon p3 = p1;
//     p3.ispis();
//     cout<<"Trenutno je stvoreno "<<Poklon::posId<<" objekata klase Poklon"<<endl;
//     return 0;

// }
