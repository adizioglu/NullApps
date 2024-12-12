#include <iostream>
#include <optional>
#include <string>

// null - lack of value

// Haven't asked for the age yet
std::optional<int> age = std::nullopt;
std::optional<bool> birthday = std::nullopt;
std::optional<double> battingAverage = std::nullopt;
std::optional<double> accountBalance = std::nullopt;
std::optional<std::string> firstName = std::nullopt;

// We have asked for the age now
age = 0;

int main() {
    // Example usage
    if (age.has_value()) {
        std::cout << "Age: " << age.value() << std::endl;
    }
    else {
        std::cout << "Age not set" << std::endl;
    }
    return 0;
}
