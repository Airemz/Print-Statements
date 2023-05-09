// accessing libraries?
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

//Function declarations
int main();

// Function definitions
int main() {
    std::cout << "Hi";
    std::cout << "There";
    std::cout << std::endl;
    
    // M_PI(regular pi) needs math define in VSCODE but not in repl
    std::cout << std::sin(M_PI/4.0) << std:: endl;
    
    // use \ (backslash) to add quotations and tabs
    std::cout << "My name is \"Sadiq\"! \t bye," << std::endl;
    return 0;
}
