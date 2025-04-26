
package EXH;

public class Voter {
     String name;
    int age;
    public Voter(String name,int age){
        this.name = name;
        this.age = age;
    
    }
    
    void displayDetails(){
        System.out.println("Voter: "+this.name);
        System.out.println("Age: " + this.age);
    }
    void validateAge() throws CustomException{
    if(this.age<18){
    throw new CustomException("Age must be 18 or above.");
            
            }
    else{
        System.out.println("You are eligible to vote.");
    }
    
    
    
    }
    
    
    
}


