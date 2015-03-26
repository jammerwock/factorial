#include <iostream>

using namespace std;

template <int n>
struct factorial {
    enum { ret = factorial<n-1>::ret * n };

};
template<>
struct factorial<0>{
    enum {ret = 1};
};

int f(int i){
    return (i == 0) ? 1 : f(i - 1) * i;
}

int main() {

    cout << factorial<5>::ret << endl;
    cout << f(5) << endl;

    return 0;
}