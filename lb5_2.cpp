#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

// �������� ������� ��� ���������� h(x, y)
double h(double x, double y);

// �������� ������� ��� ���������� ������
double calculateExpression(double s, double t);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    double s, t;
    cout << "������ �������� s: ";
    cin >> s;
    cout << "������ �������� t: ";
    cin >> t;

    // ���������� ���������� �� ��������� �������
    double result = calculateExpression(s, t);

    // ��������� ����������
    cout << "��������� ���������� ������: " << result << endl;

    return 0;
}

// ��������� ������� h(x, y)
double h(double x, double y) {
    return (x * y) / (1 + x * x * y * y);
}

// ��������� ������� ��� ���������� ������
double calculateExpression(double s, double t) {
    double numerator = h(s * s, t * t) + pow(h(s + t, 1), 2);
    double denominator = 1 + pow(h(s * t, 2), 2);
    return numerator / denominator;
}
