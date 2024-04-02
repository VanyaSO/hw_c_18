#include <iostream>
using namespace std;

// Реалізуйте клас «Дріб». Необхідно зберігати чисельник
// і знаменник як змінні-члени. Реалізуйте функції-члени для
// введення даних в змінні-члени, для виконання арифметичних операцій
// (додавання, віднімання, множення, ділення, і т.д.)

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction() = default;
    Fraction(int numer, int demon)
    {
        numerator = numer;
        denominator = demon;
    }

    Fraction sum(Fraction f)
    {
        int newNumerator = numerator * f.denominator + denominator * f.numerator;
        int newDenominator = denominator * f.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction subtraction(Fraction f)
    {
        int newNumerator = numerator * f.denominator - denominator * f.numerator;
        int newDenominator = denominator * f.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction multiplication(Fraction f)
    {
        int newNumerator = numerator * f.numerator;
        int newDenominator = denominator * f.denominator;

        return Fraction(newNumerator, newDenominator);
    }
    Fraction division(Fraction f)
    {
        int newNumerator = numerator * f.denominator;
        int newDenominator = denominator * f.numerator;

        return Fraction(newNumerator, newDenominator);
    }

    void input()
    {
        char slesh = '/';
        cin >> numerator >> slesh >> denominator;
    }

    void show()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {

    cout << "Enter a first fraction using a slash (numerator/denominator): " << endl;
    Fraction f1;
    f1.input();

    cout << "Enter a second fraction using a slash (numerator/denominator): " << endl;
    Fraction f2;
    f2.input();

    cout << "Sum: ";
    f1.sum(f2).show();

    cout << "Subtraction: ";
    f1.subtraction(f2).show();

    cout << "Multiplication: ";
    f1.multiplication(f2).show();

    cout << "Division: ";
    f1.division(f2).show();



    return 0;
}