/* this code logic is right . it has some writing problem which i will fix later.
this will give total number of subset of an input set of a vector
*/

//submitted on leetcode
//link = https://leetcode.com/problems/subsets/


//where we are storing final output in ans vector.
//so it should be called by pass by refrence so that change will occur in original vector;
//if we call it pass by value then a copy wil be created and no change will occur in original vector<int> ans

void subset(vector<int> arr, int index, vector<int> output, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    subset(arr, index + 1, output, ans);

    int element = arr[index];
    output.push_back(element);

    subset(arr, index + 1, output, ans);
}

//here our final output will be from vector<vector<int>> data type
vector<vector<int>> subsets(vector<int> &arr){
  
    vector<int> output;

//so we have declared vector<vector<int>> ans 
//in final we take ans as return
    vector<vector<int>> ans;

    int index = 0;

    subset(arr, index, output, ans);

    return ans; 
}