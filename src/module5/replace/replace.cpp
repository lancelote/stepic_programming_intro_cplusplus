/**
 * Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.).
 * Если элементов нечетное число, то последний элемент остается на своем месте.
 *
 * Формат входных данных
 *     В первой строке вводится количество элементов в массиве. Во второй строке
 *     вводятся элементы массива.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     5
 *     1 2 3 4 5
 *
 * Sample Output:
 *     2 1 4 3 5
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 1; i < n; i += 2) {
        tmp = array[i-1];
        array[i-1] = array[i];
        array[i] = tmp;
    }

    for (auto item : array)
        cout << item << " ";
    return 0;
}
