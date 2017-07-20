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
        std::cout << "Your choice is: ";
        std::cin >> userOption;
        std::cout << std::endl;

        switch (userOption)
        {
        case 1:
            isDrawing = true;
            std::cout << "Enter the rectangle's width and height values: ";
            std::cin >> widthInput;
            std::cin >> heightInput;
            std::cout << std::endl;
            PrintFilledRectangle();
            break;
            
        case 2:
            isDrawing = true;
            std::cout << "Enter the rectangle's width and height values: ";
            std::cin >> widthInput;
            std::cin >> heightInput;
            std::cout << std::endl;
            PrintNonFilledRectangle();
            break;
            
        case 3:
            isDrawing = true;
            std::cout << "Enter the triangle's height value: ";
            std::cin >> heightInput;
            std::cout << std::endl;
            PrintFilledTriangle();
            break;

        case 4:
            isDrawing = true;
            std::cout << "Enter the triangle's height value: ";
            std::cin >> heightInput;
            std::cout << std::endl;
            PrintNonFilledTriangle();
            break;

        default:
            isDrawing = false;
        }
    }
    while(isDrawing);

    std::cout << "Thank you for using our application!" << std::endl;
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
    if (widthInput < 1)
    {
        std::cout << "The rectangle width has to be at least 1\n";
        std::cout << std::endl;
    }
    else if (heightInput < 1)
    {
        std::cout << "The rectangle height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            // loop through columns and print filler
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
    if (widthInput < 1)
    {
        std::cout << "The rectangle width has to be at least 1\n";
        std::cout << std::endl;
    }
    else if (heightInput  < 1)
    {
        std::cout << "The rectangle height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            // print out full line if on top or bottom row
            if (row  < 1 || row == (heightInput - 1))
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
                    if (column  < 1 || column == (widthInput - 1))
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
    int columnLength = ((2* heightInput) - 1);
    int spaceLength = (columnLength - 1) / 2;
    int fillLength = columnLength - (spaceLength * 2);

    if (heightInput  < 1)
    {
        std::cout << "The triangle's height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {     
            // print leading spaces
            for (int i = 0; i < spaceLength; i++)
            {
                std::cout << " ";
            }

            // print filler stars
            for (int j = 0; j < fillLength; j++)
            {
                std::cout << "*";
            }

            // print trailing spaces
            for (int k = 0; k < spaceLength; k++)
            {
                std::cout << " ";
            }
            std::cout << std::endl;

            // modify space and fill lengths for next row
            spaceLength--;
            fillLength += 2;
        }
        std::cout << std::endl;
    }
}

void PrintNonFilledTriangle() // TODO replace code with nonfill code
{
    int columnLength = heightInput * 9 / 5;
    int spaceLength = (columnLength - 1) / 2;
    
    if (heightInput  < 1)
    {
        std::cout << "The triangle's height has to be at least 1\n";
        std::cout << std::endl;
    }
    else
    {
        for (int row = 0; row < heightInput; row++)
        {
            // Calculate center space for each new row
            int centerSpace = columnLength - ((spaceLength * 2) + 2);

            // print leading spaces
            for (int i = 0; i < spaceLength; i++)
            {
                std::cout << " ";
            }

            // print start fill
            std::cout << "*";

            for (int j = 0; j < centerSpace; j++)
            {
                if (row == heightInput - 1)
                {
                    // if we're on final row fill in all spaces
                    std::cout << "*"; 
                }
                else
                {
                    // if we're not on final row leave spaces
                    std::cout << " ";
                }               
            }
            
            // print end fill
            if (!(row  < 1))
            {
                std::cout << "*";
            }
            
            // print trailing spaces
            for (int k = 0; k < spaceLength; k++)
            {
                std::cout << " ";
            }
            std::cout << std::endl;

            spaceLength--;
        }
        std::cout << std::endl;
    }
}