#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Card.h"
#include "Player.h"
using namespace std;

int main()
{
    srand((unsigned int)time(0));

    // 44枚のカードを作る
    vector<Card*> cards;

    for (int i = 1; i <= 11; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cards.push_back(new Card(i));
        }
    }

    Player player;
    Player cpu;

    cout << "21カードゲーム" << endl;

    // =================
    // 最初に2枚ずつ配る
    // =================
    for (int i = 0; i < 2; i++)
    {
        // Player
        int number = rand() % cards.size();

        Card* card = cards[number];

        // CPU
        number = rand() % cards.size();

        card = cards[number];
    }

    cout << endl;

    // ==============
    // Playerのターン
    // ==============
    cout << endl;
    cout << "Playerのターン" << endl;

    while (true)
    {
        // 21
        if (playerTotal == 21)
        {
            cout << "Playerは21になりました！" << endl;
            break;
        }
    }


    // ===========
    // CPUのターン
    // ===========


    // ========
    // 最終結果
    // ========


    // ========
    // 勝敗判定
    // ========

