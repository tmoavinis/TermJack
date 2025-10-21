#include <iostream>
#include <fstream>
#include <string>

#include "card.h"


//opens the file from the path and exctracts a string from inside it
std::string getArtFromFile(std::string filepath)
{

    std::ifstream tempFile(filepath);
    if (!tempFile.is_open())
    {
        std::cerr << "Error opening " << filepath << ".\n";
        return "ERROR";
    }
    std::string tempString;
    tempString.assign(std::istreambuf_iterator<char>(tempFile), std::istreambuf_iterator<char>());
    tempFile.close();

    return tempString;
}

int main()
{
    std::string bannerString = getArtFromFile("../assets/banner");

    std::string cardArt[4];

    cardArt[0] = getArtFromFile("../assets/spades_card");
    cardArt[1] = getArtFromFile("../assets/hearts_card");
    cardArt[2] = getArtFromFile("../assets/diamonds_card");
    cardArt[3] = getArtFromFile("../assets/clubs_card");

    std::cout << bannerString;

    for(int i = 0; i < 4 ; i++) {
        
    }

    return 0;
}
