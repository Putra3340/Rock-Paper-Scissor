#include <iostream>
#include <string>
#include <random>

namespace game {
    int generate() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distribution(1, 3);
        int botchoiche = distribution(gen);
        std::string botrespond;
        return botchoiche;
	}
    void result(int user,int bot) {
        if (user == 1 && bot == 3){std::cout << "You Won!" << std::endl;}
        else if (user == 3 && bot == 1){std::cout << "You Lose!" << std::endl;}
        else if (user == bot){std::cout << "Draw!" << std::endl;}
        else if (user > bot){std::cout << "You Won!" << std::endl;}
        else if (user < bot){std::cout << "You Lose!" << std::endl;}
    }
}
// im bored so i make this hehe
int main() {
    // bot
    int userinput;
    int botresult = game::generate();
    std::cout << "1.Rock" << std::endl << "2.Paper" << std::endl << "3.Scissor" << std::endl << "Your Choice: " ;
    std::cin >> userinput;
    std::cout << "Bot Choice is : " << botresult << std::endl;
    game::result(userinput, botresult);
    return 0;
}