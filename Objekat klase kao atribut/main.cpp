#include <iostream>
#include<string.h>
#include<math.h>

// OBJEKAT KLASE KAO PODATAK (ATRIBUT)

// class Tacka {
//     int x, y;
//     public:
//         Tacka() {
//             x = 1;
//             y = 1;
//         }
// };

// class Duz {
//     Tacka pocetak, kraj;

//     public:
//         Duz() : pocetak(), kraj() {}
// }

//...............................................

// using namespace std;

// class Prava {
//     private:
//         int x1, y1, x2, y2;
//         float d;

//     public:
//         Prava() {
//             x1 = 0;
//             y1 = 0;
//             x2 = 10;
//             y2 = 10;
//         }

//         Prava(int x1, int y1, int x2, int y2) {
//             this -> x1 = x1;
//             this -> y1 = y1;
//             this -> x2 = x2;
//             this -> y2 = y2;
//         }

//         void setX1 (int a) {
//             x1 = a;
//         }
//         void setY1 (int a) {
//             y1 = a;
//         }
//         void setX2 (int a) {
//             x2 = a;
//         }
//         void setY2 (int a) {
//             y2 = a;
//         }

//         int getX1() {
//             return x1;
//         }

//         int getY1 () {
//             return y1;
//         }

//         int getX2() {
//             return x2;
//         }

//         int getY2() {
//             return y2;
//         }

//         float racunajDuzinu() {
//             d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//             return d;
//         }

//         void ipis() {
//             cout<<"Prava: ("<<x1<<","<<y1<<") - ("<<x2<<","<<y2<<")"<<endl;
//         }

// };

// class Kvadrat {
//     private:
//         Prava vrh, dno;
//     public:
//         Kvadrat() {
//             vrh.setX1(1);
//             vrh.setY1(1);
//             vrh.setX2(2);
//             vrh.setY2(2);

//             dno.setX1(3);
//             dno.setY1(3);
//             dno.setX2(4);
//             dno.setY2(4);
//         }

//         Kvadrat(Prava p1, Prava p2) {
//             vrh.setX1(p1.getX1());
//             vrh.setY1(p1.getY1());
//             vrh.setX2(p1.getX2());
//             vrh.setY2(p1.getY2());
//             dno.setX1(p2.getX1());
//             dno.setY1(p2.getY1()); 
//             dno.setX2(p2.getX2()); 
//             dno.setY2(p2.getY2()); 
//         } 

//         float povrsina() {
//             return pow(vrh.racunajDuzinu(), 2);
//         }
//         float obim() {
//             return 4 * vrh.racunajDuzinu();
//         }
//         void ispis() {
//             cout<<"Povrsina= "<<povrsina()<<" Obim = "<<obim()<<endl;
//         }
// };

// int main() { 
//     Prava po1(0,10,10,10), po2; 
//     Kvadrat ko1(po1, po2); 
//     ko1.ispis(); 
//     return 0; 
// }

//...................................................................

// using namespace std;

// class Ocena {
//     char imePredmeta[20];
//     int ocena;
//     char datum[10];

//     public:
//         Ocena() {
//             strcpy(imePredmeta, "OOP");
//             ocena = 10;
//             strcpy(datum,"15.01.2019"); 
//         }

//         Ocena(char *ip, int o, char *d) {
//             strcpy(imePredmeta, ip);
//             ocena = o;
//             strcpy(datum, "15.01.2019");
//         }

//         bool jeLiPolozio() {
//             if(ocena > 5) return true;
//             return false;
//         }

//         void ispisi() {
//             cout<<"Naziv predmeta: "<<imePredmeta<<endl;
//             cout<<"Ocena: "<<ocena<<endl;
//             cout<<"Datum polaganja: "<<datum<<endl;
//         }

//         void setImePredmeta(char *ip) {
//             strcpy(imePredmeta, ip);
//         }

//         void setOcena(int o) {
//             ocena = o;
//         }

//         void setDatum(char *d) {
//             strcpy(datum, d);
//         }

//         char *getImePredmeta() {
//             return imePredmeta;
//         }

//         int getOcena() {
//             return ocena;
//         }

//         char *getDatum() {
//             return datum;
//         }

//         // copy constructor
//         Ocena (const Ocena &ocn) {
//             strcpy(imePredmeta, ocn.imePredmeta);
//             ocena = ocn.ocena;
//             strcpy(datum, ocn.datum);
//         }

// };

// class Student {
//     char imeIprezime[30];
//     Ocena ocena1, ocena2, ocena3;

//     public:
//         Student() {
//             strcpy(imeIprezime, "Hamza");
//             ocena1.setImePredmeta("ORT");
//             ocena1.setOcena(10);
//             ocena1.setDatum("22.12.2025");
//             ocena2.setImePredmeta("OET");
//             ocena2.setOcena(5);
//             ocena2.setDatum("02.02.2024");
//             ocena3.setImePredmeta("programiranje");
//             ocena3.setOcena(8);
//             ocena3.setDatum("24.07.2024");
//         }

//         Student(char *ip, Ocena o1, Ocena o2, Ocena o3) {
//             strcpy(imeIprezime, ip);
//             ocena1 = o1;
//             ocena2 = o2;
//             ocena3 = o3;
//         }

//         int ukupnoPolozenih() {
//             int s = 0;
//             if(ocena1.jeLiPolozio() == true) s++;
//             if(ocena2.jeLiPolozio() == true) s++;
//             if(ocena3.jeLiPolozio() == ture) s++;

//             return s;
//         }

//         float prosek() {
//             float s = (ocena1.getOcena() + ocena2.getOcena() + ocena3.getOcena()) / 3;
//             return s;
//         }
        
//         void ispisi() {
//             cout<<"Studnet "<<imeIprezime<<" je polozio "<<ukupnoPolozenih()<<" predmeta i prosek mu je "<<prosek()<<endl;
//             cout<<"Ocene studenta su: "<<ocena1.ispisi()<<", "<<ocena2.ispisi()<<", "<<ocena3.ispisi();
//         }
// };

// int main() {
//     Student hamza;

//     hamza.ispisi();
//     Ocena o1,o2("OOP",9,"25.06.2018"),o3("AR2",8,"02.10.2018"); 
//     Student enes("Enes",o1,o2,o3); 
//     enes.ispisi();
//     return 0; 
// }
