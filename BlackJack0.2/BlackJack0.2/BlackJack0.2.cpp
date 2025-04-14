#include <iostream>
#include <vector>

using namespace std;

void Roll(vector <int> &deck1, vector <int> &deck2, vector <int> &deck3, vector <int> &deck4, vector <int> &val, vector<string> &type, vector<string> &suit,int &aces)
{
    int temp1 = 0;
    int temp2 = 0;
    
    temp2 = rand() % 4;
 
    switch (temp2)
    {
    case 0:
        temp1 = rand() % deck1.size();
        switch (deck1.at(temp1))
        {
        case 2:
            type.push_back("Two");
            val.push_back(2);
            break;
        case 3:
            type.push_back("Three");
            val.push_back(3);
            break;
        case 4:
            type.push_back("Four");
            val.push_back(4);
            break;
        case 5:
            type.push_back("Five");
            val.push_back(5);
            break;
        case 6:
            type.push_back("Six");
            val.push_back(6);
            break;
        case 7:
            type.push_back("Seven");
            val.push_back(7);
            break;
        case 8:
            type.push_back("Eight");
            val.push_back(8);
            break;
        case 9:
            type.push_back("Nine");
            val.push_back(9);
            break;
        case 10:
            type.push_back("Ten");
            val.push_back(10);
            break;
        case 11:
            type.push_back("Queen");
            val.push_back(10);
            break;
        case 12:
            type.push_back("King");
            val.push_back(10);
            break;
        case 13:
            type.push_back("Ace");
            val.push_back(11); aces++;
            break;
        }
        break;
    case 1:
        temp1 = rand() % deck2.size();
        switch (deck2.at(temp1))
        {
        case 2:
            type.push_back("Two");
            val.push_back(2);
            break;
        case 3:
            type.push_back("Three");
            val.push_back(3);
            break;
        case 4:
            type.push_back("Four");
            val.push_back(4);
            break;
        case 5:
            type.push_back("Five");
            val.push_back(5);
            break;
        case 6:
            type.push_back("Six");
            val.push_back(6);
            break;
        case 7:
            type.push_back("Seven");
            val.push_back(7);
            break;
        case 8:
            type.push_back("Eight");
            val.push_back(8);
            break;
        case 9:
            type.push_back("Nine");
            val.push_back(9);
            break;
        case 10:
            type.push_back("Ten");
            val.push_back(10);
            break;
        case 11:
            type.push_back("Queen");
            val.push_back(10);
            break;
        case 12:
            type.push_back("King");
            val.push_back(10);
            break;
        case 13:
            type.push_back("Ace");
            val.push_back(11); aces++;
            break;
        }
        break;
    case 2:
        temp1 = rand() % deck3.size();
        switch (deck3.at(temp1))
        {
        case 2:
            type.push_back("Two");
            val.push_back(2);
            break;
        case 3:
            type.push_back("Three");
            val.push_back(3);
            break;
        case 4:
            type.push_back("Four");
            val.push_back(4);
            break;
        case 5:
            type.push_back("Five");
            val.push_back(5);
            break;
        case 6:
            type.push_back("Six");
            val.push_back(6);
            break;
        case 7:
            type.push_back("Seven");
            val.push_back(7);
            break;
        case 8:
            type.push_back("Eight");
            val.push_back(8);
            break;
        case 9:
            type.push_back("Nine");
            val.push_back(9);
            break;
        case 10:
            type.push_back("Ten");
            val.push_back(10);
            break;
        case 11:
            type.push_back("Queen");
            val.push_back(10);
            break;
        case 12:
            type.push_back("King");
            val.push_back(10);
            break;
        case 13:
            type.push_back("Ace");
            val.push_back(11); aces++;
            break;
        }
        break;
    case 3:
        temp1 = rand() % deck4.size();
        switch (deck4.at(temp1))
        {
        case 2:
            type.push_back("Two");
            val.push_back(2);
            break;
        case 3:
            type.push_back("Three");
            val.push_back(3);
            break;
        case 4:
            type.push_back("Four");
            val.push_back(4);
            break;
        case 5:
            type.push_back("Five");
            val.push_back(5);
            break;
        case 6:
            type.push_back("Six");
            val.push_back(6);
            break;
        case 7:
            type.push_back("Seven");
            val.push_back(7);
            break;
        case 8:
            type.push_back("Eight");
            val.push_back(8);
            break;
        case 9:
            type.push_back("Nine");
            val.push_back(9);
            break;
        case 10:
            type.push_back("Ten");
            val.push_back(10);
            break;
        case 11:
            type.push_back("Queen");
            val.push_back(10);
            break;
        case 12:
            type.push_back("King");
            val.push_back(10);
            break;
        case 13:
            type.push_back("Ace");
            val.push_back(11); aces++;
            break;
        }
        break;
    }
    
    switch (temp2)
    {
    case 0:
        suit.push_back("diamonds");
        deck1.erase(deck1.begin() + temp1);
        break;
    case 1:
        suit.push_back("spades");
        deck2.erase(deck2.begin() + temp1);
        break;
    case 2:
        suit.push_back("clubs");
        deck3.erase(deck3.begin() + temp1);
        break;
    case 3:
        suit.push_back("hearts");
        deck4.erase(deck4.begin() + temp1);
        break;
    }
}

