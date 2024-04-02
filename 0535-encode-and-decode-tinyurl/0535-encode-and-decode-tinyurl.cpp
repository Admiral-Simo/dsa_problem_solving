class Solution {
    unordered_map<string, string> data;
    int i;
public:
    Solution() {
        i = 0;
    }
    string encode(string longUrl) {
        string output = "http://tinyurl.com/";
        // add the first 6 hashed characters from the longUrl
        output += to_string(i++);
        data[output] = longUrl;
        return output;
    }
    string decode(string shortUrl) {
        return data[shortUrl];
    }
};
