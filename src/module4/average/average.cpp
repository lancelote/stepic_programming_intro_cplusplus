/**
 * Определите среднее значение всех элементов последовательности, завершающейся
 * числом 0.
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
 *     1 7 9 0
 *
 * Sample Output:
 *     5.66666666667
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    int sum = 0, count = 0;

    cout << setprecision(11) << fixed;

    cin >> num;
    while (num != 0) {
        sum += num;
        cin >> num;
        count += 1;
    }

    cout << (double) sum / count;
    return 0;
}
