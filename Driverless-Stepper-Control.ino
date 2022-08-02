#define DELAY 5

int seq1[8] = {0,0,0,0,0,1,1,0};
int seq2[8] = {0,1,1,0,0,0,0,0};
int seq3[8] = {0,0,0,0,1,0,0,1};
int seq4[8] = {1,0,0,1,0,0,0,0};

void setup() {
  // put your setup code here, to run once:
  for(int i = 5; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void setPins(int arr[8]) {
  for(int i = 0; i < 8; i++) {
    digitalWrite(5+i, arr[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  setPins(seq1);
  delay(DELAY);
  setPins(seq2);
  delay(DELAY);
  setPins(seq3);
  delay(DELAY);
  setPins(seq4);
  delay(DELAY);
}
