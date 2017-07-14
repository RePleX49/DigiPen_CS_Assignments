#include <iostream>
#include <iomanip>

int main(void)
{
    float DollarValue = 0.0f;
    float PoundValue = 0.0f;
    float EuroValue = 0.0f;
    std::cout << "Enter an amount of money in Dollars: " << std::endl;
    std::cin >> DollarValue; // get user input dollar amount and store it
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    std::cout << "Amount Entered: " << DollarValue << std::endl;

    // Convert Dollar to Pound and Euro Values
    PoundValue = DollarValue * 0.76f;
    EuroValue = DollarValue * 0.89f;

    // Print Currency type with justifications
    std::cout << std::left;

    std::cout << std::setw(15);
    std::cout << "Dollars";

    std::cout << std::setw(15);
    std::cout << "Pounds";

    std::cout << std::setw(15);
    std::cout << "Euros" << std::endl;

    std::cout << "---------------------------------------------" << std::endl;
    
    // Print actual currency values with justifications
    std::cout << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    std::cout << std::left;

    std::cout << std::setw(15);  
    std::cout << DollarValue;

    std::cout << std::setw(15);
    std::cout << PoundValue;

    std::cout << std::setw(15);
    std::cout << EuroValue << std::endl;

    system("pause");
    return 0;
}