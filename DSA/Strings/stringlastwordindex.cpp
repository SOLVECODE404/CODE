#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

std::string rearrangeString(const std::string &input)
{
    std::istringstream iss(input);
    std::string word;
    std::unordered_map<int, std::string> wordMap;

    while (iss >> word)
    {
        std::string temp = "";
        int index = 0;
        for (int i = word.size() - 1; i >= 0; --i)
        {
            if (isdigit(word[i]))
            {
                index = word[i] - '0';
            }
            else
            {
                temp = word[i] + temp;
            }
        }
        wordMap[index] = temp;
    }

    std::string output = "";
    for (int i = 1; i <= wordMap.size(); ++i)
    {
        output += wordMap[i];
        if (i < wordMap.size())
        {
            output += " ";
        }
    }

    return output;
}

int main()
{
    std::string input = "is2 a3 book4 this1";
    std::string output = rearrangeString(input);
    std::cout << "Output: " << output << std::endl;
    return 0;
}
