/**
 * Дана последовательность натуральных чисел, завершающаяся числом 0.
 * Определите, какое наибольшее число подряд идущих элементов этой
 * последовательности равны друг другу.
 *
 * Формат входных данных
 *     Вводится последовательность натуральных чисел, оканчивающаяся числом 0
 *     (само число 0 в последовательность не входит, а служит как признак ее
 *     окончания).
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     1 7 7 9 1 0
 *
 * Sample Output:
 *     2
 */

#include <iostream>

using namespace std;

int main() {
    int current, prev;
    int count = 0;
    int max_count = 0;

    cin >> current;
    prev = current;

    while (current != 0) {

        if (current == prev) {
            count += 1;
        } else {
            if (count > max_count) {
                max_count = count;
            }
            count = 1;
        }

        prev = current;
        cin >> current;
    }

    cout << max(count, max_count);
    return 0;
}
