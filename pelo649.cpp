#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	// string state[3] = {"NORMAL", "HUGE", "SMALL"};
	std::array<std::string, 3> state = {"NORMAL", "HUGE", "SMALL"};
	
	// index 0 = x%3 == 0 = NORMAL
	// index 1 = x%3 == 1 = HUGE
	// index 2 = x%3 == 2 = SMALL
	
	int T;
	std::cin >> T;
	
	while (T--) {
	    
	    int x;
	    std::cin >> x;
	    
	    std::cout << state[ x % 3 ] << "\n";
	    
	}

    return 0;
}
