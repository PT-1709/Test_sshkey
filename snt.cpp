/*
Trăm trâu, trăm cỏ
Trâu đứng ăn năm
Trâu nằm ăn ba,
Ba trâu già ăn một
Hỏi mỗi loại trâu có bao nhiêu con.
*/

#include<iostream>
#include<math.h>


using namespace std;

// giai thua su dung vong lap
int main(){
    for(int i = 1; i <= 20; i++){
        for(int k = 1; k <= 33; k++){
            int a;
            a = 100 - i - k;
            if((i + k + a ==100) && (i*5+ k*3 + a/3 == 100)){
                cout << "Trâu đứng là: " << i << " Trâu nằm là:" << k << " Trâu già là:" << a << endl;
                
            }
        }
    }
    return 0;
}