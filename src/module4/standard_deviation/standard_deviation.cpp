/**
 * Определите стандартное отклонение для данной последовательности натуральных
 * чисел, завершающейся числом 0.
 *
 * Формат входных данных
 *     Вводится последовательность целых чисел, оканчивающаяся числом 0 (само
 *     число 0 в последовательность не входит, а служит как признак ее
 *     окончания). В последовательности не менее двух чисел до 0.
 *
 * Формат выходных данных
 *     Выведите ответ на задачу.
 *
 * Sample Input:
 *     1 7 9 0
 *
 * Sample Output:
 *     4.16333199893
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int num;
    int sum = 0;
    int sqr_sum = 0;
    int count  = 0;
    double s;

    cout << setprecision(11) << fixed;

    cin >> num;
    while (num != 0) {
        sum += num;
        sqr_sum += num*num;
        count += 1;
        cin >> num;
    }
    s = (double) sum / count;
    cout << sqrt((sqr_sum - 2 * s * sum + count * s * s) / (count - 1));
    return 0;
}
