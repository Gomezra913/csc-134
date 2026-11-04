#include <iostream>
#include <string>
bool check(const std::string& guess); // prototype
int main() {
std::string guess;
std::cout << "Enter the vault password: ";
std::getline(std::cin, guess);
if (check(guess))
std::cout << "Access granted. flag{th3_b1nary_t0ld_m3}\n";
else
std::cout << "Access denied.\n";
return 0;
}
bool check(const std::string& guess) {
const std::string password = "cooldude420"; // stored in the clear
return guess == password;
}