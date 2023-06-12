Methode 1

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int pos = haystack.find(needle);
//         return pos ;
//     }
// };

  
Method 2

class Solution {
public:
    int strStr(string haystack, string needle) {
       int n = haystack.size();
       int i = 0;
       bool ans = false;
       int ans1;
       
       while(n > 0){        
           if(needle[0]==haystack[i] && n > 0){
               ans1 = i;
               int j = i ;
               int k = 0;
               int d = needle.size();
               if (n < d){
                   return -1;
               } 
               while(needle[k] == haystack[j] && d > 0){
                  
                   if(needle[k] != haystack[j]){
                       break;
                   }                
                   if(d-1 == 0 ||n==1){
                      ans = true;
                   }
                   j++;
                   k++;
                   d--;
               }               
           }
           if(ans == true){
               return ans1;              
           }
           i++;
           n--;         
        } 
        return -1;  
     }
};  
  
