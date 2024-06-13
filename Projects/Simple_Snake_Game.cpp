#include <iostream>
using namespace std;

bool gameOver;
const int width = 30;
const int height = 30;
int X, Y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

eDirection dir;

void setup()
{
    gameOver = false;
    dir = STOP;
    X = width / 2;
    Y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void draw()
{
    system("cls"); // In linux we use system("clear");

    for (int i = 0; i < width + 2; i++)
    {
        cout << "|" << endl;
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "|";

            cout << " ";

            if (j == width - 1)
            {
                cout << "|";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < width + 2; i++)
    {
        cout << "|" << endl;
    }
}

void input()
{
}

void logic()
{
}

int main()
{
    setup();
    while (!gameOver)
    {
        draw();
        input();
        logic();
    }
}