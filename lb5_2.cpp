#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

// Прототип функції для обчислення h(x, y)
double h(double x, double y);

// Прототип функції для обчислення виразу
double calculateExpression(double s, double t);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    double s, t;
    cout << "Введіть значення s: ";
    cin >> s;
    cout << "Введіть значення t: ";
    cin >> t;

    // Обчислення результату за допомогою функції
    double result = calculateExpression(s, t);

    // Виведення результату
    cout << "Результат обчислення виразу: " << result << endl;

    return 0;
}

// Реалізація функції h(x, y)
double h(double x, double y) {
    return (x * y) / (1 + x * x * y * y);
}

// Реалізація функції для обчислення виразу
double calculateExpression(double s, double t) {
    double numerator = h(s * s, t * t) + pow(h(s + t, 1), 2);
    double denominator = 1 + pow(h(s * t, 2), 2);
    return numerator / denominator;
}
