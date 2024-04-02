class Solution {
    unordered_map<string, string> data;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const int chars_length = 62;
public:
    string encode(string longUrl) {
        string output = "http://tinyurl.com/";
        for (int i = 0; i < 6; i++) {
            output.push_back(chars[rand() % chars_length]);
        }
        // add the first 6 hashed characters from the longUrl
        data[output] = longUrl;
        return output;
    }
    string decode(string shortUrl) {
        return data[shortUrl];
    }
};
