class Solution {
public:
    
    int uniqueMorseRepresentations(vector<string>& words) {
        vector< string > mm = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};    
        unordered_map< string , int > m;
        for(auto i:words){
            string temp="";
            for(auto k:i){
                temp += mm[k-'a'];
            }
            cout<< temp<<endl;
            m[temp]++;
        }
        return (int)m.size();
    }
};
