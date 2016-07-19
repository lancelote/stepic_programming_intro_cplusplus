/**
 * Последовательность Фибоначчи определяется так:
 *
 *     F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
 *
 * Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно
 * является, то есть выведите такое число N, что F(N) = A. Если А не является
 * числом Фибоначчи, выведите число -1.
 *
 * Формат входных данных
 *     Вводится натуральное число A > 1.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     8
 * Sample Output:
 *     6
 */

#include <iostream>

using namespace std;

int main() {
    int count = 1;
    int first = 0;
    int second = 1;
    int n, next;

    cin >> n;

    while (n > second) {
        ++count;
        next = first + second;
        first = second;
        second = next;
    }
    if (second == n) {
        cout << count;
    } else {
        cout << -1;
    }

    return 0;
}
