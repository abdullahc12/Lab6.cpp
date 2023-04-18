#include <iostream>
#include <cmath>

using namespace  std;

double question3(int n, int k) {

    if (k > n) {
        return 0;
    }

    double term = (double)(-1) * ((k % 2 == 0) ? 1 : -1) / k;

    return term + question3(n, k + 1);
}
double question3(int k) {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (k > n) {
        return 0;
    }

    double term = (double) (-1) * ((k % 2 == 0) ? 1 : -1) / k;

    return term + question3(k + 1);
}

int main() {
        int n;
        std::cout << "Enter the value of n: ";
        std::cin >> n;

        double sum = question3(n, 1);

        std::cout << "Sum of the series: " << sum << std::endl;

        double sum2 = question3(1);

        std::cout << "Sum of the series: " << sum2 << std::endl;

        return 0;
}
