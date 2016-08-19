/**
 * Выведите значение наименьшего нечетного элемента списка, а если в списке нет
 * нечетных элементов - выведите число 0.
 *
 * Формат входных данных
 *     В первой строке вводится количество элементов в массиве. Во второй
 *     строке вводятся элементы массива.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input 1:
 *     5
 *     0 1 2 3 4
 * Sample Output 1:
 *     1
 *
 * Sample Input 2:
 *     5
 *     2 4 6 8 10
 * Sample Output 2:
 *     0
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, item;
    cin >> n;
    vector <int> odd;

    for (int i = 0; i < n; i++) {
        cin >> item;
        if (item % 2 != 0)
            odd.push_back(item);
    }

    if (odd.size() == 0)
        cout << 0;
    else {
        int least = odd[0];
        for (int i = 1; i < odd.size(); i ++)
            if (odd[i] < least)
                least = odd[i];
        cout << least;
    }

    return 0;
}
