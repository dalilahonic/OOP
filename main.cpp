#include <iostream>
#include<string.h>
#include<math.h>

// int main()
// {
//     std::cout << "Hello World"; 
//     return 0;
// }


// main() {
//     std::cout<<10<<"\n";
//     std::cout<<010<<"\n";
//     std::cout<<0x10<<"\n";        
//     return 0;
// }


// main() {
//     int n, m;
//     std::cout<<"Unesite dva broja";
//     std::cin>>n>>m;
//     std::cout<<"Suma je: "<<(n + m)<<"\n";
//     return 0;
// }

// main() {
//     int i(1), j(0);
//     std::cout<<(i&&j)<<" "<<(i||j)<<" "<<(!i)<<"\n";
 
// }

// main() {

//     (int)2.8*2; // 4
//     (int)(2.8*2); // 5
// }

//.....................................

// int prost(int);
// main() {
//     int br;

//     std::cout<<"Unesite broj";
//     std::cin>>br;

//     if(prost(br)) std::cout<<"Broj je prost";
//     else std::cout<<"Broj nije prost";

// }

// int prost(int broj) {
    
//     for(int i = 2; i <= broj / 2 ; i++) {
//         if(broj % i == 0) return 0;
//     }

//     return 1;
// }

//...........................

// main() {
//     int *p;
//     p = new int; /* operacija new alocira bajtova kolika je velicina int-a i vraca adresu lokacije*/
//     *p = 5; /* upisi broj 5 u memorijsku adresu na koju pokazuje p */
//     std::cout<<"Na lokaciji "<<p<<"se nalazi int koji ima vrednost "<<*p;
//     delete p;
// }

//.................................

// main() {
//     int n;
//     int* niz;
//     int max, suma = 0; 
//     std::cout<<"Unesi dimenziju niza: ";
//     std::cin>>n;

//     niz = new int[n];

//     for(int i = 0; i < n; i++) {
//         std::cin>>niz[i];
//     }

//     max = niz[0];

//     for(int i = 1; i < n; i++) {
//         if(niz[i] > max) max = niz[i];
//     }

//     std::cout<<"Najveci element je: "<<max<<std::endl;

//     for(int i = 0; i < n; i+= 2) {
//         suma += niz[i];
//     }

//     std::cout<<"Suma elemenata na parnim pozicijama je: "<<suma;

//     delete niz;
// }

//.....................................


// int *createArray(int n) {
//     int *niz = new int[n];
//     return niz;
// }

// main() {
//     int n;
//     int *niz;
//     std::cout<<"Unesi dimenziju niza: ";
//     std::cin>>n;

//     niz = createArray(n);

//     for(int i = 0; i < n; i++) {
//         std::cin>>niz[i];
//     }

//     delete niz;
// }

//..................................

// main() {

// int rows = 3;
// int cols = 3;

// int **matrix = new int*[rows];

// for (int i = 0; i < rows; i++) {
//     matrix[i] = new int[cols];
// }

// std::cout<<"Unesite elemente: "<<std::endl;

// for(int i = 0; i< rows; i++) {
//     for(int j = 0; j < cols; j++) {

//         std::cin>>matrix[i][j];
        
//     }
// }

// }

//...................................

// int fakt(int);
// int faktRekruzivno(int);

// main() {
//     int n;
//     std::cout<<"Unesite n";
//     std::cin>>n;

//     std::cout<<"Faktorijel "<<n<<" je "<< faktRekruzivno(n);

// }

// int fakt(int n) {
//     int fakt = 1;

//     for(int i = 2; i <= n; i++) {

//         fakt *= i;

//     }

//     return fakt;
// }

// int faktRekruzivno(int n ){ 
//     if (n == 1) return n;
//     else return n * faktRekruzivno( n - 1);
// }

//.............................

// void zameni(int &a, int &b) {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }

// main() {
//     int x = 2, y = 3;
//     zameni(x, y);

//     std::cout<<"x = "<<x<< " y = "<<y;

// }

//...........................................................

// KLASE

// class Tacka {
//     int x;
//     int y;
//     public:
//         void inic(int a, int b);
//         void translacija(int dx, int dy);
//         void pozicija();
// } tacka1;

// void Tacka:: inic(int a, int b) {
//     x = a;
//     y = b;
// }

// void Tacka:: translacija(int dx, int dy) {
//     x+= dx;
//     y+= dy;
// }

// void Tacka:: pozicija() {
//     std::cout<<"(x, y) = ("<<x<<", "<< y<<")"<<std::endl;
// }

// main() {
//     Tacka tacka2;
//     tacka1.inic(1, 20);
//     tacka2.inic(3, 7);
//     std::cout<<"Tacka 1 ";
//     tacka1.pozicija();
//     std::cout<<"Tacka 2 ";
//     tacka2.pozicija();
//     tacka2.translacija(10,11);
//     std::cout<<"Tacka2";
//     tacka2.pozicija();

// }

//...................................

// class Student {
//     char ime[20];
//     char prezime[20];
//     int br_indeksa;
// public: 
//     void inic(char* i, char* p, int b);
//     void ispis();
// };

