class Solution {
    vector<int> generateHash(string s) {
        vector<int> hash(26, 0);
        for(char ch: s) {
            if(isalpha(ch)) {
                char lower = (char) tolower(ch);
                hash[lower - 'a']++;
            }
        }
        return hash;
    }
    int shortestCompletingWord(vector<int> wordHash, vector<int> license) {
        int shortestWord = 0;
        for(int i = 0; i < 26; i++) {
            if(wordHash[i] < license[i]) {
                return -1;
            }
            shortestWord += wordHash[i] - license[i];
        }
        return shortestWord;
    }
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int index = 0, minShortestWord = 1000;
        vector<int> license = generateHash(licensePlate);
        for(int i = 0; i < words.size(); i++) {
            vector<int> wordHash = generateHash(words[i]);
            int shortestWord = shortestCompletingWord(wordHash, license);
            if(shortestWord >= 0) {
                if(shortestWord < minShortestWord) {
                    minShortestWord = shortestWord;
                    index = i;
                }
            }
        }
        return words[index];
    }
};