//https://leetcode.com/problems/push-dominoes/
class Solution {
  public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> L(n,0);
        vector<int> R(n,0);
         if (n > 1) {
            for(int i =1; i < n;i++ ){
                int right =0;
                if(dominoes[i] == '.'&&dominoes[i-1] =='R'){
                   // right++;
                     R[i] = R[i-1]+1;
                }
                else if(dominoes[i] =='.' && R[i-1]>0){
                    R[i] = R[i-1]+1;
                }
                 if(dominoes[n-1-i] == '.' &&dominoes[n-i] =='L'){
                     L[n-1-i] = L[n-i] +1;
                 }
                 else if(dominoes[n-1-i] =='.' &&L[n-i] >0){
                     L[n-1-i] = L[n-i] +1;
                 }
                 
            }
             
            /* for(int i=n-2;i>=0; i--){
                 if(dominoes[i] == '.' &&dominoes[i+1] =='L'){
                     L[i] = L[i+1] +1;
                 }
                 else if(dominoes[i] =='.' &&L[i+1] >0){
                     L[i] = L[i+1] +1;
                 }
             }*/
             for(int i =0; i < n; i++){
        
                 if(L[i] ==R[i]) continue;// equal amount of forces
                 else{ //(L[i] != R[i])
                     if(L[i] >R[i]) {
                         if(R[i] != 0) dominoes[i] = 'R';
                         else dominoes[i] = 'L';
                     } //right is closer
                     if(R[i] >L[i]) {
                         if(L[i] != 0) dominoes[i] = 'L';
                         else dominoes[i] = 'R';
                     } //left is closer
                    //else if(L[i] > R[i] && R[i] == 0) dominoes[i] == 'L';
                   //  else if(R[i] > L[i] && L[i] == 0) dominoes[i] == 'R';
                 }
             }
         }
        
            for(int i: L) cout<<i<<" ";
        cout<<"\n";
        for(int i: R) cout<<i<<" ";
            return dominoes;
     }
};