void OutputPlayerCards(vector<string> playerCardName, vector<string> playerCardType)
{
    cout << "(You have a(n) " << playerCardName[0] << " of " << playerCardType[0];

    if (playerCardName.size() >= 2) {
        for (int i = 1; i < playerCardName.size() - 1; i++)
        {
            cout << ", a(n)" << playerCardName[i] << " of " << playerCardType[i];

        }
        cout << " and a(n) " << playerCardName[playerCardName.size() - 1] << " of " << playerCardType[playerCardName.size() - 1] << ")" << endl << endl;
    }
    else cout << ")" << endl << endl;
}
void OutputDealerCards(vector<string> playerCardName, vector<string> playerCardType)
{
    cout << "(The dealer has a(n) " << playerCardName[0] << " of " << playerCardType[0];

    if (playerCardName.size() >= 2) {
        for (int i = 1; i < playerCardName.size() - 1; i++)
        {
            cout << ", a(n)" << playerCardName[i] << " of " << playerCardType[i];

        }
        cout << " and a(n) " << playerCardName[playerCardName.size() - 1] << " of " << playerCardType[playerCardName.size() - 1] << ")" << endl << endl;
    }
    else cout << ")" << endl << endl;
}

bool HitOrStand()
{
    string inStr;
    cout << "Hit or stand?" << endl;
    cin >> inStr;
    if (inStr == "Hit" || inStr == "hit")
        return true;
    else if (inStr == "Stand" || inStr == "stand")
        return false;
    else {
        cout << "Im gonna assume you mean stand.   (avaliable inputs are Hit or Stand and the all lowercaseversions of them)";
        return false;
    }
}

