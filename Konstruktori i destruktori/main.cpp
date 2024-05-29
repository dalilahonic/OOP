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

//............................................

using namespace std;

class Stack {
    char *s;
    int size;
    int top;

    public:
        Stack(int duzina) {
            s = new char[duzina]; // array of 'size' characters
            this -> size = duzina;
            top = -1;
        }

        Stack (int duzina, const char str[]) {
          //  The const keyword before char str[] indicates that the array str is read-only and should not be modified within the constructor.

            s = new char[duzina];
            this -> size = duzina;
            for(int i = 0; i < duzina; i++) {
                s[i] = str[i];
            }
    
            top = size -1;
        }

        void reset() {
            top = -1;
        };

        void push(char c) {
            s[++top] = c;
        };

        char pop() {
            return s[top--];
        };

        char top_of() {
            return s[top];
        };
        
        // const indicates that the function is a const member function. This means that the function does not modify the state of the object on which it is called.
        bool empty() const {
            return top == -1;
        };

        bool full() {
            return top == size - 1;
        };

        ~Stack () {
            delete[] s;
        }
};

int main() {
    Stack s(3);

    char x;

    cout<<"Unesite niz karaktera"<<endl;

    while(!s.full()) {
        cin>>x;
        if(x == EOF) break;
        else s.push(x);
    }

    cout<<"Niz karaktera koji je upisan u stek: "<<endl;

    while(!s.empty()) {
        cout<<s.pop()<<endl;
    }

    Stack s2(4, "ABCD");

    cout<<"\n";

    while(!s2.empty()) {
        cout<<s2.pop()<<endl;
    }
}