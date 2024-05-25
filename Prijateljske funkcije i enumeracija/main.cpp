#include <iostream>
#include<string.h>
#include<math.h>

// PRIJATELJSKE FUNKCIJE

// class X {
//     friend void g (int, X&); // prijateljska globalna funkcija
//     friend void Y::h(); // prijateljska clanica h druge klase Y
//     int i;

//     public:
//         void f(int ip) {
//             i = ip;
//         }

// };
// void g(int k, X &x) {
//     x.i = k;
//     // prijateljska funkcija moze da pristupa privatnim clanovima klase
// }

// void main() {
//     X x;
//     x.f(5); // postavljanje preko clanice
//     g(6, x); // postavljanje preko prijatelja
// }

//.........................................

// class MojaKlasa {
//     private:
//         int data;
//     public:
//         MojaKlasa(): data(0) {};
//         friend void displayData(const MojaKlasa&); 
// };

// void displayData(const MojaKlasa& obj) {
//     std::cout<<"Data: "<<obj.data<<std::endl;
// }

// int main() {
//     MojaKlasa obj;

//     displayData(obj);
// }

// ...................................................

// // ENUMERACIJA

// using namespace std;

// enum Zanr {POP, REP, ROK};
    
// class Izvodac {
//     string naziv;
//     Zanr zanr;
//     //static string str_zanr[];

//     string nadiZanr(Zanr zanr) {
//         switch(zanr) {
//             case 0:
//                 return "POP";
//                 break;
//             case 1:
//                 return "REP";
//                 break;
//             case 2:
//                 return "ROK";
//                 break;
//             default: 
//                 return "GRESKA";
//                 break;
//         } 
//     };

//     public:
//         Izvodac(string naz, Zanr z):
//         naziv(naz), zanr(z){}
//         Izvodac() {
//             naziv = "Micko",
//             zanr = POP;
//         }
//         Zanr getZanr() const {
//             return zanr;
//         }
//         void pisi();
// };

// void Izvodac::pisi() {
//     cout<<naziv<<"("<<nadiZanr(zanr)<<")"<<endl;
// }

// // string Izvodjac::str_zanr[]
// // = { "pop", "rep", "rok" };

// //  void Izvodjac::pisi() {
// // cout << naziv << "(" << str_zanr[zanr] << ")" << endl;
// // }


// class Pesma {
//     int min, sek;
//     string naziv;
//     Izvodac *izv; 
//     int br, kap;

//     public:
//         Pesma(int m, int s, string naz, int k): 
//         min(m), sek(s), naziv(naz) {
//             kap = k;
//             izv = new Izvodac[kap];
//             br = 0;
//         }
//         ~Pesma() {
//             delete [] izv;
//         }

//         void dodaj(Izvodac *i) {
//             if(br < kap) izv[br++] = *i;
//         }

//         int dohvSek() const {
//             return sek;
//         }

//         int dohvMin() const {
//             return min;
//         }

//         void pisi() const;

//         friend bool duze(const Pesma & p1, const Pesma &p2) {
//             if(p1.min > p2.min || p1.min == p2.min && p1.sek > p2.sek) return true;
//             else return false;
//         }
// };

// void Pesma::pisi() const {
//     cout<<"P("<<naziv<<"-"<<min<<":"<<sek<<")"<<endl;
//     cout<<"Izvodaci: ";
//     for(int i = 0; i < br; i++) {
//         izv[i].pisi();
//     }
// }

//     int main() {
//         Izvodac iz1("Micko", POP), iz2("Uki", ROK), iz3("Jocke", REP);
//         Pesma p1(2, 55, "Pesma", 2), p2(3, 23, "Pesma2", 1), p3(2, 49, "Pesma3", 1);
        
//         iz1.pisi();
//         iz2.pisi();
//         iz3.pisi();

//         return 0;
// }
