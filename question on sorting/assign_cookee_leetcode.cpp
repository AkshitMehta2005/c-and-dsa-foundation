//455. Assign Cookies

// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//     sort(g.begin(),g.end()); //7 8 9 10-->cookies
//     sort(s.begin(),s.end()); //5 6 7 8-->lalach
//     int count = 0;
//     int j = 0;
//     int i = 0;
//     while(i<g.size() && j<s.size()){
//         if(s[j]>=g[i]){
//             count++;
//             i++;
//             j++;
//         }
//         else{
//             j++;
//         }
//     }
// } return count;}