// void Student::inic(char* i, char* p, int b) {
//     strcpy(ime, i);
//     strcpy(prezime, p);
//     br_indeksa = b;
// }

// void Student::ispis() {
//     std::cout<<ime<<" "<<prezime<<" "<< br_indeksa<<std::endl;
// }

// main() {
//     Student student1;
//     student1.inic("Dalila", "Honic", 1);
//     student1.ispis();
// }

//.........................

// class Automobil {
// public:
//     int rezervoar;
//     int potrosnja;
// public: 
//     void inicijalizacija(int r, int p);
//     void predi(int km);
//     void ispis();
//     void adresa();

// };

// void Automobil::inicijalizacija(int r, int p) {
//     rezervoar = r;
//     potrosnja = p;
// }

// void Automobil:: predi(int km) {
//     rezervoar -= potrosnja * km;
// }

// void Automobil::ispis() {
//     std::cout<<rezervoar<<" l goriva, potrosnja= "<<potrosnja<<" l/km "<<std::endl;
// }

// void Automobil::adresa() {
//     std::cout<<this<<std::endl;
// }

// main() {
//     Automobil dzip;
//     dzip.inicijalizacija(20, 9);
//     std::cout<<"Objekat dzip se nalazi na adresi "<<&dzip<<std::endl;
//     std::cout<<"Ovo ptvrdjuje i nasa metoda adresa :";
//     dzip.adresa();
//     dzip.ispis();
//     dzip.predi(2);
//     dzip.ispis();
    
// }

//...............................................

// class DvaZnaka {
//     public:
//         char ch1;
//         char ch2;
//     public:
//         void inic(char z1, char z3);
//         void uvecaj();
//         void ispis();
//         void adresaObjekta();
// };

// void DvaZnaka::inic(char z1, char z2) {
//     this -> ch1 =  z1;
//     this -> ch2 = z2;
// }

// void DvaZnaka::uvecaj() {
//     this->ch1++;
//     this->ch2++;
// }

// void DvaZnaka::ispis() {
//     std::cout<<" Znak1 = "<<this->ch1<<" Znak2 = "<<this->ch2<<std::endl;
// }

// void DvaZnaka::adresaObjekta() {
//     std::cout<<this<<std::endl;
// }

// int main() {
//     DvaZnaka inicijali;
//     inicijali.inic('A', 'B');
//     inicijali.ispis();
//     inicijali.uvecaj();
//     inicijali.ispis();
// }

//...........................................

// class Trougao {
//     double a, b, c;
// public: 
//     void inic(double a, double b, double c);
//     void pisi();
//     double P();
//     double O() {
//         return (a+b+c);
//     };

// };

// void Trougao::inic(double a, double b, double c) {
//     this->a = a;
//     this->b = b;
//     this->c = c;

// }

// void Trougao::pisi() {
//     std::cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<std::endl;
// }
 
// double Trougao::P() {
//     double s=(a+b+c)/2;
//     return sqrt(s*(s-a)*(s-b)*(s-c));
// }

// main() {
//     Trougao t;
//     t.inic(5, 4, 7);
//     t.pisi();
//     std::cout<<"O ="<<t.O()<<" P = "<< t.P();
// }

//.................................

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

//..............................................
// GET I SET metode

// class Pas {
//     private:
//         float godine;
//     public:
//         void setGodine(float g) {
//             godine = g;
//         }
//         float getGodine() {
//             return godine;
//         }
// };

// main() {
//     Pas pas1;

//     // pas1.godine = 10;
//     // std::cout<<pas1.godine; // ne radi jer je atribut godine privatan

//     pas1.setGodine(4);
//     std::cout<<pas1.getGodine();


// }

//................................................

// class Clan {
//     private: 
//         int cbroj;
//         char imeprezime[30];
//         double stanje;
//         int pocasni;
//     public:
//         Clan() {
//             cbroj = 123;
//             strcpy(imeprezime, "Dalila Honic");
//             stanje = 5000;
//             pocasni = 0;
//         }

//         Clan(int cb, char *ip, double s, int p) {
//             cbroj = cb;
//             strcpy(imeprezime, ip);
//             stanje = s;
//             pocasni = p;
//         }

//         void setCBroj(int cbr) {
//             cbroj = cbr;
//         }
//         void setIP(char *ip) {
//             strcpy(imeprezime, ip);
//         }
//         void setStanje(float stanje) {
//             this->stanje = stanje;
//         }
//         void setPocasni(int p) {
//             pocasni = p;
//         }

//         int getCBroj() {
//             return cbroj;
//         }
//         char* getIP() {
//             return imeprezime;
//         }

//         double getStanje() {
//             return stanje;
//         }

//         int getPocasni() {
//             return pocasni;
//         }

//         void naplata() {
//             if(!pocasni) stanje -= 500;
//         }
// };

// int main() {
//     Clan c;
//     c.setCBroj(5);
//     c.naplata();
//     std::cout<<"Stanje clana nakon naplate je "<<c.getStanje()<<std::endl;

//     return 0;

// }