#include <iostream>

int main(void)
{
    int playerOption = 0;
    int playerGuess = 0;
    std::cout << "Which game would you like to play?" << std::endl;
    std::cout << "1 - Human" << std::endl;
    std::cout << "2 - COmputer" << std::endl;
    std::cout << "Anything else to Exit!" << std::endl;
    std::cout << std::endl;

    std::cout << "Your Choice is: ";
    std::cin >> playerOption;
    std::cout << std::endl;

    switch (playerOption)
    {
    // Human guess
    case 1:
        std::cout << "Guess the number I'm thinking of (between 1 and 100, 0=quit): ";
        std::cin >> playerGuess;
        break;

    // Computer guess
    case 2:

        break;
    default:
        return 0;
    }
   
    return 0;
}