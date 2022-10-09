#include <iostream>
#include <random>

int main(){
    int smallest{};
    int largest{};
    int guess{};
    int num2guess{};
    int num_guesses{1};
    bool condition = true;

    std::cout << "Welcome to the GUESSING GAME!" << std::endl;
    std::cout << "I will generate a number and you will guess it!" << std::endl;
    std::cout << "Please provide the smallest number: " << std::endl;
    std::cin >> smallest;
    std::cout << "Please provide the largest number: " << std::endl;
    std::cin >> largest;

    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution distribution{smallest, largest};
    num2guess = distribution(random_engine);

    std::cout << "I've generated a number. Try to guess it!" << std::endl;
    std::cin >> guess;

    while (condition){
        if (guess == num2guess){
            condition = false;
        }
        else if (guess < num2guess){
            std::cout << "Your number is too small. Try again!" << std::endl;
            std::cin >> guess;
            ++num_guesses;
        }
        else {
            std::cout << "Your number is too big. Try again!" << std::endl;
            std::cin >> guess;
            ++num_guesses;
        }
    }

    std::cout << "You've done it! You guessed the number "  << num2guess << " in " << num_guesses << " guesses!" << std::endl;

    return 0;

}