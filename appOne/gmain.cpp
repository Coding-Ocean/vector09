#include"libOne.h"
void gmain(){
    window(1000, 1000);
    clear(200);
    //（√3,1)のベクトルを正規化する
    float vx = sqrt(3);
    float vy = 1;
    float mag = sqrt(vx * vx + vy * vy);
    float nvx = vx / mag;
    float nvy = vy / mag;
    //３０度の時の底辺と高さ
    angleMode(DEGREES);
    float cos30 = cos(30);
    float sin30 = sin(30);
    //テキストでデータを描画
    textSize(50);
    fill(0);
    text((let)"nvx  =" + nvx + " nvy  =" + nvy, 0, 50);
    text((let)"cos30=" + cos30 + " sin30=" + sin30, 0, 100);
    while (notQuit){ }
}
