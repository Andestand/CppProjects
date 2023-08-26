#include<iostream>

enum Colors {
    RED = 1,
    GREEN = 2,
    BLACK = 3,
    BLUE = 4,
    WHITE = 5,
    YELLOW = 6,

};

int input(std::string text) {
    setlocale(LC_ALL, "Russian");
    int text_;
    std::cout << text;
    std::cin>> text_;
    return text_;
}

void setMethod() {
    setlocale(LC_ALL, "Russian");
    int color;

    std::cout 
    << "-----------------" << std::endl

    << "0 -> завершить работу" << std::endl

    << "1 -> Красный" << std::endl

    << "2 -> Зелёный" << std::endl

    << "3 -> Чёрный" << std::endl

    << "4 -> Синий" << std::endl

    << "5 -> Белый" << std::endl

    << "6 -> Жёлтый" << std::endl

    << "-----------------" << std::endl
    << std::endl;

    while (true)
    {
        color = input("Введите номер цвета: ");

        switch (color)
        {
            case RED:
                std::cout << "Красный" << std::endl;
                break;

            case GREEN:
                std::cout << "Зелёный" << std::endl;
                break;

            case BLACK:
                std::cout << "Чёрный" << std::endl;
                break;

            case BLUE:
                std::cout << "Синий" << std::endl;
                break;

            case WHITE:
                std::cout << "Белый" << std::endl;
                break;

            case YELLOW:
                std::cout << "Жёлтый" << std::endl;
                break;
            
            case 0:
                break;

            default:
                std::cout << "Нету такого цвета в каталоге!" << std::endl;
                break;
            
        }

        if (color == 0)
        {
            break;
        }
    }
}

int main() {
    setMethod();
}
