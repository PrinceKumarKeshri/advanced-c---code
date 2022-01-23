#include<simplecpp>

main_program{

    turtleSim();
    int n;
    cout<<"enter number of sides of polygon = ";
    cin>>n;
    repeat(n){
        forward(10);
        penUp(10);
        penDown(10);
        wait(0.5);
    }
    wait(5);
}
