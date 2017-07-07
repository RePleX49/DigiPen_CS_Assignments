#include <iostream>
#include <iomanip>

int main(void)
{
    float DollarValue = 0.0f;
    float PoundValue = 0.0f;
    float EuroValue = 0.0f;
    std::cout << "Enter an amount of money in Dollars:";
    std::cin >> DollarValue; // get user input dollar amount and store it
    std::cout << "Amount Entered: " << DollarValue << std::endl;
    std::cout << std::endl;

    // Convert Dollar to Pound and Euro Values
    PoundValue = DollarValue * 0.76;
    EuroValue = DollarValue * 0.89;

    // Print Currency type with justifications
    std::cout << std::setw(37);

    std::cout << std::left;
    std::cout << "Dollars";

    std::cout << std::internal;
    std::cout << "Pounds";
    
    std::cout << std::right;
    std::cout << "Euros" << std::endl;

    std::cout << std::setw(45);
    std::cout << "---------------------------------------------" << std::endl;



    system("pause");
    return 0;
}