#include <iostream>
#include <cmath>

class Calculator {
public:
    // Basic arithmetic functions
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return a / b; }

    // Trigonometric functions
    double sine(double angle) { return sin(angle); }
    double cosine(double angle) { return cos(angle); }
    double tangent(double angle) { return tan(angle); }

    // Logarithmic functions
    double logarithm(double x, double base) { return log(x) / log(base); }
    double naturalLogarithm(double x) { return log(x); }
};

int main() {
    Calculator calculator;

    double num1, num2, result;
    char operation;

    std::cout << "Scientific Calculator\n";
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /, s for sine, c for cosine, t for tangent, l for logarithm, n for natural logarithm): ";
    std::cin >> operation;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        std::cout << "Enter the second number: ";
        std::cin >> num2;
    }

    switch (operation) {
        case '+':
            result = calculator.add(num1, num2);
            break;
        case '-':
            result = calculator.subtract(num1, num2);
            break;
        case '*':
            result = calculator.multiply(num1, num2);
            break;
        case '/':
            result = calculator.divide(num1, num2);
            break;
        case 's':
            result = calculator.sine(num1);
            break;
        case 'c':
            result = calculator.cosine(num1);
            break;
        case 't':
            result = calculator.tangent(num1);
            break;
        case 'l':
            double base;
            std::cout << "Enter the base for the logarithm: ";
            std::cin >> base;
            result = calculator.logarithm(num1, base);
            break;
        case 'n':
            result = calculator.naturalLogarithm(num1);
            break;
        default:
            std::cout << "Invalid operation.\n";
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}
