#include <iostream>
#include <math.h>

using namespace std;

// Virtuelne metode

// class Linearna {
//     public:
//         float b, c;
//     public:
//         Linearna() {
//             b = 3.2;
//             c = 1.9;
//         }

//         Linearna(float c1, float b1) {
//             this -> b = b1;
//             this -> c = c1;
//         }

//         virtual void Ispis() {
//             cout<<"Jednacina: "<<c<<"*x"<<"+"<<b<<endl;
//         }

//         virtual int Resenja() {
//             if(c != 0) {
//                 cout<<(-b)/c<<endl;
//                 return 1;

//             } else {
//                 cout<<"Nema resenja"<<endl;
//                 return 0;
//             }
//         }

//         ~Linearna() {}

//         virtual void IspisR() {
//             Ispis();
//             Resenja();
//         }

//         virtual bool ImaResenja() {
//             if(Resenja() == 1) return true;
//             return false;
//         }
// };

// class Kvadratna : public Linearna {
//     public:
//         float a;
//     public:
//         Kvadratna() : Linearna() {
//             a = 5.2;
//         }

//         Kvadratna(float a, float b, float c): Linearna(b, c) {
//             this -> a = a;
//         } 

//         ~Kvadratna() {}

//         void Ispis() {
//             cout<<"Jednacina: "<<a<<"*x^2"<<"+"<<b<<"*x"<<"+"<<c<<endl;

//         }

//         int Resenja() {
//             float D;
//             D=b*b-4*a*c;

//             if(D>0) {

//                 cout<<"x1: "<<((-b)+sqrt(D))/2*a<<endl;
//                 cout<<"x2: "<<((-b)-sqrt(D))/2*a<<endl;
//                 return 2;

//             } else if (D==0) {

//                 cout<<"x: "<<(-b)/2*a<<endl;
//                 return 1;

//             } else {
//                 cout<<"Nema resenja u skupu realnih brojeva."<<endl;
//                 return 0;
//             }
//         }

//             void IspisR() {
//             Ispis();
//             Resenja();
//         }

//         bool ImaResenja() {

//             if(Resenja()>=1)
//             return true;
//             return false;  
//        }
// };

// int main() {
//     Kvadratna k1(2.0, 1.0, -4.0);
//     k1.IspisR();
//     Linearna j1(2, 4);
//     j1.IspisR();
//     j1.ImaResenja();
//     return 0;
// }

//..........................................................................

// class Izraz1 {
//     char op1;
//     int operand1, operand2;

//     public:
//         Izraz1() {
//         op1 = '+' ;
// 		operand1 = 2;
// 		operand2 = 5;
//         }

//         Izraz1( int operand1 , int operand2, char operacija1) {
//             this -> operand1 = operand1;
//             this -> operand2 = operand2;
//             op1 = operacija1;

//         }

//         void setop1(char b) { op1 = b; }
// 	    void setoperand1( int b) { operand1 = b; }
// 	    void setoperand2( int b) { operand2 = b; }
// 	    char getop1() { return op1; }
// 	    int getoperand1() { return operand1; }
// 	    int getoperand2() { return operand2; }

//  	    virtual double izracunaj () {
// 		switch(op1) {
// 			case '+' : return (double) operand1 + operand2;
// 			case '-' : return (double) operand1 - operand2;
// 			case '*' : return (double) operand1 * operand2;
//             case '/':
//                 if(operand2 != 0) return operand1 / operand2;
//                 else return 0;
//                 break;
//             default:
//                 return 0;
//                 break;
//         }
//  	}

//     void ispis() {
//         cout << operand1 << op1 << operand2 << endl;
//     }
// };

// class Izraz2 : public Izraz1 {
//     char op2;
//     int operand3;
// public:
//     Izraz2(): Izraz1(2, 5, '+') {
//         op2 = '*';
//         operand3 = 3;
//     }

//     Izraz2(int operand1, int operand2, int operand3,char op1,char op2): Izraz1 (operand1, operand2, op1) {
//         this -> op2 = op2;
//         this -> operand3 = operand3;
//     }

//     void setop2 (char b) { op2 = b;}
//     void setoperand3 (int b) { operand3 = b;}
//     char getop2() { return op2; }
//     int getoperand3 () { return operand3; }

//    double izracunaj() {
//         double prvi;
//         if ((op2 == '*' || op2 == '/') && (getop1()== '+' || getop1() == '-')) {
//            switch(op2) {
//                 case '*' : prvi = (double) getoperand2() * operand3; break;
//                 case '/' : prvi = (double) getoperand2() / operand3; break;
//            }
//            switch(getop1()) {
//                 case '+': return prvi + getoperand1 ();
//                 case '-': return prvi - getoperand1 ();
//            }
//         }

//         else {
//             switch(getop1()) {
//                 case '+' : prvi = (double) getoperand1() + getoperand2(); break;
//                 case '-' : prvi = (double) getoperand1() - getoperand2(); break;
//                 case '*' : prvi = (double) getoperand1() * getoperand2(); break;
//                 case '/' : prvi = (double) getoperand1() / getoperand2(); break;
//             }

//             switch(op2) {
//                 case '+' : return prvi + getoperand1();
//                 case '-' : return prvi - getoperand1();
//                 case '*' : return prvi * getoperand1();
//                 case '/' : return prvi / getoperand1();
//             } }
//         return prvi;
//    }

//    void ispis() {
//     cout << getoperand1() << getop1() << getoperand2() << op2 << operand3 <<endl; 
//     }
// };

// int main() {
//     Izraz2 iz;
//     iz.ispis();
//     cout << iz.izracunaj() <<endl;
//     return 0;
// }



