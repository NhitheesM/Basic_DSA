


string multiplyStrings(string a , string b ){
   //Write your code here
   string sum(a.size() + b.size(), '0');
   
   for (int i = a.size() - 1; 0 <= i; --i) {
       int carry = 0;
       for (int j = b.size() - 1; 0 <= j; --j) {
           int tmp = (sum[i + j + 1] - '0') + (a[i] - '0') * (b[j] - '0') + carry;
           sum[i + j + 1] = tmp % 10 + '0';
           carry = tmp / 10;
       }
       sum[i] += carry;
   }
   
   size_t startpos = sum.find_first_not_of("0");
   if (string::npos != startpos) {
       return sum.substr(startpos);
   }
   return "0";

}
