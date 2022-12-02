#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

void parttwo()
{
    std::string line;
    std::ifstream infile("file.txt");
    std::vector<std::string> strategy;
    while (getline(infile, line))
        strategy.push_back(line);

    std::map<std::string, int> plays = {
        {"A X", 3},
        {"A Y", 4},
        {"A Z", 8},
        {"B X", 1},
        {"B Y", 5},
        {"B Z", 9},
        {"C X", 2},
        {"C Y", 6},
        {"C Z", 7}
    };

    int score = 0;
    for (auto i : strategy)
        score += plays[i];

    std::cout << "Part 2: " << score << std::endl;
}

int main()
{
    parttwo();
    return 0;
}