int Game(int chips)
{
    //Had to make vectors because I couldn't reference an array
    vector <int> deck1 = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }; //Diamonds
    vector <int> deck2 = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }; //Spades
    vector <int> deck3 = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }; //Clubs
    vector <int> deck4 = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }; //Hearts

    vector <string> playerType, playerSuits;
    vector <int> playerVal;
    int playerAces = 0, playerTotal = 0;

    vector <string> dealerType, dealerSuits;
    vector <int> dealerVal;
    int dealerAces = 0, dealerTotal = 0;

    int hasWon = 0;

    bool playerTurn = true, dealerTurn = true;
    

    for (int i = 0; i < 2; i++)
    {
        Roll(deck1, deck2, deck3, deck4, playerVal, playerType, playerSuits, playerAces);
        Roll(deck1, deck2, deck3, deck4, dealerVal, dealerType, dealerSuits, dealerAces);
    }
    
    OutputPlayerCards(playerType, playerSuits);
    cout << "Dealer has a(n) " << dealerType.at(0) << " of " << dealerSuits.at(0) << " and another card face down." << endl;
    
    playerTotal = playerVal.at(0) + playerVal.at(1);

    
    if (playerTotal > 21 && playerAces != 0)
    {
        playerTotal -= 10;
        playerAces--;
    }

    playerTurn = HitOrStand();
    
    while (playerTurn)
    {
        Roll(deck1, deck2, deck3, deck4, playerVal, playerType, playerSuits, playerAces);

        OutputPlayerCards(playerType, playerSuits);
        playerTotal += playerVal.back();
        if (playerTotal > 21 && playerAces > 0)
        {
            playerTotal -= 10;
            playerAces--;
        }
        else if (playerTotal > 21)
        {
            cout << "BUST" << endl;
            playerTurn = false;
            dealerTurn = false;
            break;
        }
        //cout << "Player's count (debug)" << playerTotal<< endl;
        playerTurn = HitOrStand();
    }

    dealerTotal = dealerVal.at(0) + dealerVal.at(1);
    while (dealerTurn)
    {
        //cout << "dealer's count before aces (debug)" << dealerTotal << endl;
        if(dealerTotal > 21 && dealerAces > 0)
        {
            dealerTotal -= 10;
            dealerAces--;
        }
        else if (dealerTotal > 21)
        {
            dealerTurn = false;
            break;
        }
    //cout << "dealer's count after aces (debug)" << dealerTotal << endl;
        if (dealerTotal < playerTotal)
        {
            Roll(deck1, deck2, deck3, deck4, dealerVal, dealerType, dealerSuits, dealerAces);
            dealerTotal += dealerVal.back();
        }
        else dealerTurn = false;
    }
    //cout << "Player's count (debug)" << playerTotal << endl;
    //Evaluate round's conclusion
    if (playerTotal > 21)
        hasWon = 0;
    else if (dealerTotal > 21)
        hasWon = 1;
    else if (dealerTotal < playerTotal)
        hasWon = 1;
    else if (dealerTotal > playerTotal)
        hasWon = 0;
    else if (dealerTotal == playerTotal)
        if (dealerAces > playerAces)
            hasWon = 0;
        else if (dealerAces < playerAces)
            hasWon = 1;
        else hasWon = 2;

    OutputDealerCards(dealerType, dealerSuits);


    //Roll(deck1, deck2, deck3, deck4, playerVal, playerType, playerSuits); //The decks 4 suits and then val, type, and suit.
    return hasWon;
}

bool StartRound() 
{
    bool startRound = true;
    string tempStr;

    cout << "Start round?" << endl << "yes, or no" << endl;
    cin >> tempStr;
    cout << endl;
    
    if (tempStr == "yes" || tempStr == "Yes") { startRound = true; }
    else if (tempStr == "no" || tempStr == "No") { startRound = false; }
    else cout << "Starting round anyway.    (If you wanted to quit, enter in \"no\" or \"No\" next time.)";
    return startRound;
}

int EvaluateChips(int chipsBet, int hasWon)
{
    switch (hasWon)
    {
    case 0:
        chipsBet = -chipsBet;
        break;
    case 1:
        //chipsBet = chipsBet; thanks ChatGPT
        break;
    case 2:
        chipsBet = 0;
        break;
    }
    return chipsBet;
}

int main() //Like unity's start
{
    cout << "(You are allowed to go negative in chips)" << endl << endl;
    srand(time(0));
    
    bool startRound = true;
    int hasWon = 0;
    
    int chips = 100;
    int chipsBet;

    startRound = StartRound();
    

    while (startRound)
    {
        cout << "You have " << chips << " chips." << endl;
        cout << "Enter bet: ";
        while (!(cin >> chipsBet) || chipsBet <= 0) //I needed ChatGPT to write this because I had an infinite loop if anything but an integer was entered.
        {
            cout << "Invalid input. Please enter a positive number: ";
            cin.clear();  // Clear the error flag
            cin.ignore(1000, '\n');  // Ignore incorrect input
        }
        
        cout << endl << "----------------------------------------" << endl << endl;
        
        hasWon = Game(chipsBet);
        chips += EvaluateChips(chipsBet, hasWon);

        cout << endl << "----------------------------------------" << endl << endl;

        cout << "You now have " << chips << " chips.";
        startRound = StartRound();
    }
}