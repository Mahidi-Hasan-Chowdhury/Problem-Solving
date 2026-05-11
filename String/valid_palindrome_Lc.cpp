// class Solution {
// public:
//     // bool isAlphaNumeric(char ch)
//     // {
//     //     if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z'))
//     //     {
//     //         return true;
//     //     }
//     //     return false;
//     // }
//     bool isPalindrome(string s) {
//         int start = 0; 
//         int end = s.size()-1;
//         string a = s;
//         while(start<end)
//         {
//             if(!isalnum(s[start]))
//             {
//                 start++;
//                 continue;
//             }
//             if(!isalnum(s[end]))
//             {
//                 end--;
//                 continue;
//             }
//             if(tolower(s[start]) != tolower(s[end]))
//             {
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         return true;
        
//     }
// };