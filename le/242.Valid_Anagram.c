/*
Given two strings s and t, write a function to determine if t is an anagram of s.

For example,

s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?
*/

//use array[26] and update the array

bool isAnagram(char* s, char* t) {
    if(s==NULL && t==NULL) return true;
    if(strlen(s) != strlen(t)) return false;
    
    int a[26]={0};
    for(int i=0;i<strlen(s);i++){
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(a[i]<0) return false;
    }
    return true;
}
