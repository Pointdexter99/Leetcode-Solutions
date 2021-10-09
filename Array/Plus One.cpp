class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()  ;
        int i = n - 1 ;         
        
        int carry = 0 ;         
        while(  i >= 0  ){      
          if( i == n-1){        
                 digits[i] = digits[i] + 1;
          }
          else{                   
		        
                 digits[i] = carry + digits[i];
          }
         
          if( digits[i] == 10){         
                carry = 1;           
                digits[i] = 0 ;      
          }
          else{
                
				carry = 0;             
          }
            i-- ;
      }
        
        if( (i < 0) && (carry !=0)){
           
            digits.insert(digits.begin(), carry);
        }
        return digits;

    }
};
