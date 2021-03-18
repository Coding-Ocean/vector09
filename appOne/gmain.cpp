#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //ベクトル
        float vx = mathMouseX;
        float vy = mathMouseY;
        //ベクトルの大きさ
        float mag = sqrt(vx * vx + vy * vy);
        //クリアして座標を描画
        clear(200);
        mathAxis(5.1f);
        //ベクトルを描画
        strokeWeight(5);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        //テキストでデータを描画
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"" + sqrt(3)/2, 0, 150);
    }
}
