#include <iostream>
 
using namespace std;
 
template<typename T>
T maxim(T const &a, T const &b) {
    return a > b ? a : b;
}
 
template<>
string maxim(string const &a, string const &b) {
    for (auto i = 0; i < min(a.size(), b.size()); i++) {
        auto c1 = toupper(a[i]);
        auto c2 = toupper(b[i]);
        if (c1 != c2)
            return c1 > c2 ? a : b;
    }
    return a.size() > b.size() ? a : b;
}
 
int main() {
    cout << maxim(3, 5) << endl;
    cout << maxim(4.2, 3.5) << endl;
    cout << maxim<int>(3, 3.5) << endl;
    cout << maxim(string("ab"), string("ABB"));
    return 0;
}