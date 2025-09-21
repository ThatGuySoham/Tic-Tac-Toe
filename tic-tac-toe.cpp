#include <iostream>
using namespace std;

char table[3][3]={{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int row, col;
string n1, n2;
char token = 'x';

void player_names() {
    cout<<"Enter name of Player 1: \n";
    getline(cin, n1);
    cout<<"Enter name of Player 2: \n";
    getline(cin, n2);
    cout<<n1<<" is first to move. \n";
}

void grid() {
    cout<<"     |     |      \n";
    cout<<"  "<<table[0][0]<<"  |  "<<table[0][1]<<"  |  "<<table[0][2]<<"  \n";
    cout<<"_____|_____|_____ \n";
    cout<<"     |     |      \n";
    cout<<"  "<<table[1][0]<<"  |  "<<table[1][1]<<"  |  "<<table[1][2]<<"  \n";
    cout<<"_____|_____|_____ \n";
    cout<<"     |     |      \n";
    cout<<"  "<<table[2][0]<<"  |  "<<table[2][1]<<"  |  "<<table[2][2]<<"  \n";
    cout<<"     |     |      \n";
}

void checker() {
    int digit;

    if (token == 'x') {
        cout<<n1<<" please enter ";
        cin>>digit;
    } else {
        cout<<n2<<" please enter ";
        cin>>digit;
    }

    if (digit < 1 || digit > 9) {
        cout<<"Invalid move! Choose a number between 1 and 9.\n";
        checker();
        return;
    }

    row = (digit-1)/3;
    col = (digit-1)%3;

    if (table[row][col] == 'x' || table[row][col] == '0') {
        cout << "Spot already taken! Choose another.\n";
        checker();
        return;
    }

    table[row][col] = token;
}

bool WinCheck() {
    
    if (table[0][0] == token && table[0][1] == token && table[0][2] == token) return true;
    if (table[1][0] == token && table[1][1] == token && table[1][2] == token) return true;
    if (table[2][0] == token && table[2][1] == token && table[2][2] == token) return true;

    if (table[0][0] == token && table[1][0] == token && table[2][0] == token) return true;
    if (table[0][1] == token && table[1][1] == token && table[2][1] == token) return true;
    if (table[0][2] == token && table[1][2] == token && table[2][2] == token) return true;

    if (table[0][0] == token && table[1][1] == token && table[2][2] == token) return true;
    if (table[2][0] == token && table[1][1] == token && table[0][2] == token) return true;

    return false;
}

int main() {
    player_names();
    grid();

    for (int i=0; i<9; i++) {
        checker(); 
        grid();

        if (WinCheck()) {
            if (token == 'x') cout << n1 << " wins!\n";
            else cout << n2 << " wins!\n";
            return 0;
        }

        
        token = (token == 'x') ? '0' : 'x';
    }

    cout << "It's a draw!\n";
    return 0;
}
