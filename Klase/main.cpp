

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
