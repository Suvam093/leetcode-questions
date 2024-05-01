class Solution {
public:
    string recurse(string &s, string &part){
        int found = s.find(part);
        if(found == string::npos) return s;

        string left;
        string right;
        
        if(found!= string::npos){
            left = s.substr(0,found);
            right = s.substr(found+part.size(),s.size());
        }
        s=left+right;
        recurse(s, part);
        return s;
    }


    string removeOccurrences(string s, string part) {
        recurse(s, part);
        return s;
    }
};