public class FindMaxConsecutive1sinaRow {
  
    // hint initialize and declare a variable here 
    // to keep track of how many 1's you have seen in a row
    static int counter=0;
    public static int findConsecutiveOnes(int[] nums) {
        
        
        for (int i = 0; i < nums.length; i++) {
           if(nums[i]==0){
            counter=0;
           }else{
            counter+=1;
           }
          
        }
       
        return counter;
    }

    public static void main(String[] args) {
        int[] array = {1,1,0,1,1,1};
        int print =FindMaxConsecutive1sinaRow.findConsecutiveOnes(array);
        System.out.println(print);
    }
  
  

   
}
