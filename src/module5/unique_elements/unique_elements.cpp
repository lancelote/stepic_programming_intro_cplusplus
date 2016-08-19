/**
 * Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько
 * в нем различных элементов.
 *
 * Формат входных данных
 *     В первой строке вводится количество элементов в массиве. Во второй
 *     строке вводятся элементы массива.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     6
 *     1 2 2 3 3 3
 *
 * Sample Output:
 *     3
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, prev, count = 0;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++)
        cin >> array[i];

    if (array.size() > 0) {
        count++;
        prev = array[0];
        for (int i = 1; i < n; i++) {
            if (prev != array[i])
                count++;
            prev = array[i];
        }
    }
    cout << count;
    return 0;
}
