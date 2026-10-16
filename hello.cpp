#include <iostream>
#include <string>

// Функция приветствия
void printGreeting(const std::string& greeting) {
    if (greeting.empty()) {
        throw std::runtime_error("Пустое приветствие");
    }
    std::cout << greeting << std::endl;
}

int main() {
    try {
        printGreeting("Hello");
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}


























