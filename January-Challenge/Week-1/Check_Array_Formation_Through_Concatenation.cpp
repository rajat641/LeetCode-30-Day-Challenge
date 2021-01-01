class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
            int sz = arr.size();
        int i=0;
        map< int , int > used;
            while(i<sz){
                int overallm = 0;
                    for(int j=0;j<pieces.size();j++){
                        int fl = 0;
                        if(used[j]==1) continue;
                         for(int k =0;k< pieces[j].size();k++){
                             if(pieces[j][k]== -1) continue;
                             if(arr[i]==pieces[j][k]){
                                 i++; 
                               //  if(i>=sz) return 1;
                                 fl =1;
                                 overallm=1;
                                 
                                 
                             }
                             else {
                                 if(fl==1) return 0;
                                 else break;
                             }
                             pieces[j][k]= -1;
                             used[j]=1;
                         }
                         if(i>=sz) return 1;
                        
                       
                    }
                 if(overallm==0) return 0;
            } 
        return 1;
    }
};
