 #include <stdio.h>
 int main(){
    int age=20;
    float  height=5.7;
    char  grade='A';

    printf("Age: %d\n",age);
    printf("height: %.1f\n",height);
    printf("Grade: %c\n",grade);

    // 1.Initialization at he time of declaration
    int num=20;
    float deci=3.9;
    // 2.Initialization after declaration
    char mark;
    mark='A';

    printf("num: %d\n",num);
    printf("decimal %.1f\n",deci);
    printf("Mark %c\n",mark);

    // CHANGING STORED VALUES

    int number=10;
    printf("Intail value: %d\n",number );

    // updating the value
    number=25;
    printf("updated value : %d\n", number);

    // updating again using expression
    number = number+5 ;
    printf("after ading 5: %d\n",number);





    return 0;

 }