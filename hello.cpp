#include <iostream>
#include <string>

// Точка входа программы
int main() {
    try {
        std::string greeting = "Hello";
        if (greeting.empty()) {
            throw std::runtime_error("Пустое приветствие");
        }
        std::cout << greeting << std::endl;   // Вывод приветствия
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}








































