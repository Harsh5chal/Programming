int Solution::lengthOfLastWord(const string A) {
  int len = A.length()-1;
int count = 0;

while(len >= 0 && A[len] == ' ')
   {
       len--;
   }
while(len >= 0 && A[len] != ' ')
    {len--;
    count++;}
return count;

}
