#include <iostream> 
#include <cstring> 
using namespace std;

const int MAX = 110;  // 最大长度

class CHugeInt {
private:
    int digits[MAX];  // 逆序存储大整数
    int len;          // 有效数字位数

public:
    // 默认构造
    CHugeInt() {
        memset(digits, 0, sizeof(digits));
        len = 1;
    }

    // 从字符串构造
    CHugeInt(const char* num) {
        len = strlen(num);
        memset(digits, 0, sizeof(digits));
        for (int i = 0; i < len; i++) {
            digits[i] = num[len - 1 - i] - '0';  // 逆序存储
        }
    }

    // 从整数构造
    CHugeInt(int num) {
        len = 0;
        memset(digits, 0, sizeof(digits));
        do {
            digits[len++] = num % 10;
            num /= 10;
        } while (num > 0);
    }

    // 加法运算符重载
    CHugeInt operator+(const CHugeInt& other) const {
        CHugeInt result;
        result.len = max(len, other.len);
        int carry = 0;

        for (int i = 0; i < result.len; i++) {
            result.digits[i] = digits[i] + other.digits[i] + carry;
            carry = result.digits[i] / 10;
            result.digits[i] %= 10;
        }

        if (carry) {
            result.digits[result.len++] = carry;
        }
        return result;
    }

    // 加法运算符重载（int）
    CHugeInt operator+(int num) const {
        return *this + CHugeInt(num);  // 直接转换为 CHugeInt
    }

    // 友元函数支持 `int + CHugeInt`
    friend CHugeInt operator+(int num, const CHugeInt& huge) {
        return huge + num;
    }

    // `+=` 运算符重载
    CHugeInt& operator+=(int num) {
        *this = *this + num;
        return *this;
    }

    // 前置 `++`
    CHugeInt& operator++() {
        *this = *this + 1;
        return *this;
    }

    // 后置 `++`
    CHugeInt operator++(int) {
        CHugeInt temp = *this;
        *this = *this + 1;
        return temp;
    }

    // `<<` 输出运算符重载
    friend ostream& operator<<(ostream& os, const CHugeInt& huge) {
        for (int i = huge.len - 1; i >= 0; i--) {
            os << huge.digits[i];
        }
        return os;
    }
};
int  main() 
{ 
	char s[210];
	int n;

	while (cin >> s >> n) {
		CHugeInt a(s);
		CHugeInt b(n);

		cout << a + b << endl;
		cout << n + a << endl;
		cout << a + n << endl;
		b += n;
		cout  << ++ b << endl;
		cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}