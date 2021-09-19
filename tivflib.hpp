#ifndef TIVFLIB_H
#define TIVFLIB_H

// This is the main file of tivflib
#include <string>
#include <iostream>


class tivf_img {    // Main image class
    public:
        void set_data(std::string arg) {data=arg;}
        void view_data(char* arg)
        {
            if(arg=="full") {
                int len=data.length();
                for (int i = 0; i < len; i++) {
                switch (data[i]) { // Get string representation
                case '0':
                std::cout << "\033[30m\u2587"; // Black square
                break;
            case 'R':
                std::cout << "\033[31m\u2587"; // Red square
                break;
            case 'G':
                std::cout << "\033[32m\u2587"; // Green square
                break;
            case 'O':
                std::cout << "\033[33m\u2587"; // Orange square
                break;
            case 'B':
                std::cout << "\033[34m\u2587"; // Blue square
                break;
            case 'M':
                std::cout << "\033[35m\u2587"; // Magenta square
                break;
            case 'C':
                std::cout << "\033[36m\u2587"; // Cyan square
                break;
            case 'L':
                std::cout << "\033[37m\u2587"; // Light gray square
                break;
            case 'D':
                std::cout << "\033[39m\u2587"; // Default color
                break;
            case 'N':
                std::cout << "\n"; // N newline
                break;
            case '\n': // ignore newlines
                break;
            default:
                std::cout << "\033[39m\u2587"; // Return to default color
                std::cout << "Undefined character in image!";
                exit(1); // exit with error
        }
    }
            }
            if(arg=="raw") {std::cout << data;}
        }
    private:
        std::string data;
};

#endif
