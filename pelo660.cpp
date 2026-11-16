#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::unordered_map<char, char> hashmap;
    
    hashmap['A'] = 'T';
    hashmap['T'] = 'A';
    hashmap['C'] = 'G';
    hashmap['G'] = 'C';
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int n;
        std::string scode;// nscode = "";
        
        std::cin >> n >> scode;
        
        // for ( char ch : scode ) {
        //     nscode += hashmap[ch];
        // }
        
        // std::cout << nscode << "\n";
        
        for (int i = 0; i < scode.size(); i++) {
            scode.at(i) = hashmap.find(scode.at(i))->second;
        }
        
        std::cout << scode << "\n";
        
    }
    
    return 0;
}
