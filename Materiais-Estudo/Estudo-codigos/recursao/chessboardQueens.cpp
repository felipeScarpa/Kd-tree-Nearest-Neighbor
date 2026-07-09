#include <iostream>
#include <vector>
#include <string>

std::vector<std::vector<char>>board(9, std::vector<char>(9));

int total=0;

void solve(std::string queens, int n){
    if(n == 9){
        total++;
        return;
    }
    for(int i=1; i<=8; i++){

        if(board[n][i] == '*') continue;

        bool rainhaPossivel = true;

        for(int j=n-1; j>=1; j--){
            if(i == queens[j] - '0' || i  == queens[j] - '0' + n - j || i == queens[j] - '0' - n + j){
                rainhaPossivel = false;
                break;
            }
        }

        if(rainhaPossivel) solve(queens + std::to_string(i), n+1);

    }
}

int main(){

    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            std::cin >> board[i][j];
        }
    }

    solve(".", 1);

    std::cout << total << '\n';
}