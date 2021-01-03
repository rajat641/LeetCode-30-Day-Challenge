class Solution {
public:
    int cnt =0;
   
    unordered_map< int , int > used;
    map< vector< int > , int > m;
    int N;
    void recur(int pos){
        if(pos>N){
            ++cnt;
            return;
        }
        for(int i=1;i<=N;i++){
            if(used[i]==0 && (i%pos==0 || pos%i==0)){
                used[i]=1;
                recur(pos+1);
                used[i]=0;
            }
            
        }
            
    }
    
    int countArrangement(int n) {
        
        N = n;
        
        recur(1);
        return cnt ;
    }
};
