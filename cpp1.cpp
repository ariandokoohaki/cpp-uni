#include <iostream>
#include <string>

class Calculator {
public:
    int floor(double num) {
        return num;
    }

    int add(int a, int b) {
        return a + b;
    }

    double max1(double a, double b) {
        return (a > b) ? a : b;
    }

    bool find1(const std::string& str, char ch) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == ch)
                return true;
        }
        return false;
    }

    int max2(int araye], int size) {
        if(size == 0) return 0;
        int maximum = araye[0];
        for(int i = 1; i < size; i++) {
            if(araye[i] > maximum)
                maximum = araye[i];
        }
        return maximum;
    }
};

int main() {
    Calculator calc;
    double num = 5.7;
    int moz = calc.floor(num);
    std::cout << "Floor " << num << " mishe " << moz << std::endl;

    int sum = calc.add(3, 4);
    std::cout << "Sumesh mishe " << sum << std::endl;

    double maximum = calc.max1(10.5, 7.3);
    std::cout << "Max1 mishe " << maximum << std::endl;

    int numbers[] = {1, 3, 5, 7, 9};
    int maxNum = calc.max2(numbers, 5);
    std::cout << "Max2 mishe " << maxNum << std::endl;

    return 0;
}
