class card
{

private:
    // a = ace, 2 - 10, k = king, q = queen, j = jock
    std::string asciiArt;
    char type;
    int score;

public:
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
        case 'k' || 'q' || 'j':
            score = 10;
            asciiArt[62] = type;
            break;
        default:
            score = atoi(&type);
            asciiArt[62] = type;
            break;
        }
    }
};