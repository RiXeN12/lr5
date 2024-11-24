#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"
using namespace std;

////Лабораторна номер 5

////Завдання 1

//int main() 
//{
//    system("chcp 1251");
//
//    double sum = 0.0;
//    double prod = 1.0;
//
//    // Обчислення суми y = sum(j=n to t) (j+2)/((j+4)(j+6))
//    int n = 3;
//    int t = 12;
//
//    cout << "Обчислення суми:" << endl;
//    for (int j = n; j <= t; j++) 
//    {
//        double term = (j + 2.0) / ((j + 4.0) * (j + 6.0));
//        sum += term;
//        cout << "j = " << j << ", доданок = " << fixed << setprecision(6) << term << endl;
//    }
//
//    // Обчислення добутку p = prod(S=5 to 11) (-1)^S * (S^2 + 3)/(3S + 2)
//    cout << "\nОбчислення добутку:" << endl;
//    for (int S = 5; S <= 11; S++) {
//        double numerator = pow(-1, S) * (pow(S, 2) + 3);
//        double denominator = 3 * S + 2;
//        double tmp = numerator / denominator;
//        prod *= tmp;
//        cout << "S = " << S << ", множник = "  << tmp << endl;
//    }
//
//    cout << "\nРезультати обчислень:" << endl;
//    cout << "Сума = "  << sum << endl;
//    cout << "Добуток = "  << prod << endl;
//
//    return 0;
//}

////Завдання 2

//int main() {
//    system("chcp 1251");
//
//    long long product = 1;
//    int start = 1;
//    int end = 20;
//
//    cout << "Вхідні дані:" << endl;
//    cout << "Початкове число: " << start << endl;
//    cout << "Кінцеве число: " << end << endl;
//
//    cout << "\nПарні числа та проміжні результати:" << endl;
//
//    for (int i = start; i <= end; i++) {
//        if (i % 2 == 0)
//        {
//            product *= i;
//            cout << "Число: " << i << ", проміжний добуток: " << product << endl;
//        }
//    }
//
//    cout << "\nРезультат обчислень:" << endl;
//    cout << "Добуток всіх парних чисел від " << start << " до " << end << " = " << product << endl;
//
//    return 0;
//}

////Завдання 3

//int main() 
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double x_prev = 15.3;
//    double x_curr;
//    double dx = 0.05;
//    double sum = 0.0;
//
//    cout << "Вхідні дані:" << endl;
//    cout << "Початкове значення x1 = " << x_prev << endl;
//    cout << "Крок зміни Delta x = " << dx << endl;
//
//    cout << "\nПроміжні обчислення:" << endl;
//
//    for (int k = 3; k <= 17; k++)
//    {
//        x_curr = x_prev + dx;
//
//
//        double numerator = pow(x_curr + x_prev, 2);
//        double denominator = abs(pow(x_curr, 3) - pow(x_prev, 2));
//        double term = numerator / denominator;
//
//        sum += term;
//
//        cout << "k = " << k << ":" << endl;
//        cout << "x_" << k << " = " << x_curr << endl;
//        cout << "Доданок = " << term << endl;
//        cout << "Поточна сума = " << sum << endl << endl;
//
//        x_prev = x_curr;
//    }
//
//    cout << "\nРезультат обчислень:" << endl;
//    cout << "Значення суми = " << sum << endl;
//
//    return 0;
//}

////Лабораторна номер 6

////Завдання 1

