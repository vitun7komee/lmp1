#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> fib_map;

int fib(int n) {
    if (n < 2) return n; // базовый случай
    if (fib_map.count(n) == 1) return fib_map[n]; // если результат уже вычислен, возвращаем его
    int result = fib(n - 1) + fib(n - 2); // иначе вычисляем результат
    fib_map.insert({ n, result }); // сохраняем результат
    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = fib(n);

    cout << "Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}