#include <iostream>
#include<string.h>
#include<math.h>

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

//.................................................................

// Encapsulation

// We encapsulated the 'speed' of the car, allowing methods like accelerate and break to interact with it, but not allowing direct access to the 'speed' variable

// class Car {
//     private:
//         int speed;
//     public:
//     Car() : speed(0) {};

//     void accelerate() {
//         speed += 10;
//     }
    
//     void brake() {
//         if (speed >= 10) {
//             speed -= 10;
//         } else {
//             speed = 0;
//         }
//     }

//     int getSpeed() const {
//         return speed;
//     }
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
        // void setIP(char *ip) {
        //     strcpy(imeprezime, ip);
        // }
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

// KONSTRUKTOR KOPIRANJA

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
            
//             n += x;
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

//         // n1(1,2,3,4) + n2(4,5)= n3(5,7,3,4)
//         // n3=n1.dodaj(n2)   
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
