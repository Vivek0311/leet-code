class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> map_s_to_t;
        unordered_map<char,int> map_t_to_s;
        for( int i=0; i<s.length(); i++){
            char sc = s[i];
            char tc = t[i];

            if ( map_s_to_t.count(sc)){
                if (map_s_to_t[sc] != tc) return false;
            } else {
                map_s_to_t[sc] = tc;
            }

            if ( map_t_to_s.count(tc)){
                if (map_t_to_s[tc] != sc) return false;
            } else {
                map_t_to_s[tc] = sc;
            }
        }
        return true;
    }
};
