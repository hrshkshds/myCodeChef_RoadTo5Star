#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while (T--) {
	    
	    int X, Y, Z;
	    std::cin >> X >> Y >> Z;
	    
	    if ((Y/X) < Z) {
	        std::cout << Z - (Y/X) << "\n";
	    } else {
	        std::cout << 0 << "\n";
	    }
	    
	   // std::cout << std::max(0, (Z - (Y/X))) << "\n";
	    
	}
    
    return 0;
}
