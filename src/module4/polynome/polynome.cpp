/**
 * Дан многочлен P(x) = a_nx^n + a_(n−1)x^(n−1)+ … + a_1x + a_0 и число x.
 *
 * Формат входных данных
 *     Сначала программе подается на вход целое неотрицательное число n ≤ 20,
 *     затем действительное число x, затем следует n+1 вещественное число —
 *     коэффициенты многочлена от старшего к младшему.
 *
 * Формат выходных данных
 *     Программа должна вывести значение многочлена.
 *
 * Sample Input 1:
 *     1 0.000 1.000 1.000
 * Sample Output 1:
 *     1
 *
 * Sample Input 2:
 *     2 0.500 1.000 1.000 1.000
 * Sample Output 2:
 *     1.75
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x, a;
    double sum = 0;

    cin >> n >> x;

    while (n >= 0) {
        cin >> a;
        sum += a*pow(x, n);
        n -= 1;
    }

    cout << sum;
    return 0;
}
