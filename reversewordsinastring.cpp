class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.size() - 1;
        string temp = "";
        string ans = "";
        
        // Trim leading and trailing spaces
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;

        while (left <= right) {
            char ch = s[left];
            if (ch != ' ') {
                temp += ch;
            } else if (ch == ' ' && !temp.empty()) {
                if (!ans.empty()) {
                    ans = temp + " " + ans;  // Add space between words
                } else {
                    ans = temp;
                }
                temp = "";  // Clear temp for the next word
            }
            left++;
        }
        
        // Append the last word if temp is not empty
        if (!temp.empty()) {
            if (!ans.empty()) {
                ans = temp + " " + ans;  // Add space between words
            } else {
                ans = temp;
            }
        }
        
        return ans;
    }
};
