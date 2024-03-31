class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>>base={{1}};
    vector<int>fr;
    int size=numRows;

    for(int i = 0; i < size-1; i++){
         fr.clear();
         fr.push_back(1);
         for(int j=0;j<base[i].size()-1;j++){
                fr.push_back(base[i][j] + base[i][j+1]);
         }
         fr.push_back(1);
         base.push_back(fr);
        }
     return base;
   }
};
