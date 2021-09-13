#include <iostream>
#include <string>
#include <math.h>

void calories_statistics(std::string name_person, int calories_received, int calories_spent) {                        // 1. Аргументы функции : имя пользователя, калории — потраченные, калории — полученные.

    if (calories_received > calories_spent) {                                                                         // 2. Сравнение значений двух аргументов: потраченная и полученная калорийность.
        int difference_fat = calories_received - calories_spent;
        double kkal_in_gramm_fat = difference_fat / 9.3;                                                              // 3. Исчисление грамм жира из избытка килокалорий.
        std::cout << std::endl << name_person << ", вы набираете вес." << std::endl;
        std::cout << "За сегодня накоплено: " << abs(difference_fat) << " килокалорий." << std::endl;                 // 4. Значение накопленных граммов жира по модулю.

        if (kkal_in_gramm_fat >= 0) {
            std::cout << "Что соответствует набору в " << kkal_in_gramm_fat << " грамм жира." << std::endl;           // 5. Вывод значения 3-го пункта.
        }
    }

    else if (calories_spent > calories_received) {                                                                    // 6. Сравнение значений двух аргументов: потраченная и полученная калорийность.
        int difference_skinny = calories_spent - calories_received;
        double kkal_in_gramm_fat = difference_skinny / 9.3;                                                           // 7. Исчисление грамм жира из потраченых килокалорий.
        std::cout << std::endl << name_person << ", вы теряете вес." << std::endl;
        std::cout << "За сегодня потрачено: " << abs(difference_skinny) << " килокалорий." << std::endl;              // 8. Значение потраченных граммов жира по модулю.

        if (kkal_in_gramm_fat >= 0) {
            std::cout << "Что соответствует потере в " << kkal_in_gramm_fat << " грамм жира." << std::endl;           // 9. Вывод значения 7-го пункта.
        }
    }

    else { std::cout << name_person << ", за сегодня уровень калорий остался неизменным." << std::endl; }             // 10. Вывод значения при отсутствии накопления/траты килокалорий.
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::string input_name_person;
    int  input_calories_received, input_calories_spent;
    std::cout << "Введите пожалуйста имя на английском: ";                                                            // 11. Ввод имени пользователем.
    std::cin >> input_name_person;
    std::cout << "Введите количество полученных за день килокалорий: ";                                               // 12. Ввод значения полученных пользователем за сутки килокалорий.
    std::cin >> input_calories_received;
    std::cout << "Введите количество потраченных килокалорий: ";                                                      // 13. Ввод значения потраченых пользователем килокалорий за сутки.
    std::cin >> input_calories_spent;
    calories_statistics(input_name_person, input_calories_received, input_calories_spent);                            // 14. Получение итоговых данных.
}
