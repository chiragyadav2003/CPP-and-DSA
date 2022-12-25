//submitted on codestudio as subsequences
//link = https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16

void solve(string str, string output, int index, vector<string> &ans){
    //it will not store empty string in ans as we have applied a condition

    //base case 
    if(index>=str.length()){
        if(output.length()>0){
        ans.push_back(output);
            }
            return;
    }
    
    //exclude
    solve(str, output, index+1, ans);
    
    //include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
    
    
}

//our output will be of vector<string> data type
vector<string> subsequences(string str){

    //here we have declared vector<string> ans to store our final answer
    //and at last we will take ans as return 
	vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    
    return ans;
	
}
