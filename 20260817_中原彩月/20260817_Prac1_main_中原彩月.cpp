#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header_中原彩月.h"
using namespace std;

// プレイヤーが選択できる球種の最小値・最大値
const int PITING_MIN = 0;
const int PITING_MAX = 3;

// 乱数を0～3の4種類で発生させるための値
const int PROBABILITY = 4;

// ストライク、ボール、アウト、ヒットの成立条件
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    // ply：プレイヤーが選択した球種　emy：CPUが選択する球種
    int ply, emy;
    
    // prod：結果を決定するための乱数
    int prod;

    // 1打席分のストライク・ボール数と、ゲーム全体のアウト・ヒット数を管理する
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;

    // 現在時刻を利用して乱数の初期値を設定する
    // 毎回異なるゲーム結果にする
    // 乱数初期化
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    // アウトが3になる、またはヒットが4になるまでゲームを繰り返す
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        // プレイヤーに投球する球種を選択させる
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;

        // 正しい球種番号が入力されるまで入力を繰り返す
        while (true)
        {
            cin >> ply;

            // 0～3以外が入力された場合はエラーとして再入力を要求する
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                // 正しい入力の場合、入力チェックを終了する
                break;
            }
        }

        // プレイヤーが選択した球種を表示する
        PitingType(ply);

        // CPU側の球種を0～3の乱数で決定する
        emy = rand() % PROBABILITY;

        // 投球結果を決めるための乱数を0～3で生成する
        prod = rand() % PROBABILITY;

        // プレイヤーとCPUの球種が異なる場合
        if (ply != emy)
        {
            // 1/4の確率でボール、それ以外はストライク
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }

        // プレイヤーとCPUの球種が一致した場合
        else
        {
            // 打球により、現在のストライク・ボール数をリセット
            Strike = 0;
            Ball = 0;

            // 1/4の確率でアウト、それ以外はヒット
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }

        // ストライクが3つ、またはボールが4つになった場合、その結果をアウトまたはヒットとして確定する
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            // ストライク3つの場合はアウト
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            // ボール4つの場合はヒット
            else
            {
                Hit++;
            }

            // 次の打席に向けてストライク・ボール数をリセットする
            Strike = 0;
            Ball = 0;
        }

        // 現在のゲーム状況を表示する
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;
    }

    // ゲーム終了後、アウト数をもとに勝敗を表示する
    Result(Out);

    return 0;
}
