#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int x, y, z;
        std::cin >> x >> y >> z;
        
        // int total_time = (x * y) + (((x - 1) / 3) * z);
        
        std::cout << ((x*y)+(((x-1)/3)*z)) << "\n";
        
    }

    return 0;
}

