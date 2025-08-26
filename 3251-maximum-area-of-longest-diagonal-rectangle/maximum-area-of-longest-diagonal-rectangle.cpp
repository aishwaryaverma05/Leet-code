// class Solution {
// public:
//     int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
//         int f_area=0; 
//         int f_diag=0;
//         for(auto pair:dimensions){
//             int ar=pair[0]*pair[1];
//             int diag = sqrt(pair[0]*pair[0] + pair[1]*pair[1]);
//             f_diag=max(f_diag,diag);
//             f_area=max(f_area,ar);
//         }
//         return f_area;
//     }
// };


class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int f_area=0;
        double f_diag=0;
        for(auto pair:dimensions){
            int ar=pair[0]*pair[1];
            double diag = sqrt(pair[0]*pair[0] + pair[1]*pair[1]);
            if(f_diag<diag){
                f_diag=diag;
                f_area=ar;
            }
            else if(f_diag==diag){
                f_area=max(f_area,ar);
            }
            
        }
        return f_area;
    }
};