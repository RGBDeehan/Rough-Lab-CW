
package EXH;

public class ExceptionHandling {
    
    
           
    
 /*
     double num1, num2 , result ;
     num1=20;
     num2=0;
     result= class1.divide(num1, num2);
        System.out.println("RESULT: "+result);    
    int index =20;
     System.out.println("Value in array " + class1.accessArray(index));
    
     */   
      Voter v1 = new Voter("ABC",25);
      Voter v2 = new Voter("XYZ",17);
      try{
          v1.validateAge();
      }
    catch (CustomException e){
        System.out.println("Caught exception: " + e);
    
    }
       try {
          v2.validateAge();
      }
    catch(CustomException e2){
        System.out.println("Caught exception: " + e2);
    
    }
      
      
    }


    

