#include <iostream>
#include <cmath>


double add(double a, double b) {
    return a + b;
}


double subtract(double a, double b) {
    return a - b;
}


double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        std::cout << "Ошибка: деление на ноль!\n";
        return 0;
    }
}


double power(double base, double exponent) {
    return std::pow(base, exponent);
}


double squareRoot(double num) {
    if (num >= 0) {
        return std::sqrt(num);
    }
    else {
        std::cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа!\n";
        return 0;
    }
}


double percent(double num) {
    return num / 100;
}


double factorial(double num) {
    if (num < 0) {
        std::cout << "Ошибка: факториал отрицательного числа не определен!\n";
        return 0;
    }
    else if (num == 0) {
        return 1;
    }
    else {
        double result = 1;
        for (int i = 1; i <= num; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int choice;
    double num1, num2;
    char continueChoice;
    setlocale(LC_ALL, "RUS");
    do {
        std::cout << "Выберите операцию:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Умножение\n";
        std::cout << "4. Деление\n";
        std::cout << "5. Возведение в степень\n";
        std::cout << "6. Нахождение квадратного корня\n";
        std::cout << "7. Нахождение 1 процента от числа\n";
        std::cout << "8. Найти факториал числа\n";
        std::cout << "9. Выйти из программы\n";
        std::cout << "Выберите: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите два числа для сложения: ";
            std::cin >> num1 >> num2;
            std::cout << "Результат: " << add(num1, num2) << "\n";
            break;
        case 2:
            std::cout << "Введите два числа для вычитания: ";
            std::cin >> num1 >> num2;
            std::cout << "Результат: " << subtract(num1, num2) << "\n";
            break;
        case 3:
            std::cout << "Введите два числа для умножения: ";
            std::cin >> num1 >> num2;
            std::cout << "Результат: " << multiply(num1, num2) << "\n";
            break;
        case 4:
            std::cout << "Введите два числа для деления: ";
            std::cin >> num1 >> num2;
            std::cout << "Результат: " << divide(num1, num2) << "\n";
            break;
        case 5:
            std::cout << "Введите основание и показатель степени: ";
            std::cin >> num1 >> num2;
            std::cout << "Результат: " << power(num1, num2) << "\n";
            break;
        case 6:
            std::cout << "Введите число для извлечения квадратного корня: ";
            std::cin >> num1;
            std::cout << "Результат: " << squareRoot(num1) << "\n";
            break;
        case 7:
            std::cout << "Введите число для нахождения 1 процента: ";
            std::cin >> num1;
            std::cout << "Результат: " << percent(num1) << "\n";
            break;
        case 8:
            std::cout << "Введите число для вычисления факториала: ";
            std::cin >> num1;
            std::cout << "Результат: " << factorial(num1) << "\n";
            break;
        case 9:
            std::cout << "До свидания!\n";
            return 0;
        default:
            std::cout << "Ошибка: некорректный выбор операции!\n";
            break;
        }

        std::cout << "Хотите продолжить? (y/n): ";
        std::cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}