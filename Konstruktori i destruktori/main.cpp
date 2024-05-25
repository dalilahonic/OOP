#include <iostream>
#include<string.h>
#include<math.h>

// KONSTRUKTORI

// class Tacka {
//     int x;
//     int y;
// public:
//     Tacka();
//     void inic(int a, int b);
//     void translacija(int dx, int dy);
//     void pozicija();
// } tacka1;

// Tacka::Tacka() {
//     x = 0;
//     y = 0;
// }

// void Tacka::inic(int a, int b) {
//     x = a;
//     y = b;
// }

// void Tacka::translacija(int dx, int dy) {
//     x+=dx;
//     y+= dy;
// }

// void Tacka::pozicija(){
//   std::cout<<"(x,y)=("<<x<<","<<y<<")"<<std::endl;
// }


// main() {
//     Tacka tacka2;
//     tacka2.pozicija();
//     tacka1.inic(1, 2);
//     tacka2.inic(29, 56);
//     tacka1.pozicija();
//     tacka2.pozicija();
// }

//.........................................

// class Tacka {
//     int x,y;
// public: 
//     Tacka() {
//         x = 0;
//         y = 0;
//         std::cout<<"U telu smo konstruktor metode i kreiramo objekat na adresi"<<this<<std::endl;
//     }

//     Tacka(int a, int b = 0) {
//         x = a;
//         y = b;
//     }
//     void translacija(int dx, int dy);
//     void pozicija();
//     ~Tacka();   
// };

// void Tacka::translacija(int dx, int dy){
//    x+=dx;
//    y+=dy;
// }
// void Tacka::pozicija(){
//   std::cout<<"(x,y)=("<<x<<","<<y<<")"<<std::endl;
// }

// Tacka::~Tacka() {
//     std::cout<<"Destruktor metoda koja uklanja objekat sa pozicije"<<this<<std::endl;
// }

// main() {
//     Tacka tacka1 = Tacka(5,5);
//     Tacka tacka2(3, 42);
//     Tacka tacka3(7);
//     Tacka tacka4;
//     tacka1.pozicija();
//     tacka2.pozicija();
//     tacka3.pozicija();
//     tacka4.pozicija();
// }
