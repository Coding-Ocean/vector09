#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //�x�N�g��
        float vx = mathMouseX;
        float vy = mathMouseY;
        //�x�N�g���̑傫��
        float mag = sqrt(vx * vx + vy * vy);
        //�N���A���č��W��`��
        clear(200);
        mathAxis(5.1f);
        //�x�N�g����`��
        strokeWeight(5);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        //�e�L�X�g�Ńf�[�^��`��
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"" + sqrt(3)/2, 0, 150);
    }
}
