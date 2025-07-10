#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
unordered_map<int,int>solution(vector<int> input){
    unordered_map<int,int> ans;
    for(int j =1;j<= 9; j++) {
        ans[j] = 0;
    }
    for(int i = 0; i < input.size(); i++){
        for(int j = 1; j <= 9; j++){
            if(input[i] % j == 0){
                ans[j]++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    unordered_map<int,int> result = solution(input);
    for(int i = 1; i <= 9; i++){
        cout << i << ": " << result[i]<<", ";
    }
    return 0;
}
