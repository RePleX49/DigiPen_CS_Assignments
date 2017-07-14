#include <iostream>

int userOption = 0;
int widthInput = 0;
int heightInput = 0;

void PrintOptions();
void PrintFilledRectangle();
void PrintNonFilledRectangle();
void PrintFilledTriangle();
void PrintNonFilledTriangle();

int main(void)
{
    
    bool isDrawing = false;

    do {
        PrintOptions();
        std::cout << "Your choice is : ";
        std::cin >> userOption;
        switch (userOption)
        {
        case 1:
            isDrawing = true;
            std::cout << "Enter the rectangle's width and height values: ";
            std::cin >> widthInput;
            std::cin >> heightInput;
            PrintFilledRectangle();
            break;
            
        case 2:
            isDrawing = true;
            std::cout << "Enter the rectangle's width and height values: ";
            std::cin >> widthInput;
            std::cin >> heightInput;
            PrintNonFilledRectangle();
            break;
            
        case 3:
            isDrawing = true;
            std::cout << "Enter the triangle height value: ";
            std::cin >> heightInput;
            PrintFilledTriangle();
            break;

        case 4:
            isDrawing = true;
            std::cout << "Enter the triangle height value: ";
            std::cin >> heightInput;
            PrintNonFilledTriangle();
            break;

        default:
            isDrawing = false;
        }
    }
    while(isDrawing);

    std::cout << "Thank you for using our application!" << std::endl;
    system("pause");
    return 0;
}

void PrintOptions()
{
    std::cout << "What would you like to draw?" << std::endl;
    std::cout << "1 - A Filled Rectangle" << std::endl;
    std::cout << "2 - A Non Filled Rectangle" << std::endl;
    std::cout << "3 - A Filled Triangle" << std::endl;
    std::cout << "4 - A Non Filled Triangle" << std::endl;
    std::cout << "Any Other Number - Exit" << std::endl;
    std::cout << std::endl;
    return;
}

void PrintFilledRectangle()
{
    if (widthInput == 0)
    {
        std::cout << "The rectangle width has to be at least 1\n";
        std::cout << std::endl;
    }
    else if (heightInput == 0)
    {
        std::cout << "The rectangle height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            for (int column = 0; column < widthInput; column++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

void PrintNonFilledRectangle()
{
    if (widthInput == 0)
    {
        std::cout << "The rectangle width has to be at least 1\n";
        std::cout << std::endl;
    }
    else if (heightInput == 0)
    {
        std::cout << "The rectangle height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            // print out full line if on top or bottom row
            if (row == 0 || row == (heightInput - 1))
            {
                for (int column = 0; column < widthInput; column++)
                {
                    std::cout << "*";
                }              
            }
            else // print only borders if not on top or bottom row
            {
                for (int column = 0; column < widthInput; column++)
                {
                    // check if we're on left or right border
                    if (column == 0 || column == (widthInput - 1))
                    {
                        std::cout << "*"; // print if on border
                    }     
                    else
                    {
                        std::cout << " "; // leave space if not on border
                    }
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

void PrintFilledTriangle()
{
    if (heightInput == 0)
    {
        std::cout << "The triangle height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            for (int column = 0; column < heightInput; column++)
            {
                std::cout << " ";
            }
            
            for (int column = 0; column < row + 1; column++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

void PrintNonFilledTriangle() // TODO replace code with nonfill code
{
    if (heightInput == 0)
    {
        std::cout << "The triangle height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            for (int column = 0; column < heightInput; column++)
            {
                std::cout << " ";
            }

            for (int column = 0; column < row + 1; column++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}