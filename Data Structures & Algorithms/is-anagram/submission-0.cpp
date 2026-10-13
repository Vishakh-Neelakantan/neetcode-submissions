class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths of the strings are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        
        // Sort both strings
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        // Compare the sorted strings
        return s == t;
    }
};
