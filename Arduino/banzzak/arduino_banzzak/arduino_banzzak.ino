#include <Adafruit_NeoPixel.h>
#include <LedControl.h>
#include <SoftwareSerial.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif

#define PIN 6
#define LED_COUNT 33

LedControl lc = LedControl(12,11,10,4);
SoftwareSerial BTSerial(3,2);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void normal(){
  byte nor[2][8] ={
  {
    B00000000,
    B01111110,
    B10000001,
    B10011001,
    B10011001,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B01111110,
    B10000001,
    B10011001,
    B10011001,
    B10000001,
    B01111110,
    B00000000
  }
  };

  for(int j=0; j<8; j++){
    lc.setRow(0,j,nor[0][j]);    
    lc.setRow(1,j,nor[1][j]);
  }
}

void happy2(){
  byte hap2[6][8] ={
  {
    B00000000,
    B01111110,
    B10000001,
    B10011001,
    B10011001,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B01111110,
    B10000010,
    B10011010,
    B10011010,
    B10000010,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B01111100,
    B10000100,
    B10011100,
    B10011100,
    B10000100,
    B01111100,
    B00000000
  },
  {
    B00000000,
    B01111000,
    B10001000,
    B10011000,
    B10011000,
    B10001000,
    B01111000,
    B00000000
  },
  {
    B00000000,
    B01110000,
    B10010000,
    B10010000,
    B10010000,
    B10010000,
    B01110000,
    B00000000
  },
  {
    B00000000,
    B01110000,
    B11000000,
    B11000000,
    B11000000,
    B11000000,
    B01110000,
    B00000000
  }
};

for(int j=0; j<6; j++){
  for(int k=0; k<8; k++){
    lc.setRow(0,k,hap2[j][k]);
    lc.setRow(1,k,hap2[j][k]);
  }
  delay(100);
}
delay(500);

for(int j=0; j<6; j++){
  for(int k=0; k<8; k++){
    lc.setRow(0,k,hap2[5-j][k]);
    lc.setRow(1,k,hap2[5-j][k]);
  }
  delay(100);
}
}


void angry2(){
  byte angry_left2[5][8] ={
  {
    B00000000,
    B01111110,
    B10000001,
    B10011001,
    B10011001,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B00111110,
    B01000001,
    B10001101,
    B10001101,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B00011110,
    B00100001,
    B01001101,
    B10001101,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B00001110,
    B00010001,
    B00100101,
    B01001101,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B00000110,
    B00001001,
    B00010101,
    B00101101,
    B01000001,
    B11111110,
    B00000000
  }
};

byte angry_right2[5][8] ={
  {
    B00000000,
    B01111110,
    B10000001,
    B10011001,
    B10011001,
    B10000001,
    B01111110,
    B00000000
  },
  {
    B00000000,
    B01111110,
    B10000001,
    B10001101,
    B10001101,
    B01000001,
    B00111110,
    B00000000
  },
  {
    B00000000,
    B01111110,
    B10000001,
    B10001101,
    B01001101,
    B00100001,
    B00011110,
    B00000000
  },
  {
    B00000000,
    B01111110,
    B10000001,
    B01001101,
    B00100101,
    B00010001,
    B00001110,
    B00000000
  },
  {
    B00000000,
    B11111110,
    B01000001,
    B00101101,
    B00010101,
    B00001001,
    B00000110,
    B00000000
  }
};

for(int j=0; j<5;j++){
  for(int k=0; k<8; k++){
    lc.setRow(0,k,angry_left2[j][k]);
    lc.setRow(1,k,angry_right2[j][k]);
  }
  delay(100);
}
delay(500);
for(int j=0; j<5;j++){
  for(int k=0; k<8; k++){
    lc.setRow(0,k,angry_left2[4-j][k]);
    lc.setRow(1,k,angry_right2[4-j][k]);
  }
  delay(100);
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
    lc.setRow(0,k,angry_left[j][k]);
    lc.setRow(1,k,angry_right[j][k]);
  }
  delay(100);
}
delay(500);
for(int j=0; j<5;j++){
  for(int k=0; k<8; k++){
    lc.setRow(0,k,angry_left[4-j][k]);
    lc.setRow(1,k,angry_right[4-j][k]);
  }
  delay(100);
}
}

volatile int BRIGHTNESS=255;

void setup(){
  //블루투스 세팅
  BTSerial.begin(9600); //시리얼모니터
  pinMode(13,OUTPUT); //Pin 13을 OUTPUT으로 설정

  //네오픽셀 세팅
  strip.begin(); //네오픽셀 제어 시작
  strip.show(); // 네오픽셀 점등
  strip.setBrightness(BRIGHTNESS);

  //도트매트릭스 세팅
  for(int num=0; num<4; num++){     //매트릭스 0번부터 3번까지 세팅
    lc.shutdown(num,false);  // 0~3번까지 매트릭스 절전모드 해제
    lc.setIntensity(num,8);  // 0~3번까지 매트릭스의 밝기 8로 선언,
    lc.clearDisplay(num);   //0~3번까지 매트릭스 led 초기화
  }
}




void loop(){
  if(BTSerial.available()){
    char one,two,three,bt;
    bt=BTSerial.read();
    two=BTSerial.read();
    three=BTSerial.read();
    one=BTSerial.read();
    
    if(bt=='s'){              //시작
      strip.setBrightness(BRIGHTNESS);
      for(int i=0; i<strip.numPixels(); i++){
          strip.setPixelColor(i,strip.Color(BRIGHTNESS,BRIGHTNESS,BRIGHTNESS));
      }
      strip.show();
      normal();
    }
    
    else if(bt=='w'){              //틀림
      if(BRIGHTNESS<=205){
        BRIGHTNESS+=50;
      }
      strip.setBrightness(BRIGHTNESS);
      for(int i=0; i<strip.numPixels(); i++){
          strip.setPixelColor(i,strip.Color(255,0,0));
      }
      strip.show();      
      angry2();
    }
    
    else if(bt=='c'){              //맞음
      if(BRIGHTNESS>50){
        BRIGHTNESS-=50;
      }
      strip.setBrightness(BRIGHTNESS);
      for(int i=0; i<strip.numPixels(); i++){
          strip.setPixelColor(i,strip.Color(0,255,0));
      }
      strip.show();
      happy2();
    }
    else if(bt=='e'){               //끝
      for(int num=0; num<2; num++){
        lc.clearDisplay(num);
      }
      for(int i=0; i<strip.numPixels(); i++){
          strip.setPixelColor(i,strip.Color(0,0,0));
      }
      strip.show();
    }
  }
}
