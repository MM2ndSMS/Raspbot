const int left1 = 13;  // Left1 라인 트레이스 센서 아두이노 13, Raspbot 27(X2)
const int left2 = 15;  // Left2 라인 트레이스 센서 아두이노 15, Raspbot 22(X1)
const int right1 = 11; // right1 라인 트레이스 센서 아두이노 11, Raspbot 17(X3)
const int right2 = 7; // right2 라인 트레이스 센서 아두이노 7, Raspbot 4(X4)

void setup() {
  pinMode(left1, INPUT);  // Left1 핀을 입력 모드로 설정
  pinMode(left2, INPUT);  // Left2 핀을 입력 모드로 설정
  pinMode(right1, INPUT); // Right1 핀을 입력 모드로 설정
  pinMode(right2, INPUT); // Right2 핀을 입력 모드로 설정
  Serial.begin(9600);     // 시리얼 통신 시작
}

void loop() {
  // 각 센서 값을 읽어서 변수에 저장
  int left1Value = digitalRead(left1);   // left1 핀에서 읽은 값을 left1Value에 저장
  int left2Value = digitalRead(left2);   // left2 핀에서 읽은 값을 left2Value에 저장
  int right1Value = digitalRead(right1); // right1 핀에서 읽은 값을 right1Value에 저장
  int right2Value = digitalRead(right2); // right2 핀에서 읽은 값을 right2Value에 저장

  // 센서 값을 개별적으로 시리얼 모니터에 출력
  Serial.print("Left1: ");  // "Left1: " 문자열을 시리얼 모니터에 출력
  Serial.print(left1Value); // left1Value 값을 시리얼 모니터에 출력

  Serial.print(" Left2: ");  // " Left2: " 문자열을 시리얼 모니터에 출력
  Serial.print(left2Value);  // left2Value 값을 시리얼 모니터에 출력

  Serial.print(" Right1: "); // " Right1: " 문자열을 시리얼 모니터에 출력
  Serial.print(right1Value); // right1Value 값을 시리얼 모니터에 출력

  Serial.print(" Right2: "); // " Right2: " 문자열을 시리얼 모니터에 출력
  Serial.println(right2Value); // right2Value 값을 시리얼 모니터에 출력하고 줄 바꿈

  delay(100); // 100ms 지연
}
