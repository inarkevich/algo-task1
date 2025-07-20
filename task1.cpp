#include <iostream>
void algo (int point, int* arr, int size){
   
    int left = 0;
    int right = size -1;
    int middle=0;
    int count = 0;
    while(left<=right){
        middle = (left+right)/2;
        if (arr[middle]<=point){
            left = middle +1;

        }else if(arr[middle]>point){
            right = middle-1;   
        }  
    }count = size - left;
     std::cout<<"Количество элементов в массиве больших, чем "<<point<< ": " <<count<<std::endl;

}

int main(int argc, char** argv){
    int point = 0;
    std::cout<<"Введите точку отсчёта: ";
    std::cin>>point;
    int array []= {14, 16, 19, 32, 32, 32, 56, 69, 72};
    int size = sizeof(array)/sizeof(array[0]);
    algo (point, array, size);
    
}