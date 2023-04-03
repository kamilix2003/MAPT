#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    int line_number = 0;
    std::ifstream even_lines("./A02.txt");
    std::ifstream odd_lines("./A01.txt");
    std::ofstream output("merged.txt");
    std::string even_line, odd_line;

    if(even_lines.is_open() && odd_lines.is_open())
    {
        while(std::getline(even_lines, even_line) 
            && std::getline(odd_lines,odd_line))
        {
            output << std::setfill('0') << std::setw(3) 
                << line_number << " " << odd_line << std::endl
                << std::setfill('0') << std::setw(3) 
                << line_number+1 << " " << even_line << std::endl;
            line_number+=2;
        }
    }

}