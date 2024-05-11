class Solution {
public:
    

    string removeOccurrences(string s, string part) {
        int found = s.find(part);
        string left="";
        string right="";
        while(found!= string::npos){
            
            left = s.substr(0,found);
            right = s.substr(found+part.size(), s.size());
            cout<<left<<" "<<right<<endl;
            s=left+right;
            found = s.find(part);
        }
        return s;
    }
};