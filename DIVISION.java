
package EXH;


public class Division {
    static double divide (double n1,double n2){
    return n1/n2 ;    
     }
    
    static int accessArray(int index){
    int[] myArray ={3,6,8,9,2,0,1};
    try {
    return myArray[index];
    }
    catch(ArrayIndexOutOfBoundsException e){
        System.out.println(e);
       return -1; 
        
    }
    catch (ArithmeticException e2){
        System.out.println(e2);
        return -1;
    }
    
/*     catch(ArrayIndexOutOfBoundsException | ArithmeticException e){
        System.out.println(e);
       return -1; 
        
     }   */
    
    }
    
}


