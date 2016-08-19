/**
 * Выведите значение наименьшего из всех положительных элементов в массиве.
 * Известно, что в массиве есть хотя бы один положительный элемент.
 *
 * Формат входных данных
 *     В первой строке вводится количество элементов в массиве. Во второй
 *     строке вводятся элементы массива.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     5
 *     5 -4 3 -2 1
 *
 * Sample Output:
 *     1
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, least = 0;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (auto item : array)
        if (item > 0 && (item < least || least == 0))
            least = item;

    cout << least;
    return 0;
}
