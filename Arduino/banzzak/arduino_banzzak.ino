#include <Adafruit_NeoPixel.h>
#include <LedControl.h>
#include <SoftwareSerial.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6
#define NUM_LEDS 4
#define BRIGHTNESS 50

LedControl lc = LedControl(12,11,10,4);
SoftwareSerial BTSerial(2,3);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);


void normal(){
  byte nor[2][8] ={
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  }
  };

  for(int j=0; j<8; j++){
    lc.setRow(1,j,nor[0][j]);    
    lc.setRow(2,j,nor[1][j]);
  }
}

void happy(){
  byte hap[6][8] ={
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01111110,
    B00000000
  },
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01111110,
    B00000000,
    B00000000
  },
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01111110,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00111100,
    B01000010,
    B01000010,
    B01111110,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00111100,
    B01111110,
    B01000010,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  }
};

for(int j=0; j<6; j++){
  for(int k=0; k<8; k++){
    lc.setRow(1,k,hap[j][k]);
    lc.setRow(2,k,hap[j][k]);
  }
  delay(200);
}
delay(1000);

for(int j=0; j<6; j++){
  for(int k=0; k<8; k++){
    lc.setRow(1,k,hap[5-j][k]);
    lc.setRow(2,k,hap[5-j][k]);
  }
  delay(200);
}
}

void angry(){
  byte angry_left[5][8] ={
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00111000,
    B01000100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  {
    B00110000,
    B01001000,
    B01000100,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  {
    B00100000,
    B01010000,
    B01001000,
    B01000100,
    B01010010,
    B01011010,
    B01000010,
    B00111100
  },
  {
    B01000000,
    B01100000,
    B01010000,
    B01001000,
    B01010100,
    B01011010,
    B01000010,
    B00111100
  }
};

byte angry_right[5][8] ={
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00011100,
    B00100010,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  {
    B00001100,
    B00010010,
    B00100010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B00111100
  },
  {
    B00000100,
    B00001010,
    B00010010,
    B00100010,
    B01001010,
    B01011010,
    B01000010,
    B00111100
  },
  {
    B00000010,
    B00000110,
    B00001010,
    B00010010,
    B00101010,
    B01011010,
    B01000010,
    B00111100
  }
};

for(int j=0; j<5;j++){
  for(int k=0; k<8; k++){
    lc.setRow(1,k,angry_left[j][k]);
    lc.setRow(2,k,angry_right[j][k]);
  }
  delay(200);
}
delay(2000);
for(int j=0; j<5;j++){
  for(int k=0; k<8; k++){
    lc.setRow(1,k,angry_left[4-j][k]);
    lc.setRow(2,k,angry_right[4-j][k]);
  }
  delay(200);
}
}

void sad(){
  byte sad_left[4][8] ={
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00011100,
    B00100010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000100,
    B00111000
  },
  {
    B00001100,
    B00010010,
    B00100010,
    B01011010,
    B01011010,
    B01000100,
    B01001000,
    B00110000
  },
  {
    B00001100,
    B00010010,
    B00100010,
    B01011010,
    B01010100,
    B01001000,
    B01010000,
    B00100000
  }
};

byte sad_right[4][8] ={
  {
    B00111100,
    B01000010,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00111000,
    B01000100,
    B01000010,
    B01011010,
    B01011010,
    B01000010,
    B00100010,
    B00011100
  },
  {
    B00110000,
    B01001000,
    B01000100,
    B01011010,
    B01011010,
    B00100010,
    B00010010,
    B00001100
  },
  {
    B00110000,
    B01001000,
    B01000100,
    B01011010,
    B00101010,
    B00010010,
    B00001010,
    B00000100
  }
};

for(int j=0; j<4; j++){
  for(int k=0; k<8; k++){
    lc.setRow(1,k,sad_left[j][k]);
    lc.setRow(2,k,sad_right[j][k]);
  }
  delay(200);
}
delay(2000);
for(int j=0; j<4; j++){
  for(int k=0; k<8; k++){
    lc.setRow(1,k,sad_left[3-j][k]);
    lc.setRow(2,k,sad_right[3-j][k]);
  }
  delay(200);
}
}


