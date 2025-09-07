#include <iostream>
using namespace std;
// 在此处补充你的代码
#include <functional>
template <class Func1, class Func2, class T>
function<T(T)> combine(Func1 f1,Func2 f2)
{
    return [f1,f2](T x){return f1(f1(x)+f2(x));};
}
int main()
{
    auto Square = [] (double a) { return a * a; };
    auto Inc = [] (double a) { return a + 1; };
    cout << combine<decltype(Square),decltype(Inc),int>(Square,Inc)(3) << endl;
    cout << combine<decltype(Inc),decltype(Square),double>(Inc,Square)(2.5) << endl;

    return 0;
}