//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double x;
//    int n;
//    double eps;
//    double y_prev;
//    double y_next;
//    int iterations = 0;
//
//
//    cout << "Введіть число (x): ";
//    cin >> x;
//    cout << "Введіть степінь кореня (n): ";
//    cin >> n;
//    cout << "Введіть точність (epsilon): ";
//    cin >> eps;
//
//
//    if (n <= 0) {
//        cout << "Помилка: степінь кореня повинен бути додатним числом!" << endl;
//        return 1;
//    }
//    if (n % 2 == 0 && x < 0) {
//        cout << "Помилка: для парного степеня число повинно бути невід'ємним!" << endl;
//        return 1;
//    }
//
//    y_prev = x;
//
//    cout << "\nПроцес обчислення:" << endl;
//
//    do
//    {
//        iterations++;
//
//        // Обчислення наступного наближення за формулою
//        // y_{i+1} = (1/n) * (x/(y_i^(n-1)) + (n-1)*y_i)
//        double y_pow = pow(y_prev, n - 1);  // y_i^(n-1)
//        y_next = (1.0 / n) * (x / y_pow + (n - 1) * y_prev);
//
//        cout << "Ітерація " << iterations << ":" << endl;
//        cout << "y_" << iterations << " = " << y_next << endl;
//        cout << "Різниця |y_{i+1} - y_i| = " << abs(y_next - y_prev) << endl << endl;
//
//        if (abs(y_next - y_prev) <= eps) {
//            break;
//        }
//
//        y_prev = y_next;
//
//        if (iterations > 1000) {
//            cout << "Перевищено максимальну кількість ітерацій!" << endl;
//            return 1;
//        }
//    } while (true);
//
//    cout << "\nРезультати обчислень:" << endl;
//    cout << "Корінь " << n << "-го степеня з " << x << " = " << y_next << endl;
//    cout << "Кількість ітерацій: " << iterations << endl;
//    cout << "Досягнута точність: " << abs(y_next - y_prev) << endl;
//
//    cout << "\nПеревірка:" << endl;
//    cout << "y^" << n << " = " << pow(y_next, n) << endl;
//    cout << "Похибка = " << abs(pow(y_next, n) - x) << endl;
//
//    return 0;
//}

////Завдання 2

//double f(double x) 
//{
//    return -cbrt(x) + 6.9;
//}
//
//int main() {
//    system("chcp 1251");
//
//
//    double x_prev;
//    double x_next;
//    double epsilon;
//    int iterations = 0;
//
//    cout << "Введіть початкове наближення x0: ";
//    cin >> x_prev;
//    cout << "Введіть точність обчислень (epsilon): ";
//    cin >> epsilon;
//
//    cout << fixed << setprecision(10);
//
//    cout << "\nПроцес ітерацій:" << endl;
//    cout << "i\tx_i\t\tf(x_i)\t\t|x_{i+1} - x_i|" << endl;
//    cout << string(75, '-') << endl;
//
//    do
//    {
//        x_next = f(x_prev);
//
//
//        cout << iterations << "\t"
//            << x_prev << "\t"
//            << f(x_prev) << "\t"
//            << abs(x_next - x_prev) << endl;
//
//
//        if (abs(x_next - x_prev) < epsilon) {
//            break;
//        }
//
//
//        x_prev = x_next;
//        iterations++;
//
//        if (iterations > 1000) {
//            cout << "\nПопередження: Перевищено максимальну кількість ітерацій!" << endl;
//            cout << "Можливо метод розбігається для даного початкового наближення." << endl;
//            return 1;
//        }
//    } 
//    while (true);
//
//    cout << "\nРезультати обчислень:" << endl;
//    cout << "Знайдений корінь: x = " << x_next << endl;
//    cout << "Кількість ітерацій: " << iterations << endl;
//    cout << "Досягнута точність: " << abs(x_next - x_prev) << endl;
//
//    cout << "\nПеревірка:" << endl;
//    cout << "f(x) = " << x_next - f(x_next) << " ≈ 0" << endl;
//
//    return 0;
//}

////Завдання 3

//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    double x = M_PI / 6;
//    double epsilon = 0.1;
//
//    double sum = 0;
//    double term = x;
//    int n = 1;
//
//    // Рекурентна формула для обчислення членів ряду:
//    // term[n] = -term[n-1] * x^2 / ((2n) * (2n-1))
//
//    while (fabs(term) > epsilon)
//    {
//        sum += term;
//
//        // Обчислення наступного члена за рекурентною формулою
//        term = -term * x * x / ((2 * n) * (2 * n + 1));
//        n++;
//    }
//
//    cout << "\nРезультати обчислень:" << endl;
//    cout << "x = " << x << " (PI/6)" << endl;
//    cout << "Обчислене значення sin(x) = " << sum << endl;
//    cout << "Точне значення sin(x) = " << sin(x) << endl;
//    cout << "Кількість ітерацій: " << n - 1 << endl;
//    cout << "Похибка: " << fabs(sum - sin(x)) << endl;
//
//    return 0;
//}