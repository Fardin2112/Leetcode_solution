class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        bool condition = true;
        int step=1;
        long sum = 0;
        int n = arr.size();
        while(condition==true){   
            if(step <= n){
                for(int i=0; i<n; i++){
                   if(i >n-step){
                       break;
                   }
                   int m =step;
                   int j = i;
                   while(m){
                       sum += arr[j];
                       m--;
                       j++;
                   }
                   
                }
            }else{
                condition = false;
            }
            step += 2;
        }         
        return sum;
    }
};
