#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Digite a string que deseja inverter: ";
    std::getline(std::cin, str);

    int n = str.length();

    for (int i = 0; i < n / 2; ++i) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    std::cout << "String invertida: " << str << std::endl;

    return 0;
}
