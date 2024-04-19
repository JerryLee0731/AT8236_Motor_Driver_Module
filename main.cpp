#include "mbed.h"
#include "QEI.h"

// 定義引腳
PwmOut pwm1(PA_1); // A0

QEI encoder1(PB_4, PB_10, NC, 600); // D5、D6, encoder pr待修正

int main() {

    // 開始初始化
    pwm1.period(1.0 / 10000); // PWM 周期為 10000Hz

    // 開始主要迴圈
    while(1) {

        // 讀取 Encoder
        int encoder_a = encoder1.getPulses();

        // 設置 PWM
        pwm1.write(1); // 0到1之間

        // 輸出
        printf("Encoder_A = %d\r\n", encoder_a);

        // 延遲
        ThisThread::sleep_for(100); // 單位為毫秒
    }
}
