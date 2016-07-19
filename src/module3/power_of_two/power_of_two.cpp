/**
 * По данному числу N распечатайте все целые степени двойки, не превосходящие N,
 * в порядке возрастания.
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
 *     1 2 4 8 16 32
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    int power = 0;
    int current = 1;

    cin >> n;

    while (current <= n) {
        cout << current << " ";
        current *= 2;
        ++power;
    }
    return 0;
}
