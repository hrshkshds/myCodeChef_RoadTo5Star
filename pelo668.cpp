#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int x, y;
        std::cin >> x >> y;
        
        if (x%y == 0) {
            std::cout << (((x/y)%2 == 0)? "YES" : "NO") << "\n";
        } else {
            std::cout << "NO\n";
        }
        
        // if (n % (2 * m) == 0) {
        //     std::cout << "YES\n";
        // } else {
        //     std::cout << "NO\n";
        // }
    }
 
    return 0;   
}
