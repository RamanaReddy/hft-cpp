#include <iostream>
#include <vector>

int main() {
    std::vector<int> prices{100, 101, 99, 102};
    long sum = 0;
    for (int p : prices) sum += p;
    std::cout << "Average price: " << static_cast<double>(sum) / prices.size() << '\n';
}