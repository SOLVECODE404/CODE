#include<bits/stdc++.h>

int main()
{
    std::string input;
    std::cout << "Enter input string: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;
    std::vector<std::string> words;
    while (iss >> word)
    {
        words.push_back(word);
    }

    std::string output;
    for (size_t i = 0; i < words.size(); ++i)
    {
        int index = std::stoi(words[i]);
        if (index >= 1 && index <= words.size())
        {
            output += words[index - 1];
            if (i < words.size() - 1)
            {
                output += " ";
            }
        }
        else
        {
            std::cerr << "Invalid index found: " << index << std::endl;
            return 1;
        }
    }

    std::cout << "Output: " << output << std::endl;
    return 0;
}
