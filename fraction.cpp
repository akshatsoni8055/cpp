#include<iostream>

#include<algorithm>

using namespace std;

#include<cmath>
class Fraction {



public:
    int numerator;
    int denominator;

    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print() {

        cout << endl << this->numerator << "/" << this->denominator;
    }
    Fraction add(Fraction const& f2) {

        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = x * this->numerator + y * f2.numerator;
        Fraction f3(num, lcm);
        f3.simplify();

        this->numerator = f3.numerator;
        this->denominator = f3.denominator;
        return f3;
    }
    void simplify() {

        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1;i < j;i++) {

            if (this->numerator % i == 0 && this->denominator % i == 0) {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    Fraction multiply(Fraction const& f2) {


        int num = this->numerator * f2.numerator;
        int den = this->denominator * f2.denominator;
        Fraction f3(num, den);
        f3.simplify();
        this->numerator = f3.numerator;
        this->denominator = f3.denominator;
        return f3;
    }
    bool operator==(Fraction const& f2) const {

        return (this->numerator == f2.numerator && this->denominator == f2.denominator);
    }
    Fraction& operator++() {

        this->numerator = this->numerator + this->denominator;
        this->simplify();
        return *this;
    }
    Fraction operator++(int) {

        Fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
};
int main() {

    //Write your code here
    int nr, dr, n, t;
    cin >> nr >> dr >> n;
    int frac[n][3];

    for (int i=0; i<n; i++) {
        cin >> frac[i][0] >> frac[i][1] >> frac[i][2];
    }



    Fraction a(nr, dr);

    for (int i = 0; i < n; i++) {

        Fraction b(frac[i][1], frac[i][2]);

        frac[i][0] == 1 ? a.add(b) : a.multiply(b);
        
        a.print();

    }

    return 0;
}