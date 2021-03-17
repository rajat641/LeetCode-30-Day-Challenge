class Solution {
public:

    // Encodes a URL to a shortened URL.
    string T = "ABCDEFGHIJKLMNOPQRSTUVWXYXabcdefghijklmnopqrstuvwxyz0123456789";
    string C = "http://tinyurl.com/";
  //  string K ="https://leetcode.com/";
    unordered_map< string, string > M;
     unordered_map< string, string > N;
    string encode(string longUrl) {
       // string X = longUrl.substr(K.length());
        string X = longUrl;
        if(M.find(X)!=M.end()) return C+M[X];
        int L = T.length();
        string ans="";
        for(int i=0;i<6;i++){
            ans+= T[rand()%L];
        }
       
        M[X] = C+ans;
        N[C+ans] = X;
        cout<< ans<<endl;
        return M[X];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       //string X = shortUrl.substr(C.length());
        //cout<<X<<endl;
        return N[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
