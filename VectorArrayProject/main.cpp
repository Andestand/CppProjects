#include<iostream>
#include<vector>


int input(std::string text) {
    setlocale(LC_ALL, "Russian");
    int number;
    std::cout << text;
    std::cin>> number;
    return number;
}

std::string inputString(std::string text) {
    setlocale(LC_ALL, "Russian");
    std::string lang;
    std::cout << text;
    std::cin>> lang;
    return lang;
}

int console() {
    int number;
    std::vector<std::string> languages(1);

    while (true)
    {
        std::cout << "0 -> выход из программы\n"
        "1 -> добавление слова в динамический массив\n"
        "2 -> вывод всех слов массива\n" << std::endl;

        number = input("Введиту определённую цифру: ");

        switch (number)
        {
        case 0:
            break;

        case 1:
            languages.push_back(inputString("Введите любое слово: "));
            break;
        
        case 2:
            std::cout << "----------------------" << std::endl;
            for (auto &&i : languages)
            {
                std::cout << i << std::endl;
            }
            std::cout << "----------------------" << std::endl;

            break;
        
        default:
            std::cout << "Нет такого варианта ответа." << std::endl;
            break;
        }

        if (number == 0)
        {
            break;
        }
    }
    return number;
}

int main() {
    //console();
}
