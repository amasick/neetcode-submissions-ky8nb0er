class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string ans;

        for (string &s : strs) {
            ans += to_string(s.size());
            ans += '#';
            ans += s;
        }

        return ans;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            // Read the length
            int j = i;
            while (s[j] != '#')
                j++;

            int len = stoi(s.substr(i, j - i));

            // Move past '#'
            j++;

            // Extract the string
            ans.push_back(s.substr(j, len));

            // Move to the next encoded string
            i = j + len;
        }

        return ans;
    }
};