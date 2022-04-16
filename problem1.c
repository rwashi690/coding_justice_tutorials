#include<stdio.h>

int task1(int bones, int toys) {
    int result = bones + toys;
    return result;
}

int task2(int bedroomBone, int livingroomBone){
    int result = bedroomBone + livingroomBone;
    return result;
}

int task3 (int status){
    if (status == 0){
        return printf("True! \n");
    } else{
        return printf("False \n");
    }

}

int main(){
    int bones = 15;
    int toys = 10;
    int bedroomBone=7;
    int lvingroomBone=8;
    int sleep=0;
    int awake=1;
    printf("toys: %d\n", toys);
    printf("bones: %d\n", bones);
    printf("Total: %d\n", task1(bones, toys));
    printf("Total Bones: %d\n", task2(bedroomBone, lvingroomBone));
    task3(sleep);
    task3(awake);
    return 0;
}

