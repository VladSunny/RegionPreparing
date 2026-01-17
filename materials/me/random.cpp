#include <iostream>
#include <random>
#include <chrono>

int main() {
    // Генератор случайных чисел (зерно на основе времени)
    std::mt19937 gen(std::chrono::steady_clock::now().time_since_epoch().count());
    
    // Распределение для целых чисел от 1 до 100
    std::uniform_int_distribution<int> dist(1, 100);
    
    // Генерация случайного числа
    int random_number = dist(gen);
    
    std::cout << "Случайное число: " << random_number << std::endl;
    
    return 0;
}

// #include <iostream>
// #include <random>

// int main() {
//     std::random_device rd;  // аппаратный генератор случайных чисел
//     std::mt19937 gen(rd()); // инициализируем генератор
//     std::uniform_int_distribution<> dist(1, 100); // диапазон
    
//     std::cout << "Случайное число: " << dist(gen) << std::endl;
    
//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// int main() {
//     // Инициализируем генератор текущим временем
//     std::srand(std::time(nullptr));
    
//     // Генерируем число от 0 до RAND_MAX
//     int random_num = std::rand();
    
//     // Для получения числа в определенном диапазоне (например, от 1 до 100)
//     int random_in_range = std::rand() % 100 + 1;
    
//     std::cout << "Случайное число: " << random_in_range << std::endl;
    
//     return 0;
// }