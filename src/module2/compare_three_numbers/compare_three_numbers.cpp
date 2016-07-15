/*
 * Даны три целых числа. Найдите наибольшее из них (программа должна вывести
 * ровно одно целое число). Под наибольшим в этой задаче понимается число,
 * которое не меньше, чем любое другое.
 *
 * Формат входных данных
 *     Вводятся три числа.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << a;
    } else if (b >= a && b >= c) {
        cout << b;
    } else if (c >= a && c >= b) {
        cout << c;
    }
    return 0;
}