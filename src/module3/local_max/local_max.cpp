/**
 * Элемент последовательности называется локальным максимумом, если он строго
 * больше предыдущего и последующего элемента последовательности. Первый и
 * последний элемент последовательности не являются локальными максимумами.
 *
 * Дана последовательность натуральных чисел, завершающаяся числом 0.
 * Определите количество строгих локальных максимумов в этой последовательности.
 *
 * Формат входных данных
 *     Вводится последовательность целых чисел, оканчивающаяся числом 0 (само
 *     число 0 в последовательность не входит, а служит как признак ее
 *     окончания).
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     1 2 1 2 1 0
 *
 * Sample Output:
 *     2
 */

#include <iostream>

using namespace std;

int main() {
    int prev, current, next;
    int local_max = 0;

    cin >> prev;
    if (prev == 0) {
        cout << 0;
        return 0;
    }
    cin >> current;
    if (current == 0) {
        cout << 0;
        return 0;
    }
    cin >> next;
    if (next == 0) {
        cout << 0;
        return 0;
    }

    while (next != 0) {
        if (prev < current && current > next) {
            ++local_max;
        }
        prev = current;
        current = next;
        cin >> next;
    }

    cout << local_max;
    return 0;
}
