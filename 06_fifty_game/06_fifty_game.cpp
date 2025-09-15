#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
enum Key
{
    LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80
};

int main()
{
    // create board 4 x 4
    const int SIZE = 4;
    int rnd[SIZE * SIZE]{};
    int board[SIZE][SIZE]{};
    srand(time(0));
    // fill  0 - 15 rnd
    int r, c;
    for (size_t i = 0; i < SIZE * SIZE; )
    {
        bool flag = true;
        int number = rand() % 16;

        for (size_t j = 0; j < i; j++)
        {
            if (rnd[j] == number) {
                flag = false;
                break;
            }
        }
        if (flag) {
            rnd[i] = number;
            i++;
        }
    }
    // copy in board
    
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            board[i][j] = rnd[SIZE * i + j];
        }
    }

    

    int counter = 0;
    int time_start = time(0);
    while (true)
    {
        system("cls");
        // print
        for (size_t i = 0; i < SIZE; i++)
        {
            for (size_t j = 0; j < SIZE; j++)
            {
                if (board[i][j] == 0) {
                    cout << "   ";
                    r = i;
                    c = j;
                    continue;
                }
                cout << (board[i][j] < 10 ? " " : "") << board[i][j] << " ";
            }
            cout << endl;
        }

        int step = _getch();


        switch (step)
        {
        case Key::LEFT:
            if (c == 0) {
                continue;
            }
            board[r][c] = board[r][c - 1];
            board[r][c - 1] = 0;
            break;

        case Key::RIGHT:
            if (c == SIZE-1) {
                continue;
            }
            board[r][c] = board[r][c + 1];
            board[r][c + 1] = 0;
            break;
        case Key::UP:
            if (r == 0) {
                continue;
            }
            board[r][c] = board[r - 1][c];
            board[r - 1][c] = 0;
            break;
        case Key::DOWN:
            if (r == SIZE - 1) {
                continue;
            }
            board[r][c] = board[r + 1][c];
            board[r + 1][c] = 0;
            break;
        }

        counter++;


    }
    int time_end = time(0);

    int result = time_end - time_start;


    /*for (size_t i = 127; i < 255; i++)
    {
        cout << i << " ==> " << (char)i << endl;
    }*/
}

