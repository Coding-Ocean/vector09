#include"libOne.h"
void gmain(){
    window(1000, 1000);
    clear(200);
    //�i��3,1)�̃x�N�g���𐳋K������
    float vx = sqrt(3);
    float vy = 1;
    float mag = sqrt(vx * vx + vy * vy);
    float nvx = vx / mag;
    float nvy = vy / mag;
    //�R�O�x�̎��̒�ӂƍ���
    angleMode(DEGREES);
    float cos30 = cos(30);
    float sin30 = sin(30);
    //�e�L�X�g�Ńf�[�^��`��
    textSize(50);
    fill(0);
    text((let)"nvx  =" + nvx + " nvy  =" + nvy, 0, 50);
    text((let)"cos30=" + cos30 + " sin30=" + sin30, 0, 100);
    while (notQuit){ }
}
