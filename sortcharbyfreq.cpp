class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq_map;
        for (char ch : s) {
            freq_map[ch]++;
        }
        vector<char> map;
        for (auto& keyvalue : freq_map) {
            map.push_back(keyvalue.first);
        }

        sort(map.begin(), map.end(), [&](char a, char b) {
            return freq_map[a] > freq_map[b];
        });

        string result;
        for (char ch : map) {
            result += string(freq_map[ch], ch);
        }

        return result;
    }
};
