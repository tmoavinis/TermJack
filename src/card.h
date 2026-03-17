class card
{

private:
    std::string asciiArt;
    char type; // A = ace, 2 - 10, K = king, Q = queen, J = jack
    int score;

public:
    card() = default; //so that the compiler can shut up
    card(char cardType, std::string art)
    {
        type = cardType;
        asciiArt = art;

        switch (type)
        {
        case 'a':
            score = 1;
            asciiArt[62] = 'A';
            break;
        case 't':
            score = 10;
            asciiArt[61] = '1';
            asciiArt[62] = '0';
            break;
        case 'K' || 'Q' || 'J':
            score = 10;
            asciiArt[62] = type;
            break;
        default:
            score = atoi(&type);
            asciiArt[62] = type;
            break;
        }
    }

    std::string getAsciiArt(){
        return asciiArt;
    }
};