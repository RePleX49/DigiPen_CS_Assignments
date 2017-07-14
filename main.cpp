#include <iostream>
#include <iomanip>

int main(void)
{
    int userInput = 0;
    float ValueInput = 0.0f;
    float ValueOutput = 0.0f;
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    std::cout << "Choose out of the following options:" << std::endl;
    std::cout << "1 - Convert from Fahrenheit to Celsius" << std::endl;
    std::cout << "2 - Convert from Celsius to Fahrenheit" << std::endl;
    std::cout << "3 - Convert from Miles to Kilometers" << std::endl;
    std::cout << "4 - Convert from Kilometers to Miles" << std::endl;
    std::cout << "Press 1, 2, 3 or 4 to choose: ";
    std::cin >> userInput;

    switch (userInput)
    {
    case 1:
        std::cout << "Enter the temperature value in Fahrenheit: ";
        std::cin >> ValueInput;
        ValueOutput = (ValueInput - 32) * 5 / 9;
        std::cout << ValueInput << " Fahrenheit = "; 
        std::cout << ValueOutput << " Celsius" << std::endl;
        break;

    case 2:
        std::cout << "Enter the temperature value in Celsius: ";
        std::cin >> ValueInput;
        ValueOutput = ValueInput * 9 / 5 + 32;
        std::cout << ValueInput << " Celsius = ";
        std::cout << ValueOutput << " Fahrenheit" << std::endl;
        break;

    case 3:
        std::cout << "Enter the distance value in Miles: ";
        std::cin >> ValueInput;
        ValueOutput = ValueInput * 1.609347F;
        std::cout << ValueInput << " Miles = ";
        std::cout << ValueOutput << " Kilometers" << std::endl;
        break;

    case 4:
        std::cout << "Enter the distance value in Kilometers: ";
        std::cin >> ValueInput;
        ValueOutput = ValueInput / 1.609347F;
        std::cout << ValueInput << " Kilometers = ";
        std::cout << ValueOutput << " Miles" << std::endl;
        break;
    }
    system("pause");
    return 0;
}