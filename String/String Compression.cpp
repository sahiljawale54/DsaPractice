class Solution {
public:
    int compress(vector<char>& chars) {
        int idxwrite = 0 ;
        
        for(int read = 0; read <chars.size() ; read++){
            int count = 1;

            while(read+1 < chars.size() && chars[read] == chars[read+1]){
                count++;
                read++;
            }

            chars[idxwrite++] = chars[read]; // a a a a a hai tho first a ke idhar last a wala daalre aur idxwrite ko inc

            if(count>=2){
                string temp = to_string(count);

                for(auto i : temp){
                    chars[idxwrite++] = i;
                }

            }
        }
        return idxwrite;
        
    }
};
