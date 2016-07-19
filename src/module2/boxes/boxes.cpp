/**
 * Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2.
 * Определите, можно ли разместить одну из этих коробок внутри другой,
 * при условии, что поворачивать коробки можно только на 90 градусов вокруг
 * ребер.
 *
 * Формат входных данных
 *     Программа получает на вход числа A1, B1, C1, A2, B2, C2.
 *
 * Формат выходных данных
 *     Программа должна вывести одну из следующих строчек:
 *         - Boxes are equal, если коробки одинаковые,
 *         - The first box is smaller than the second one,
 *           если первая коробка может быть положена во вторую,
 *         - The first box is larger than the second one, если вторая коробка
 *           может быть положена в первую,
 *         - Boxes are incomparable, во всех остальных случаях.
 */

#include <iostream>

using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    int l1, w1, h1, l2, w2, h2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    l1 = max(max(a1, b1), c1);
    h1 = min(min(a1, b1), c1);
    w1 = a1 + b1 + c1 - l1 - h1;

    l2 = max(max(a2, b2), c2);
    h2 = min(min(a2, b2), c2);
    w2 = a2 + b2 + c2 - l2 - h2;

    if (l1 == l2 && h1 == h2 && w1 == w2) {
        cout << "Boxes are equal";
    } else if (l1 <= l2 && h1 <= h2 && w1 <= w2) {
        cout << "The first box is smaller than the second one";
    } else if (l1 >= l2 && h1 >= h2 && w1 >= w2) {
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
    return 0;
}
