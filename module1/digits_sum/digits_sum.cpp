/**
 * Сумма цифр трехзначного числа
 *
 * Дано целое трехзначное число. Найдите сумму его цифр.
 *
 * Формат входных данных
 *     На вход дается число от 100 до 999.
 *
 * Формат выходных данных
 *     Выведите одно целое число - ответ на задачу.
 */

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    cout << num / 100 + num / 10 - (num / 100) * 10 + num % 10;
    return 0;
}