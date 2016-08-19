/**
 * Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу.
 * Считается, что любые два элемента, равные друг другу образуют одну пару,
 * которую необходимо посчитать.
 *
 * Формат входных данных
 *     В первой строке вводится количество элементов в массиве. Во второй строке
 *     вводятся элементы массива.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input 1:
 *     5
 *     1 2 3 2 3
 * Sample Output 1:
 *     2
 *
 * Sample Input 2:
 *     5
 *     1 1 1 1 1
 * Sample Output 2:
 *     10
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (array[i] == array[j])
                count++;

    cout << count;
    return 0;
}
