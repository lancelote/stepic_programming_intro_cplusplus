/**
 * Определите наименьшее расстояние между двумя локальными максимумами
 * последовательности натуральных чисел, завершающейся числом 0. Если в
 * последовательности нет двух локальных максимумов, выведите число 0.
 *
 * Начальное и конечное значение при этом локальными максимумами не считаются.
 *
 * Формат входных данных
 *     Вводится последовательность целых чисел, оканчивающаяся числом 0 (само
 *     число 0 в последовательность не входит, а служит как признак ее
 *     окончания).
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input 1:
 *     1 2 1 1 2 1 2 1 0
 * Sample Output 1:
 *     2
 *
 * Sample Input 2:
 *     1 2 3 0
 * Sample Output 2:
 *     0
 */

#include <iostream>

using namespace std;

int main() {
    int prev, current, next;
    bool found = false;
    int distance = 0;
    int min_distance = 0;

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
            found = true;
            if (min_distance == 0) {
                min_distance = distance;
            } else if (distance < min_distance) {
                min_distance = distance;
            }
            distance = 1;
        } else {
            if (found) {
                distance += 1;
            }
        }
        prev = current;
        current = next;
        cin >> next;
    }

    cout << min_distance;
    return 0;
}
