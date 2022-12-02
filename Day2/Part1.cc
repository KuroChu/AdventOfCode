#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

void partone()
{
    std::string line;
    std::ifstream infile("file.txt");
    std::vector<std::string> strategy;
    while (getline(infile, line))
        strategy.push_back(line);

    std::map<std::string, int> plays = {
        {"A X", 4},
        {"A Y", 8},
        {"A Z", 3},
        {"B X", 1},
        {"B Y", 5},
        {"B Z", 9},
        {"C X", 7},
        {"C Y", 2},
        {"C Z", 6}
    };

    int score = 0;
    for (auto i : strategy)
        score += plays[i];

    std::cout << "Part 1: " << score << std::endl;
}

int main()
{
    partone();
    return 0;
}