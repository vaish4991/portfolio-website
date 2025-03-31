import java.util.*;
public Cello_Bottle {
    //data members
    String shape,material;
    double price;
    int capacity;
    //memeber function
    //constructor(Special function,udsed for intialisation)
    public Cello_Bottle() //Default constructor
     {
        System.out.println("Df cons is calling");
        shape="cyclinder";
        material="Plastic";
        price=200.89;
        capacity=1;

}
public void display()
{
    System.out.println("shape:" + shape + "material:"+ material + "price:" + price + "    capacity"+ capacity);

}
}
class Bottle{
    public static void main(String[] args) {
        //classes and objects
        Cello_Bottle c1=new Cello_Bottle();
        c1.display();
    }
}
