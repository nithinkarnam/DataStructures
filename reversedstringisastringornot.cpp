class Solution {
public:
    bool rotateString(string s, string goal) {
        int l1=s.length();
        int l2=goal.length();
        if(l1!=l2)
        {
            return 0;
        }
        string temp=s+s;
        if(temp.find(goal)!=string::npos)
        {
            return 1;
        }
        return 0;
    }
};
