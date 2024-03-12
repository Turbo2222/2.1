#include <iostream>

class calculator {
public:
    double num1;
    double num2;

    bool set_num1(double num1) {
        this->num1 = num1;
        if (num1 != 0) {
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(double num2) {
        this->num2 = num2;
        if (num2 != 0) {
            return true;
        }
        else {
            return false;
        }
    }

    double add(double num1 = true, double num2 = true) {

        double x = num1 + num2;
        std::cout << "num1 + num2 = " << x << std::endl;
        return x;
    }
    double multiply(double num1 = true, double num2 = true) {

        double x = num1 * num2;
        std::cout << "num1 * num2 = " << x << std::endl;
        return x;

    }
    double subtract_1_2(double num1 = true, double num2 = true) {

        double x = num1 - num2;
        std::cout << "num1 - num2 = " << x << std::endl;
        return x;
    }
    double subtract_2_1(double num1 = true, double num2 = true) {

        double x = num2 - num1;
        std::cout << "num2 - num1 = " << x << std::endl;
        return x;
    }
    double divide_1_2(double num1 = true, double num2 = true) {

        double x = num1 / num2;
        std::cout << "num1 / num2 = " << x << std::endl;
        return x;
    }
    double divide_2_1(double num1 = true, double num2 = true) {

        double x = num2 / num1;
        std::cout << "num2 / num1 = " << x << std::endl;
        return x;
    }


};




int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double num1 = 0;
    double num2 = 0;
    calculator cal;
    std::cout << "Введите num1: ";
    std::cin >> num1;
    while (cal.set_num1(num1) != true){
        std::cout << "Неверный ввод!";
        std::cout << "Введите num1: ";
        std::cin >> num1;
        
    }
    
    std::cout << "Введите num2:";
    std::cin >> num2;
    
    while (cal.set_num2(num2)!=true){
        std::cout << "Неверный ввод!";
        std::cout << "Введите num2:";
        std::cin >> num2;

    }

    cal.add(num1, num2);
        cal.multiply(num1, num2);
        cal.subtract_1_2(num1, num2);
        cal.subtract_2_1(num1, num2);
        cal.divide_1_2(num1, num2);
        cal.divide_2_1(num1, num2);
    

    return 0;

}
