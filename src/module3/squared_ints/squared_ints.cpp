/**
 * По данному целому числу N распечатайте все квадраты натуральных чисел,
 * не превосходящие N, в порядке возрастания.
 *
 * Формат входных данных
 *     Вводится натуральное число.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     50
 *
 * Sample Output:
 *     1 4 9 16 25 36 49
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    int current = 1;

    cin >> n;

    while (current*current <= n) {
        cout << current*current << " ";
        current += 1;
    }
    return 0;
}
