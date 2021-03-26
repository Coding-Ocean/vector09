#define ARC
//#define NORMALIZED
#ifdef NORMALIZED
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    while (notQuit) {
        clear(200);
        mathAxis(2.1f);
        //（√3,1)のベクトルを正規化する
        float vx = sqrt(3);
        float vy = 1;
        float mag = sqrt(vx * vx + vy * vy);
        float nvx = vx / mag;
        float nvy = vy / mag;
        strokeWeight(6);
        stroke(0);
        mathLine(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        //正規化ベクトル
        stroke(255, 0, 0);
        mathLine(0, 0, nvx, nvy);
        mathLine(0, 0, nvx, 0);
        mathLine(nvx, 0, nvx, nvy);
        //３０度の時の底辺と高さ
        angleMode(DEGREES);
        float cos30 = cos(30);
        float sin30 = sin(30);
        //テキストでデータを描画
        textSize(50);
        fill(0);
        text((let)" vx  =" + vx +  "  vy  =" + vy, 0, 50);
        text((let)"nvx  =" + nvx + " nvy  =" + nvy, 0, 100);
        text((let)"cos30=" + cos30 + " sin30=" + sin30, 0, 150);
    }
}
#endif
#ifdef ARC
#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit) {
        clear(200);
        mathAxis(2.1f);
        float vx = mathMouseX;
        float vy = mathMouseY;
        float mag = sqrt(vx * vx + vy * vy);
        float nvx = vx/mag;
        float nvy = vy/mag;
        //元のベクトル
        strokeWeight(6);
        stroke(0);
        mathLine(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);

        //正規化ベクトル
        stroke(255,0,0);
        //mathLine(0, 0, nvx, nvy);
        //mathLine(0, 0, nvx, 0);
        //mathLine(nvx, 0, nvx, nvy);

        //テキストでデータを描画
        textSize(50);
        fill(0);
        text((let)" vx=" +  vx + "  vy=" + vy, 0, 50);

        //text((let)"nvx=" + nvx + " nvy=" + nvy, 0, 100);
        angleMode(DEGREES);
        //text((let)"asin(nvy)=" + asin(nvy), 0, 200);
        //text((let)"acos(nvx)=" + acos(nvx), 0, 250);
        text((let)"atan2(vy,vx)=" + atan2(vy, vx), 0, 300);
    }
}
#endif