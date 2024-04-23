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

//...................................................................

// class Fibonaci {
//     public:
//         int n;
//         int *niz;
//     public: 
//         Fibonaci() {
//             std::cout<<"Unesite n"<<std::endl;
//             std::cin>>n;
//             niz = new int[n];
//             niz[0] = 1;
//             niz[1] = 1;
//             for(int i = 2; i < n; i++) {
//                 niz[i] = niz[i - 1] + niz[i - 2];
//             }
//         }
//         Fibonaci(int n) {
//             this->n = n;
//             niz = new int[this->n];
//             niz[0] = 1;
//             niz[1] = 1;
//             for(int i = 2; i < n; i++) {
//                 niz[i] = niz[i - 1] + niz[i - 2];
//             }
//         }

//         // Copy constructor
//         // In C++, if you don't provide your own copy constructor, the compiler generates a default copy constructor for you. However, if your class manages dynamically allocated resources (like in your example with the niz array), it's often necessary to provide a custom copy constructor to perform a deep copy of the resources.
//         Fibonaci(const Fibonaci &F) {
//             this->n = F.n;
//             niz = new int[this -> n];
//             for(int i = 0; i < this->n; i++) {
//                 this->niz[i] = F.niz[i];
//             }
            
//         }
//         int suma() {
//             int s = 0;
//             for(int i = 0; i < this->n; i++) {
//                 s+= niz[i];
//             }
//             return s;
//         }
//         int vrednost(int i) {
//             if(i > n) return -1;

//             return niz[i - 1];
//         }
//         void prosiri(int x) {
//             int *pomocni;
//             pomocni = new int[n];
//             for(int i = 0; i < n; i++) {
//                 pomocni[i] = niz[i];
//             }
//             delete [] niz;
            
//             n+=x;
//             niz = new int[n];

//             for(int i = 0; i < (n - x); i++) {
//                 niz[i] = pomocni[i];
//             }

//             for(int i = (n - x); i < n; i++) {
//                 niz[i] = niz[i - 1] + niz[i - 2]; 
//             }
//         }
//         ~Fibonaci() {
//             delete [] niz;
//         }
// };

// int main() {
//     Fibonaci f1, f2(10);
//     f1.prosiri(10);

//     for(int i = 0; i< f1.n; i++) {
//         std::cout<<"Element "<< i + 1<< ":"<<std::endl;
//         std::cout<<f1.niz[i]<<" "<<std::endl;
//     }

//     Fibonaci f3 = f1; // Copy constructor called

//     return 0;
// }

//...........................................

// class Niz {
//     public:
//         int *elementi;
//         int n;
//     public:
//         Niz() {
//             n = 10;
//             elementi = new int[n];
//             for(int i = 0; i < n; i++) {
//                 elementi[i] = 0;
//             }
//         }

//         Niz(int broj_el) {
//             n = broj_el;
//             elementi = new int[n];
//         }

//         void ucitaj_elemente() {
        
//             std::cout<<"unesite "<<n<<" celobrojnih elemenata niza\n";
//             for(int i = 0; i < n; i++) {
//                 std::cin>>elementi[i];
//             }
//         }

//         Niz(const Niz& niz1) {
//             n = niz1.n;
//             elementi = new int[n];
//             for(int i = 0; i < n; i++) {
//                 elementi[i] = niz1.elementi[i];
//             }
//         }

//         // destruktor
//         ~Niz() {
//             delete [] elementi;
//         }

//         //n1(1,2,3,4) + n2(4,5)= n3(5,7,3,4)
//         //n3=n1.dodaj(n2)   
//         Niz dodaj(const Niz& n2) {
//             Niz n3(n);
//             for(int i = 0; i < n; i++) {
//                 n3.elementi[i] = elementi[i];
//             }

//             for(int i = 0; i < n2.n; i++) {
//                 n3.elementi[i] += n2.elementi[i];
//             }

//             return n3;
//         }

//          //n1(1,2,3,4), n2(4,5)= n3(1,2,3,4,4,5)
//         Niz dopisi(const Niz& n2) {

//             Niz n3(n + n2.n);
//             for(int i = 0; i < n; i++) {
//                 n3.elementi[i] = elementi[i];
//             }

//             for(int i = 0; i < n2.n; i++) {
//                 n3.elementi[n + i] = n2.elementi[i];
//             }

