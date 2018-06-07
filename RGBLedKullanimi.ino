const int kirmizi = 6;
const int yesil = 5;
const int mavi = 3;

void setup() {

  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);

  analogWrite(kirmizi,255);
  analogWrite(yesil,255);
  analogWrite(mavi,255);

  /*
      Ortak Anotlu RGB Led Kullananlar için

  analogWrite(kirmizi,255- istediğimiz değer);
  analogWrite(yesil,255- istediğimiz değer);
  analogWrite(mavi,255- istediğimiz değer);
   
  */
}

void loop() {

}
