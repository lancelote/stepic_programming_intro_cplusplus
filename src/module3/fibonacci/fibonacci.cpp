/**
 * Последовательность Фибоначчи определяется так:
 *
 *     F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
 *
 * По данному числу N определите N-е число Фибоначчи F(N).
 *
 * Формат входных данных
 *     Вводится натуральное число N.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     6
 * Sample Output:
 *     8
 */

#include <iostream>

using namespace std;

int main() {
    int first = 0;
    int second = 1;
    int n, next;

    cin >> n;

    if (n == 0) {
        cout << first;
    } else if (n == 1) {
        cout << second;
    } else {
        --n;
        while (n != 0) {
            next = first + second;
            first = second;
            second = next;
            --n;
        }
        cout << second;
    }
}
