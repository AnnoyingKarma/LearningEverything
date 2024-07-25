void main(){
  List<int> digits=[9];
  print(plusOne(digits));
}

List<int> plusOne(List<int> digits) {
  int n= digits.length;
  String s="";
  for(int i=0; i<n; ++i){
    s+=digits[i].toString();
  }
  double m = double.parse(s); 

  List<int> ans = m.toString().split('').map(int.parse).toList();
  return ans;
}