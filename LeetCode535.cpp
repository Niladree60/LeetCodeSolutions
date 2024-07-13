class Solution {
public:
    map<string, string> encode_map, decode_map;
    string base = "http://tinyurl.com/";

    string encode(string longUrl) {
        if(!encode_map.count(longUrl)) {
            string short_url = base + to_string(encode_map.size() + 1);
            encode_map[longUrl] = short_url;
            decode_map[short_url] = longUrl;
        }

        return encode_map[longUrl];
    }

    string decode(string shortUrl) {
        return decode_map[shortUrl];  
    }
};
