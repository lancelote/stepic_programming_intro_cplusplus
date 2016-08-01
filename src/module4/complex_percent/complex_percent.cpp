/**
 * Процентная ставка по вкладу составляет P процентов годовых, которые
 * прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек.
 * Определите размер вклада через год.
 *
 * При решении этой задачи нельзя пользоваться условными инструкциями и циклами.
 *
 * Формат входных данных
 *     Программа получает на вход целые числа P, X, Y.
 *
 * Формат выходных данных
 *     Программа должна вывести два числа: величину вклада через год в рублях и
 *     копейках. Дробная часть копеек отбрасывается.
 *
 * Sample Input:
 *     12
 *     179
 *     0
 *
 * Sample Output:
 *     200 48
 */

#include <iostream>

using namespace std;

int main() {
    int p, x, y, result;
    cin >> p >> x >> y;
    result = (x * 100 + y) + (x * 100 + y) * p / 100;
    cout << result / 100 << " " << result % 100;
    return 0;
}