#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
       
        map<char, int> answaer; 
        
        for (int i = 0; i < s.size(); i++) {
            
            answaer[s[i]]++;  
        }

        
        for (int i = 0; i < s.size(); i++) {
            if (answaer[s[i]] == 1) return i; 
        }

        return -1;  
    }
};
