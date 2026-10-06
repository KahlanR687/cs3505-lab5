#include <iostream>
#include <string>

std::string greeting(const std::string& name) {
    return "Hello, " + name + "!";
}

int main() {
    std::cout << greeting("Git user") << '\n';
    int y = 5;
    int z = 100;
    return 5;
}
