#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <array>

int main(){
    const std::map<std::string, std::string> season_map{{"spring", "STL guru"},
                                                        {"summer", "C++ expert"},
                                                        {"autumn", "coding beast"},
                                                        {"winter", "software design hero"}};
    
    const std::array ending{"eats UB for breakfast", "finds errors quicker than the compiler", "is not afraid of C++ error messages"};

    std::string name{};
    std::string season{};
    std::string tmp{};
    std::vector<std::string> adj = {};
    int idx1 {};
    int idx2 {};

    std::cout << "Welcome to the fortune teller program!" << std::endl;
    std::cout << "Please enter your name:" << std::endl;
    std::cin >> name;
    std::cout << "Please enter the time of year when you were born:" << std::endl;
    std::cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << std::endl;
    std::cin >> season;
    std::cout << "Please enter an adjective:" << std::endl;
    std::cin >> tmp;
    adj.reserve(adj.size() + 1UL);
    adj.emplace_back(tmp);
    std::cout << "Please enter another adjective:" << std::endl;
    std::cin >> tmp;
    adj.reserve(adj.size() + 1UL);
    adj.emplace_back(tmp);

    idx1 = name.size() % adj.size();
    idx2 = name.size() % ending.size();

    std::cout << std::endl;
    std::cout << "Here is your description:" << std::endl;
    std::cout << name << ", the " << adj[idx1] << " " << season_map.at(season) << " that " << ending[idx2] << std::endl;
    return 0;
}