#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int n, x, y;
        std::cin >> n >> x >> y;
        
        // std::cout << std::min( n , (y/x) ) << "\n";
        std::cout << ((y/x > n)? n : (y/x)) << "\n";
        
    }
    
    return 0;
}
