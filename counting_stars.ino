/*
  Kinetic Light Midterm
  by Yang Gao
  Reference: Tom Igoe
  2019.04.13
*/

const int Pin2 = 10;
const int Pin3 = 5;
const int Pin4 = 3;

int caseNumber;
int d = 10;
float m = 0.2;
float n = 0.4;
float o = 0.5;

int dark =100;
int back = 0;

void setup() {
  Serial.begin(9600);
  // set pins 2 through 13 as outputs:

  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);

}

void loop() {
  //  caseNumber = random(1, 4);
  //  caseNumber = 3;
  for (int caseNumber = 0; caseNumber <= 15; caseNumber++) {
    Serial.println(caseNumber);
    switch (caseNumber) {
      case 1:
        for (float brightness = dark; brightness < 255; brightness += m) {
          analogWrite(Pin2, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {
          analogWrite(Pin2, brightness);

          delay(10);
        }
        analogWrite(Pin2, back);
        break;
      case 2:
        for (float brightness = dark; brightness < 255; brightness += m) {

          analogWrite(Pin3, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {

          analogWrite(Pin3, brightness);

          delay(10);
        }
        analogWrite(Pin3, back);
        break;
      case 3:
        for (float brightness = dark; brightness < 255; brightness += m) {

          analogWrite(Pin4, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {

          analogWrite(Pin4, brightness);

          delay(10);
        }
        analogWrite(Pin4, back);
        break;
      case 4:
        for (float brightness = dark; brightness < 255; brightness += m) {
          analogWrite(Pin2, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {
          analogWrite(Pin2, brightness);

          delay(10);
        }
        analogWrite(Pin2, back);
        break;
      case 5:
        for (float brightness = dark; brightness < 255; brightness += n) {

          analogWrite(Pin3, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= n) {

          analogWrite(Pin3, brightness);

          delay(10);
        }
        analogWrite(Pin3, back);
        break;
      case 6:
        for (float brightness = dark; brightness < 255; brightness += n) {

          analogWrite(Pin4, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= n) {

          analogWrite(Pin4, brightness);

          delay(10);
        }
        analogWrite(Pin4, back);
        break;
      case 7:
        for (float brightness = dark; brightness < 255; brightness += o) {
          analogWrite(Pin2, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= o) {
          analogWrite(Pin2, brightness);

          delay(10);
        }
        analogWrite(Pin2, back);
        break;
      case 8:
        for (float brightness = dark; brightness < 255; brightness += o) {

          analogWrite(Pin3, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= o) {

          analogWrite(Pin3, brightness);

          delay(10);
        }
        analogWrite(Pin3, back);
        break;
      case 9:
        for (float brightness = dark; brightness < 255; brightness += o) {

          analogWrite(Pin4, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= o) {

          analogWrite(Pin4, brightness);

          delay(10);
        }
        analogWrite(Pin4, back);
        break;
      case 10:
        for (float brightness = dark; brightness < 255; brightness += n) {
          analogWrite(Pin2, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= n) {
          analogWrite(Pin2, brightness);

          delay(10);
        }
        analogWrite(Pin2, back);
        break;
      case 11:
        for (float brightness = dark; brightness < 255; brightness += n) {

          analogWrite(Pin3, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= n) {

          analogWrite(Pin3, brightness);

          delay(10);
        }
        analogWrite(Pin3, back);
        break;
      case 12:
        for (float brightness = dark; brightness < 255; brightness += n) {

          analogWrite(Pin4, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= n) {

          analogWrite(Pin4, brightness);

          delay(10);
        }
        analogWrite(Pin4, back);
        break;
      case 13:
        for (float brightness = dark; brightness < 255; brightness += m) {
          analogWrite(Pin2, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {
          analogWrite(Pin2, brightness);

          delay(10);
        }
        analogWrite(Pin2, back);
        break;
      case 14:
        for (float brightness = dark; brightness < 255; brightness += m) {

          analogWrite(Pin3, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {

          analogWrite(Pin3, brightness);

          delay(10);
        }
        analogWrite(Pin3, back);
        break;
      case 15:
        for (float brightness = dark; brightness < 255; brightness += m) {

          analogWrite(Pin4, brightness);

          delay(10);
        }

        for (float brightness = 255; brightness >= dark; brightness -= m) {

          analogWrite(Pin4, brightness);

          delay(10);
        }
        analogWrite(Pin4, back);
        break;
      default:
        int brightness = 0;

        analogWrite(Pin2, brightness);
        analogWrite(Pin3, brightness);
        analogWrite(Pin4, brightness);
    }


  }

}
