class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
     unordered_set<string> word(wordList.begin(), wordList.end());

        if(word.find(endWord) == word.end()) return 0;

        queue<pair<string, int>> q;
        q.push({beginWord,1});
        int ans = 0;
        while(!q.empty()){
            pair<string, int> temp = q.front();
            q.pop();

            string a = temp.first;
            for(int i = 0; i < a.length(); i++){
                for(char ch = 'a'; ch <= 'z'; ch++){
                    string news = a;
                    news[i] = ch;

                    if(news == a) continue;
                    if(word.find(news) == word.end()) continue;
                    
                    if(news == endWord) return temp.second+1;

                    q.push({news, temp.second + 1});
                    auto it = word.find(news);
                    word.erase(it);
                }
            }
        }
        return 0;
    }
};