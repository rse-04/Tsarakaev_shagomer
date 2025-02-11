#define KNOP1 2
#define KNOP2 3
#define PIN_LED 13
#include <TM1637.h>

// Pin 2 — CLK, Pin 3 — DIO [1](https://developer.alexanderklimov.ru/arduino/tm1637.php)
TM1637 tm1637(2, 3);

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>
#include <MPU6050.h>

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
MPU6050 mpu;



//способности: сбор данных о шагах 
//ывод данные на экран(vivmat)
void ecran(a){
  // выводим число
  tm1637.dispNumber(2020);
  
}

//проверитть кноп 1()
void knop1(){
 int sensorVal = digitalRead(KNOP1);
  Serial.println(sensorVal);  // Выводим значение в мониторе порта
  // Логика работы кнопки такова: если кнопка не нажата, то на вход поступает высокий уровень сигнала, если нажали — то на входе будет логический ноль
  if (sensorVal == 0) {
    
  }
  }

}
void knop2(){
 int sensorVal = digitalRead(KNOP2);
  Serial.println(sensorVal);  // Выводим значение в мониторе порта
  // Логика работы кнопки такова: если кнопка не нажата, то на вход поступает высокий уровень сигнала, если нажали — то на входе будет логический ноль
  if (sensorVal == 0) {
      ecran(zaryad)
  }
  }

}
#define PIN_INPUT 2
#define PIN_LED 13

void setup() {
  Serial.begin(9600);
  pinMode(PIN_INPUT, INPUT);
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  pinMode(PIN_INPUT, INPUT);
  pinMode(PIN_LED, OUTPUT);
    tm1637.init();  // инициализируем библиотеку
  tm1637.setBrightness(5);  // устанавливаем яркость дисплея
}
Serial.begin(9600);
    if (!accel.begin()) {
        Serial.println("No ADXL345 detected");
        while (1);
    }
    mpu.initialize();
}
void loop() {
 tm1637.init();  // инициализируем библиотеку
  tm1637.setBrightness(5);  // устанавливаем яркость дисплея
}
  sensors_event_t event;
    accel.getEvent(&event);
    Serial.print("X: ");
    Serial.print(event.acceleration.x);
    Serial.print(" ");
    Serial.print("Y: ");
    Serial.print(event.acceleration.y);
    Serial.print(" ");
    Serial.print(" Z: ");
    Serial.print(event.acceleration.z);
    Serial.println(" m/s^2");
    Serial.print("Gyro X: ");
    Serial.print(mpu.getRotationX());
    Serial.print(" ");
    Serial.print("Gyro Y: ");
    Serial.print(mpu.getRotationY());
    Serial.print(" ");
    Serial.print("Gyro Z: ");
    Serial.print(mpu.getRotationZ());
    Serial.println(" deg/s");
    delay(500);
 
