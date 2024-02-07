#include <iostream>
#include <cctype>

int main() {
    std::string username;
while(true){

    // Get user input
    std::cout << "\n\n\t\tEnter new username: ";
    getline(std::cin, username);

    bool isTrue = true;

    for (char c : username) {
        if (!std::isalpha(c)) {
            isTrue = false;
            break;
        }
    }

    // Display result
    if (!isTrue) {
        std::cout << "Error: Enter alphabets only." << std::endl;
    } else {
        std::cout << "Username is valid: " << username << std::endl;
    }
}
    return 0;
}
