#define KNOP1 2
#define KNOP2 3
#define PIN_LED 13



//mpu6059
#include "I2Cdev.h"
#include "MPU6050.h"
# define T_OUT 20
MPU6050 accel;
unsigned long int t_next;
//--------
//спросить датчик
void data(){
  long int t = millis();
    if( t_next < t ){
        int16_t ax_raw, ay_raw, az_raw, gx_raw, gy_raw, gz_raw;
        t_next = t + T_OUT;
        accel.getMotion6(&ax_raw, &ay_raw, &az_raw, &gx_raw, &gy_raw, &gz_raw);
        Serial.println(ay_raw); // вывод в порт проекции ускорения на ось Y
       // используем ускорение по Z az_raw
    }
}

//способности: сбор данных о шагах 
//ывод данные на экран(vivmat)
void ecran(a){}

//проверитть кноп 1()

int k1=0;
int k2=0;



void knop1(){
 int sensorVal = digitalRead(KNOP1);
  Serial.println(sensorVal);  // Выводим значение в мониторе порта
  // Логика работы кнопки такова: если кнопка не нажата, то на вход поступает высокий уровень сигнала, если нажали — то на входе будет логический ноль
  if (sensorVal == 0) {
    k1=1;
  }
  }

}
void knop2(){
 int sensorVal = digitalRead(KNOP2);
  Serial.println(sensorVal);  // Выводим значение в мониторе порта
  // Логика работы кнопки такова: если кнопка не нажата, то на вход поступает высокий уровень сигнала, если нажали — то на входе будет логический ноль
  if (sensorVal == 0) {
    k2=1;
  }
  }

}

void reset(){
  k1=0;
  k2=0;
}

// проверить кноп 2
#define PIN_INPUT 2
#define PIN_LED 13

void setup() {
  Serial.begin(9600);
  pinMode(PIN_INPUT, INPUT);
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  pinMode(PIN_INPUT, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int sensorVal = digitalRead(PIN_INPUT);
  Serial.println(sensorVal);  // Выводим значение в мониторе порта
  // Логика работы кнопки такова: если кнопка не нажата, то на вход поступает высокий уровень сигнала, если нажали — то на входе будет логический ноль
  if (sensorVal == HIGH) {
    digitalWrite(PIN_LED, LOW);  // Кнопка не нажата — выключаем светодиод
  } else {
    digitalWrite(PIN_LED, HIGH);// А теперь кнопка нажата — светодиод включается
  }




void setup() {
  int s=1
   Serial.begin(9600);
    accel.initialize();
    Serial.println(accel.testConnection()// "MPU6050 connection successful" : "MPU6050 connection failed");
}

void loop() {
  knop1();
  knop2();

  //тригеры
  if (s==0)
    if (k1==1 or k2==1){
      s=1;
      reset()
   }
  }


  //реакции
//   0. ждать
   if (s==0) {
       datch();
    }
  // 2. вывести данные
      if (s==1) {
         if (k1==1){
          ecran(zaryad)
         }
          if (k2==1){
          ecran(shagi)
         }
      }

     // 3. Разряжен;
     if (s==2) {
      if k=1
      
    }
}
