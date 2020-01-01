class Solution {
public:
    /*
        The solution is that to count how many people trust person[i];
        if the total people that trust people[i] is N-1, then he is the town judge

        If the person is devoted to trust someone, it is certain that he/she is not the town judge, since the town judge do not trust anybody
    */
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N==1)
            return N;
        map<int,int> mep;
        for(int i=0;i<trust.size();i++){
            if(mep[trust[i][0]]>=0) mep[trust[i][0]]= -1;
            if(mep[trust[i][1]]>=0) mep[trust[i][1]]+=1;
        }
        for(auto it = mep.begin();it!=mep.end();++it){
            if(it->second==N-1)
                return it->first;
        }
        return -1;
    }
};