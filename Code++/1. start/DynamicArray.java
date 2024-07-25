public class DynamicArray {
   
    public void createArr(){
        int[] arr = new int[10]; 
        arr[0]=100;
        arr[1]=200;
        System.out.println(arr[0]);
        System.out.println(arr[1]);
    }
   
    public static void main(String[] args){
        DynamicArray da = new DynamicArray();
        da.createArr();
   } 

}
