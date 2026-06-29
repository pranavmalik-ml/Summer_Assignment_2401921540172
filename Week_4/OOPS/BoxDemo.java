class Box {

    double length;
    double breadth;

    Box(double l,double b){

        length=l;
        breadth=b;
    }

    double area(){

        return length*breadth;
    }
}

class Box3D extends Box{

    double height;

    Box3D(double l,double b,double h){

        super(l,b);

        height=h;
    }

    double volume(){

        return length*breadth*height;
    }
}

public class BoxDemo {

    public static void main(String args[]){

        Box3D obj=new Box3D(5,4,3);

        System.out.println("Area = "+obj.area());

        System.out.println("Volume = "+obj.volume());
    }
}