//             return n3;
//         }

//         //Podniz niza koji sadrzi samo parne elemente
//         //  n2 =n1.podnizpar();
//         Niz podnizpar() {
//             int k = 0;
//             for(int i = 0; i < n; i++) {
//                 if(elementi[i] % 2 == 0) k++;
//             }

//             Niz n2(k);
//             k= 0;
//             for(int i = 0; i < n; i++) {
//                 if(elementi[i] % 2 == 0) {
//                     n2.elementi[k] = elementi[i];
//                     k++;
//                 }
//             }

//             return n2;
//         }
// };  

// int main() {

//     Niz n1(5);
//     n1.ucitaj_elemente();

//     Niz n2 = n1;
//     Niz n3=n1.dodaj(n2);
//     Niz n4=n3.dopisi(n2);
//     // n1.dodaj(n2).ispisi();
//     // n3.dopisi(n2).ispisi();

//     return 0;

// }

//..............................................

// class Polinom {
//     public:
//         int n;
//         double* koeficijenti;
//     public:
//         Polinom() {
//             n = 0;
//             koeficijenti = new double[n + 1];
//             for(int i = 0; i < n + 1; i++) {
//                 koeficijenti[i] = 1;
//             }
//         }
//         Polinom(int n1) {
//             n = n1;
//             koeficijenti = new double[n + 1];
            
//         }

//         // konstruktor koprianja
//         Polinom(const Polinom &poly) {
//             n = poly.n;
//             koeficijenti = new double[n + 1];

//             for(int i = 0; i < n + 1; i++) {
//                 koeficijenti[i] = poly.koeficijenti[i];
//             }
//         }

//          void ucitaj_koeficijente(){
//             std::cout<<"Unesite koeficijente za polinom stepena "<<n<<std::endl;

//             for(int i=0;i<n+1;i++) {
//                 std::cin>>koeficijenti[i];
//             }
//         }
//         void ispisi(){
//             std::cout<<"p="<<koeficijenti[0];
//             for(int i=1;i<n+1;i++)
//         std::cout<<" + "<<koeficijenti[i]<<"x^"<<i;
//         std::cout<<std::endl;
//         }
// };

//....................................

// class Red {
//     public:
//         int *vr_cekanja;
//         int n;
//     public:
//         Red() {
//             n = 5;
//             vr_cekanja = new int[n];
//             for(int i = 0; i < n; i++) {
//                 vr_cekanja[i] = 2;
//             }
//         }

//         Red(int br_kupaca) {
//             n = br_kupaca;
//             vr_cekanja = new int[n];
//             std::cout<<"Unesite vreme cekanja za"<<n<<" kupaca"<<std::endl;

//             for(int i = 0; i < n; i++) {
//                 std::cin>>vr_cekanja[i];
//             }
//         }

//         Red(int br_kupca, int p) {
//             n = br_kupca;
//             vr_cekanja = new int[n];
//         }

//         Red(const Red& red1) {
//             n = red1.n;
//             vr_cekanja = new int[n];
            
//             for(int i = 0; i < n; i++) {
//                 vr_cekanja[i] = red1.vr_cekanja[i];
//             }
//         }

//         ~Red() {
//             delete []vr_cekanja;
//         }

//         Red dodaj(const Red& red1) {
//             Red novi(n + red1.n, 0);
//             for(int i = 0; i < n; i++) {
//                 novi.vr_cekanja[i] = vr_cekanja[i];
//             }

//             for(int i = n; i < novi.n; i++ ) {
//                 novi.vr_cekanja[i] = red1.vr_cekanja[i - n];
//             }
            
//             return novi;
//         }

//         void pisi() {
//             for(int i = 0; i < n; i++) {
//                 std::cout<<vr_cekanja[i]<<" ";
//             }
//                 std::cout<<std::endl;
//         }

// };

// main() {
//     Red kasa1, kasa2(3);
//     Red kasa3 = kasa2;
//     Red kasa4 = kasa1.dodaj(kasa2);
//     kasa4.dodaj(kasa2).dodaj(kasa1).dodaj(kasa1).pisi();
// }

// ...............................

// // PRIJATELJSKE FUNKCIJE

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

//.......................................................

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

//.............................................................................

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

//.....................................................

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