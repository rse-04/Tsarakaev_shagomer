#define KNOP1 2
#define KNOP2 3
#define PIN_LED 13


//способности: сбор данных о шагах 
//ывод данные на экран(vivmat)
void ecran(a){}

//проверитть кноп 1()
void knop1(){
 int sensorVal = digitalRead(KNOP1);
  Serial.println(sensorVal);  // Выводим значение в мониторе порта
  // Логика работы кнопки такова: если кнопка не нажата, то на вход поступает высокий уровень сигнала, если нажали — то на входе будет логический ноль
  if (sensorVal == 0) {
      ecran(shag)
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

проверить кноп 2
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

}

void loop() {
  // put your main code here, to run repeatedly:


}
