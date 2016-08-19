/**
 * N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до
 * N. Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с
 * номерами от li до ri включительно. Определите, какие кегли остались стоять
 * на месте.
 *
 * Формат входных данных
 *     Программа получает на вход количество кеглей N и количество бросков K.
 *     Далее идет K пар чисел li, ri, при этом 1 <= li, ri <= N.
 *
 * Формат выходных данных
 *     Программа должна вывести последовательность из N символов, где j-й
 *     символ есть “I”, если j-я кегля осталась стоять, или “.”, если j-я
 *     кегля была сбита.
 *
 * Sample Input:
 *     10 3
 *     8 10
 *     2 5
 *     3 6
 *
 * Sample Output:
 *     I.....I...
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int skittlesTotal;
    int throwsTotal;

    cin >> skittlesTotal >> throwsTotal;

    vector <int > skittles(skittlesTotal);
    vector <int> throwsLeft(throwsTotal);
    vector <int> throwsRight(throwsTotal);

    for (int i = 0; i < skittlesTotal; i++)
        skittles[i] = 1;

    for (int i = 0; i < throwsTotal; i++)
        cin >> throwsLeft[i] >> throwsRight[i];

    for (int i = 0; i < throwsTotal; i++)
        for (int j = throwsLeft[i] - 1; j < throwsRight[i]; j++)
            skittles[j] = 0;

    for (int i = 0; i < skittlesTotal; i++)
        if (skittles[i] == 1)
            cout << "I";
        else
            cout << ".";

    return 0;
}
