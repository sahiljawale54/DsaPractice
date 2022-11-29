string reverseWord(string str){
    
  int n = str.size();
  int s = 0 ; 
  int e = n-1;
  
  while(s<=e){
      swap(str[s] , str[e]);
      s++;
      e--;
  }
  
  return str;
}
