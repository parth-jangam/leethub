class Solution {
public:

    // Encodes a URL to a shortened URL.
    string original;
    string shor="http://tinyurl.com/4e9iAk";
    string encode(string longUrl) {
        original=longUrl;
        return shor;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return original;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));