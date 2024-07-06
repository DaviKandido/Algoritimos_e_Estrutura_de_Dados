#include <iostream>
#include <string>
#include <limits>

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int getInt() {
    std::string input;
    std::cin >> input;
    
    int result = 0;
    bool isNegative = false;
    std::size_t start = 0;

    // Check for negative sign
    if (input[0] == '-') {
        isNegative = true;
        start = 1;
    }

    for (std::size_t i = start; i < input.size(); ++i) {
        if (!isDigit(input[i])) {
            return -1; // Return -1 if any character is not a digit
        }
        result = result * 10 + (input[i] - '0');
        
        // Check for overflow
        if (result < 0) {
            return -1; // Return -1 if overflow happens
        }
    }   

    return isNegative ? -result : result;
}

int main() {
    std::cout << "Digite uma string para converter para inteiro: ";
    int value = getInt();
    if (value == -1) {
        std::cout << "Entrada inválida ou fora do intervalo.\n";
    } else {
        std::cout << "O valor inteiro é: " << value << std::endl;
    }
    return 0;
}