byte correct[11][8] ={
  {
    B00000000,
    B00011100,
    B00100010,
    B00100000,
    B00100000,
    B00100000,
    B00100010,
    B00011100
  },
  {
    B00000000,
    B00011100,
    B00100010,
    B00100010,
    B00100010,
    B00100010,
    B00100010,
    B00011100
  },
  {
    B00000000,
    B00111100,
    B00100010,
    B00100010,
    B00111100,
    B00101000,
    B00100100,
    B00100010
  },
  {
    B00000000,
    B00111100,
    B00100010,
    B00100010,
    B00111100,
    B00101000,
    B00100100,
    B00100010
  },
  {
    B00000000,
    B00111110,
    B00100000,
    B00100000,
    B00111110,
    B00100000,
    B00100000,
    B00111110
  },
  {
    B00000000,
    B00011100,
    B00100010,
    B00100000,
    B00100000,
    B00100000,
    B00100010,
    B00011100
  },
  {
    B00000000,
    B00111110,
    B00001000,
    B00001000,
    B00001000,
    B00001000,
    B00001000,
    B00001000
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
 {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  }
};


byte wrong[9][8] ={
  {
    B00000000,
    B00100010,
    B00100010,
    B00100010,
    B00100010,
    B00101010,
    B00101010,
    B00010100
  },
  {
    B00000000,
    B00111100,
    B00100010,
    B00100010,
    B00111100,
    B00101000,
    B00100100,
    B00100010
  },
  {
    B00000000,
    B00111100,
    B01000010,
    B01000010,
    B01000010,
    B01000010,
    B01000010,
    B00111100
  },
  {
    B00000000,
    B00100010,
    B00100010,
    B00110010,
    B00101010,
    B00100110,
    B00100010,
    B00100010
  },
  {
    B00000000,
    B00011100,
    B00100010,
    B00100000,
    B00100000,
    B00100110,
    B00100010,
    B00011100
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  },
  {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
  }  
};


void setup(){
  //블루투스 세팅
  BTSerial.begin(9600); //시리얼모니터
  pinMode(13,OUTPUT); //Pin 13을 OUTPUT으로 설정

  //네오픽셀 세팅
  strip.setBrightness(BRIGHTNESS);
  strip.begin(); //네오픽셀 제어 시작
  strip.show(); // 네오픽셀 점등

  //도트매트릭스 세팅
  for(int num=0; num<4; num++){     //매트릭스 0번부터 3번까지 세팅
    lc.shutdown(num,false);  // 0~3번까지 매트릭스 절전모드 해제
    lc.setIntensity(num,8);  // 0~3번까지 매트릭스의 밝기 8로 선언,
    lc.clearDisplay(num);   //0~3번까지 매트릭스 led 초기화
  }
}


void loop(){
  byte buffer1[4+1][8];
  if(BTSerial.available()){
    char bt;
    bt=BTSerial.read();
    if(bt=='s'){              //시작
      normal();  
      for(int i=0; i<strip.numPixels(); i++){
          strip.setPixelColor(i,strip.Color(255,255,255)); // 백색(전력 가장 많이 먹음)
          strip.show();
          delay(100);
      }
    }
    if(bt=='e'){               //끝
      for(int num=0; num<4; num++){
        lc.clearDisplay(num);
      }
    }
    if(bt=='w'){              //틀림
      for(int i=0; i<9; i++){
        memcpy(&buffer1[4],&wrong[i],sizeof(wrong[i]));

        for(int j=0; j<8; j++){
          for(int k=0; k<8; k++){
            buffer1[0][k]=(buffer1[0][k]<<1)|(buffer1[1][k]>>7);
            buffer1[1][k]=(buffer1[1][k]<<1)|(buffer1[2][k]>>7);
            buffer1[2][k]=(buffer1[2][k]<<1)|(buffer1[3][k]>>7);
            buffer1[3][k]=(buffer1[3][k]<<1)|(buffer1[4][k]>>7);
            buffer1[4][k]=(buffer1[4][k]<<1);
          }

          for(int i=0; i<8; i++){
            lc.setRow(0,i,buffer1[0][i]);
            lc.setRow(1,i,buffer1[1][i]);
            lc.setRow(2,i,buffer1[2][i]);
            lc.setRow(3,i,buffer1[3][i]);
          }
          delay(10);
        }
      }
      angry();
      
    }
    if(bt=='c'){              //맞음
      for(int i=0; i<strip.numPixels(); i++){
          strip.setPixelColor(i,strip.Color(0,255,0)); // 백색(전력 가장 많이 먹음)
          strip.show();
          delay(100);
      }
      
      for(int i=0; i<9; i++){
        memcpy(&buffer1[4],&correct[i],sizeof(correct[i]));

        for(int j=0; j<8; j++){
          for(int k=0; k<8; k++){
            buffer1[0][k]=(buffer1[0][k]<<1)|(buffer1[1][k]>>7);
            buffer1[1][k]=(buffer1[1][k]<<1)|(buffer1[2][k]>>7);
            buffer1[2][k]=(buffer1[2][k]<<1)|(buffer1[3][k]>>7);
            buffer1[3][k]=(buffer1[3][k]<<1)|(buffer1[4][k]>>7);
            buffer1[4][k]=(buffer1[4][k]<<1);
          }

          for(int i=0; i<8; i++){
            lc.setRow(0,i,buffer1[0][i]);
            lc.setRow(1,i,buffer1[1][i]);
            lc.setRow(2,i,buffer1[2][i]);
            lc.setRow(3,i,buffer1[3][i]);
          }
          delay(10);
        }
      }
      happy();
    }
  }
}
