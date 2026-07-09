#include <iostream>
#include <vector>

long long totalMovimentos = 0;
std::vector<std::pair<int, int>>moves;

void torre(int n, int a, int b, int c){
    if(n == 0) return;
    torre(n-1, a, c, b);

    moves.push_back({a, c});
    totalMovimentos++;

    torre(n-1, b, a, c);
}

int main(){
    int n;
    std::cin >> n;

    torre(n, 1, 2, 3);
    std::cout << totalMovimentos << '\n';

    for(auto [a, b]: moves) std::cout << a << ' ' << b << '\n';
}