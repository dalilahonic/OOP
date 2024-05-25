#include <iostream>
#include<string.h>
#include<math.h>

// NASLEDIVANJE

// using namespace std;

// class Datum {
//     public: 
//         int d, m;
//         long int g;
//     public:
//         Datum() {
//             d = 1;
//             m = 1;
//             g = 2018;
//         };

//         Datum(int dan, int mesec, long int godina ) {
//             this -> d = dan;
//             this -> m = mesec;
//             this -> g = godina;
//         }

//         void ispis() {
//             cout<<"Danas je datum "<<d<<"."<<m<<g<<endl;
//         }

//         Datum uporedi(Datum dat) {
//             Datum pom;

//             if(d >= dat.d) pom.d = d - dat.d;
//             else {
//                 switch (m) {
//                     case 2: case 4: case 6: case 8: case 9: case 11: case 1: pom.d = 31 + d - dat.d;
//                     break;
//                     case 5: case 7: case 10: case 12: pom.d = 30 + d - dat.d;
//                     break;
//                     case 3: if((g % 4 == 0 && g % 100 != 0) || (g % 400 == 0)) {
//                         pom.d = 29 + d - dat.d;
//                     } else {
//                         pom.d = 28 + d - dat.d;
//                     }
//                     break;
//                 }
//                 m--;
//             }

//             if(m == 0) {
//                 m = 12;
//                 g--;
//             }
//             if(m >= dat.m) {
//                 pom.m = m - dat.m;
//             } else {
//                 pom.m = 12 + m - dat.m;
//                 g--;
//             }
//             pom.g = g - dat.g;
//             return pom;
//         }
// };

// class Rodendan : public Datum {
//     public:
//         char ime[15];
//         char prezime[20];
//     public:
//         Rodendan() {
//             strcpy(ime, "Lazar");
//             strcpy(prezime, "Antonijevic");
//             d = 1;
//             m = 1;
//             g = 1998;
//         }

//         Rodendan(char *i,char *p, int dan,int mesec, long int godina) {
//             strcpy(ime, i);
//             strcpy(prezime, p); 
//             this-> d = dan;
//             this-> m = mesec;
//             this-> g = godina;
//         }

//         bool daLiJe(Datum dat) {
//             if(dat.d == d && dat.m == m) return true;
//             else return false;
//         }

//         void ispisSlavljeniku(Datum dat) {
//             if(daLiJe(dat) == true) cout<<"Danas je "<<ime<<"u"<<" rodendan"<<endl;
//             else {
//                 Datum pom = uporedi(dat);
//                 cout<<"Do rodendana ima jos: "<<pom.d<<" dana i "<<pom.m<<" meseci"<<endl;
//             }
//         }

//         int godine (Datum dat) {
//             if(daLiJe(dat) == true) return dat.g - g;
//             else {
//                 if(dat.m > m) {
//                     return dat.g - g;
//                 } else if(dat.m == m){
//                     if (dat.d > d)  return dat.g - g;
//                     else return dat.g - 1 - g;
//                 } else {
//                     return dat.g - 1 - g;
//                 }
//             }
//         }
// };

// int main() {
//     Datum danas(25, 5, 2024);

//     Rodendan osoba1("Lazar", "Antonijevic", 25, 5, 1998);

//     osoba1.ispisSlavljeniku(danas);

//     cout<<"Lazar ima "<<osoba1.godine(danas)<<" godina"<<endl;

//     return 0;
// }

//.............................................................

// using namespace std;

// class Kvadar {
//     protected:
//         int a, b, c;

//     public:
//         Kvadar() {
//             a = 10;
//             b = 10;
//             c = 10;
//         }

//         Kvadar(int d, int e, int f) {
//             this -> a = d;
//             this -> b = e;
//             this -> c = f;
//         }

//         void ispis() {
//             cout<<a<<b<<c<<endl;
//         }
// };

// class Bazen : public Kvadar {
//     public:
//         int d;
    
//     public:
//     Bazen() : Kvadar() {
//         d  = 50;
//     }

//     Bazen(int a, int b, int c, int d) {
//         this -> a = a;
//         this -> b = b;
//         this -> c = c;
//         this -> d = d;
//     }

//     void ispisi() {
//         Kvadar::ispis();
//         cout<<d<<endl;
//     }

// };

// int main() {
//     Kvadar k;
//     Bazen b;
//     b.ispisi();
//     k.ispis();

//     return 0;
// }

//..................................................................................

