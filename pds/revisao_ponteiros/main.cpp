#include <iostream>

#define SIZE 5

using namespace std;

int main(){
    long value1=200000;
    long value2;
    
    //1
    long *long_ptr;
    
    //2
    long_ptr = &value1;
    
    //3
    cout << *long_ptr << " ";
    
    //4
    value2 = *long_ptr;
    
    //5
    cout << value2 << " ";
    
    //6
    cout << &value1 << " ";
    
    //7 O valor impresso ´e o mesmo que o endere¸co de value1? SIM
    cout << long_ptr << " ";
    cout << (&value1 == long_ptr) << " ";
    
    //8
    unsigned int values[SIZE] = {2,4,6,8,10};
    
    //9
    unsigned int *v_ptr;
    
    //10
    for(int i=0; i<SIZE; i++){
        cout << values[i] << " ";
    }
    
    //11
    v_ptr = &values[0];
    
    //12
    for(int i=0; i<SIZE; i++){
        cout << *(v_ptr+i) << " ";
    }
    
    //13
    for(int i=0; i<SIZE; i++){
        cout << *(values+i) << " ";
    }
    
    //14
    for(int i=0; i<SIZE; i++){
        cout << v_ptr[i] << " ";
    } 
    
    //15
    cout << values[4] << " ";
    cout << *(values+4) << " ";
    cout << v_ptr[4] << " ";
    cout << *(v_ptr+4) << " ";
    
    //16
    cout << (v_ptr+3) << " ";
    cout << *(v_ptr+3) << " ";
    
    //17
    v_ptr = &values[4];
    cout << (v_ptr-4) << " ";
    cout << *(v_ptr-4);
    
    return 0;
}