class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> rncount(26,0);
        for (int i=0; i<ransomNote.length(); i++){
            rncount[ransomNote[i] - 'a']++;
        }
        for (int j=0; j<magazine.length(); j++){
            rncount[magazine[j] - 'a']--;
        }
        for (int k=0; k<rncount.size(); k++){
            if (rncount[k] > 0){
                return false;
            }
        }
        return true;
    }
};
