class Solution {
public:
    static bool sortbysec(const vector<int> &a , vector<int> &b)
    {
        return (a[1] < b[1]);
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end() , sortbysec);

        int arrowcnt =  1;
        int pos = points[0][1];

        for(int i = 1  ; i < points.size() ; i++){
            if(points[i][0]  <= pos) continue;
            else {
                arrowcnt++;
                pos = points[i][1];
            }
        }

        return arrowcnt;
    }
};
