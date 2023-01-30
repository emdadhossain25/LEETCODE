/**
 * ArrayCapacityLength
 */
public class ArrayCapacityLength {
    public static void main(String[] args) {
    int[] array = new int[6];

    //current length is 0, because it has 0 elements;
    int length=0;
    for (int i = 0; i < 3; i++) {
        array[i]=i*1;
        //Each tie we add an element, the length goes up by one
        length++;

    }
    System.out.println("The Array has a capacity of "+array.length);
    System.out.println("The Array has a length of "+length);
    }
}