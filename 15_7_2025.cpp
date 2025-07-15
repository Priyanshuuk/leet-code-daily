class Solution {
public:
// following the condition of the problem
// a word is valid if it contains at least one vowel and one consonant
// and it should not contain any special characters
// a vowel is defined as a, e, i, o, u (case insensitive)
// a consonant is defined as any letter that is not a vowel
// a special character is anything that is not a letter or digit
// the word should be at least 3 characters long
    bool isValid(string word) {
        if(word.size()<3)return false;
        int v =0;
        int c = 0;
        int n =0;
        string s = word;
        for(int i = 0 ;i <word.size();i++){
            if(s[i] >='0' && s[i]<= '9' || s[i] >= 'a'  && s[i] <='z' || s[i] >= 'A'  && s[i] <='Z')
            {
                if(s[i]=='a'||s[i] =='e'||s[i] =='i'||s[i] =='o'||s[i] =='u' ||s[i] =='A' ||s[i] =='E'||s[i] =='I'||s[i] =='O'||s[i] =='U'){
                    v++;
                   // cout <<"here"<<endl;
                }
                else if (s[i] >='0' && s[i]<= '9')n++;
                else {
                    c++;
                }
            }  
            
            
             //cout <<"here can be error"<<endl;
             else
            return false;
        }
        
         
      //  cout <<v << " "<<c<<endl;
        if(v>0 && c>0) return true;

        return false;
    }
};