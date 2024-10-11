public class findNum{

  static boolean find(int [] arr,int target,int i){
    if(i==arr.length) return false;
    if(arr[i]==target) return true;
    return find(arr,target,i+1);
  }
  public static void main(String [] args){
    int [] arr ={1,2,3,4,5,6,7,4,2,1,12};
    System.out.println(find(arr, 122, 0));
  }

}