// VISESTRUKO NASLEDIVANJE

// using namespace std;

// class Proizvod {
//     protected: 
//         int barKod, cena, kolicina;

//     public:
//         Proizvod() {
//             barKod = 43;
//             cena = 12;
//             kolicina = 2;
//         }
//         Proizvod(int bar, int c, int k) {
//             this -> barKod = bar;
//             this -> cena = c;
//             this -> kolicina = k;
//         }

//         void ispis() {
//             cout<<barKod<<cena<<kolicina;
//         }
// };

// class Radnik  {
//     protected:
//         char ime[20];
//         char prezime[20];

//     Radnik() {
//             strcpy(ime, "Dalila");
//             strcpy(prezime, "Honic");
//         }
//     Radnik(char *imeR, char *prezimeR) {
//             strcpy(ime, imeR);
//             strcpy(prezime, prezimeR);
//     }

//     void ispis() {
//         cout<<ime<<" "<<prezime;
//     }
// };

// class Prodavnica : public Radnik,  public Proizvod {

//     public:
//         int brRadnihSati, cenaPoSatu;
    
//     public: 
//         Prodavnica(): Radnik(), Proizvod() {
//             brRadnihSati = 8;
//             cenaPoSatu = 2;
//         }

//         Prodavnica(char *ime,char *prezime,int barKod, int cena, int kolicina,int brRadnih,int cenaPoSatu) : Radnik(ime,prezime), Proizvod(barKod,cena,kolicina) {
//             this -> brRadnihSati = brRadnih;
//             this -> cenaPoSatu = cenaPoSatu;
//         }

//         void ispis () {
//             cout<<brRadnihSati<<endl;
//             cout<<cenaPoSatu<<endl;
//             Proizvod::ispis();
//             Radnik::ispis();
//         }

//     int plata(int kolicina) {
//         return kolicina * cena;
//     }

//     int prodaj(int kolicina) {
//         this -> kolicina -= kolicina;
//     }
// };

// int main() {

//     Prodavnica p1, p2("Dalila", "Honic", 0222, 240, 2, 9, 300);
//     p1.ispis();
//     p2.ispis();

//     return 0;

// }

//...........................................

using namespace std;

class Dosije {
    protected:
	    char ime[15];
	    char prezime[20];
	    int index;
	public:
 	    Dosije() { 
	 	    strcpy(ime,"Dalila");
	 	    strcpy(prezime, "Honic");
	 	    this -> index = 123;
	    }

        Dosije(char i[15], char p[20], int brIndexa) {
            strcpy(ime, i);
            strcpy(prezime, p);
            this -> index = brIndexa;
	    }

        void predstaviSe() {
            cout<<"Ime: "<<ime<<endl;
  		    cout<<"Prezime: "<<prezime<<endl;
	  	    cout<<"Index: "<<index<<endl;

        }
};

class Predmet {
    protected: 
        char imeProfesora[15], prezimeProfesora[20], nazivPredmeta[30];
    public: 
        Predmet() { 
		strcpy(imeProfesora,"Safet");
		strcpy(prezimeProfesora,"Purkovic");
		strcpy(nazivPredmeta,"Programiranje");   
        }

	    Predmet(char* ip, char* pp, char* np) {
		strcpy(imeProfesora,ip);
		strcpy(prezimeProfesora,pp);
		strcpy(nazivPredmeta,np);
        }

        void opisPredmeta() {
		cout<< "Ime profesora: " << imeProfesora << endl;
		cout<< "Prezime profesora: " << prezimeProfesora << endl;
	    cout<< "Naziv predmeta: " << nazivPredmeta << endl;	
	    }
};

class Ispit : protected Dosije, protected Predmet {
    
    protected:
        int ocena;
        char datum[20];
    public:
        Ispit(): Dosije(), Predmet() {
            // konstruktor poziva konstruktore baznih klasa
            ocena = 8;
            strcpy(datum, "jun");
        }
        Ispit(int o, char* d) {
            ocena = o;
            strcpy(datum, d);
        }

        void ispis() {
            predstaviSe();
            opisPredmeta();
            cout<<"Ocena "<<ocena<<endl;
            cout<<"Datum "<<datum<<endl;
        }

        int jeLiPolozio() {
            if (ocena > 5) return 1;
            else return 0;
        }
        
};

int main() {
    Ispit ispit1;
    ispit1.ispis();
    cout<<ispit1.jeLiPolozio();
    return 0;
}