class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> valid_keyboard_row;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        for(int i=0; i<words.size(); i++){
            string lowerWord = words[i];
            for (char& c : lowerWord) c = tolower(c);
            int val = 0;
            // npos is equal to -1  
            if (row1.find(lowerWord[0]) != string::npos){
                val = 1;
            }
            else if (row2.find(lowerWord[0]) != string::npos){
                val = 2;
            }
            else if (row3.find(lowerWord[0]) != string::npos){
                val = 3;
            }
            bool sameRow = true;
            for (int j=1; j<lowerWord.length(); j++){
                if ((val == 1 && row1.find(lowerWord[j]) == string::npos) || 
                (val == 2 && row2.find(lowerWord[j]) == string::npos) || 
                (val == 3 && row3.find(lowerWord[j]) == string::npos)) {
                    sameRow = false;
                    break;
                }
            }
            if (sameRow) valid_keyboard_row.push_back(words[i]);
        }
        return valid_keyboard_row;
    }
};
