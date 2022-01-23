#include<simplecpp>

main_program{

    turtleSim();
    int n;
    cout<<"enter number of sides of polygon = ";
    cin>>n;
    repeat(n){

        forward(500);
        penUp(100);
        penDown(100);
        wait(5);
    }
    wait(5);
}
