import java.util.ArrayList;
public class findAllNum{

  static ArrayList findAll(int [] arr, int target, int i, ArrayList<Integer> ans){

    if(i==arr.length)return ans;
    if(arr[i]==target)ans.add(i);
    return findAll(arr, target, i+1, ans);
  }
  public static void main(String [] args){
    int [] arr={1,2,3,4,5,1,3,2,3,2,1};
    System.out.println(findAll(arr, 3, 0, new ArrayList<>()));
  }
}
