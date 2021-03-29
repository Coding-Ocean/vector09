#include"libOne.h"
void gmain() {
    window(1000, 1000);
    angleMode(DEGREES);
    colorMode(HSV);
    float x, y, r;
    float sine, cosine, tangent;
    float tx, ty;
    while (notQuit) {
        clear(120, 255, 50);
        mathAxis(3.1f, 255);
        x = mathMouseX;
        y = mathMouseY;
        r = sqrt(x * x + y * y);
        sine = y / r;
        cosine = x / r;
        tangent = y / x;
        tx = sine * tangent;
        ty = -cosine * tangent;
        //tx = sine;
        //ty = -cosine;
        //元のベクトル
        strokeWeight(4);
        stroke(0, 0, 128);
        mathArrow(0, 0, x, y);
        //単位円
        fill(0, 0, 0, 0);
        mathCircle(0, 0, 2);
        //正規化ベクトル
        strokeWeight(8);
        stroke(0, 0, 200);
        mathArrow(0, 0, cosine, sine);
        stroke(240, 64, 255);
        mathLine(0, 0, cosine, 0);
        stroke(0, 64, 255);
        mathLine(cosine, 0, cosine, sine);
        //タンジェント
        stroke(60, 64, 255);
        mathLine(cosine, sine, cosine + tx, sine + ty);
        //mathLine(0, 0, tx, ty);
        //テキスト情報
        textSize(50);
        fill(240, 64, 255);
        text((let)"sine=" + sine, 0, 50);
        fill(0, 64, 255);
        text((let)"cosine=" + cosine, 0, 100);
        fill(60, 64, 255);
        text((let)"tangent=" + tangent, 0, 150);
    }
}