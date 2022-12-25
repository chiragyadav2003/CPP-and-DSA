//leet code question
//link :  https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
    private: void solve(string digits, int index, string output, vector<string> &ans, string arr[]){
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        
        //here this thing will give us exact integer value
        //if we put   int number = digits[index]  and take output for number then it will give its ascii value as output
        //but using this method we will get exact number as we are subtracting the ascii value of zero from input number ascii value
        //so effectively we will be left with number
        int number = digits[index]-'0';
        string value = arr[number];
        
        for(int i=0; i<value.length(); i++){
            //heree we are storing first arr[0] then go for recursive call
            output.push_back(value[i]);
            //recursive call for next number of input string
            solve(digits, index+1, output, ans, arr);
            //here we use backtracking so that after every successful operation 
            //for a particular character we will get our string same as was previously
            //backtracking concept
            output.pop_back();
        }
               
            }
    
    
    
    
public:
//here  vector<string> inplies that our final answer will be from this type of format
//so we create a string ans as :vector<string> ans
//in final part we return sna string
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        //if input string digits length = 0 i.e, it is empty string then we have to returtn ans exactly i.e, empty string
        if(digits.length() == 0){
            return ans;
        }
        string output;
        int index = 0;
        //here we create mapping of all keypad numbers with their alphabets
        //arr[0] =""   arr[4] = "ghi"
        string arr[10] = {"", "", "abc","def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        solve(digits, index, output, ans, arr);
            
            return ans;         
    }
};