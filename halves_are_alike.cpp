class Solution {
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' ||c == 'I' ||c == 'O' ||c == 'U' );
    }
    
    bool halvesAreAlike(string s) {
        int vowel1 = 0,vowel2 = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(i < s.length()/2){
                if(isVowel(s[i])){
                    vowel1++;
                }
            }
            else{
                if(isVowel(s[i])){
                    vowel2++;
                }
            }
        }
        return (vowel1 == vowel2);
    }
};