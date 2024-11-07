#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_hu_HU.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_pt_PT.h>
#include <Keyboard_sv_SE.h>
int a = 10;
int b = 9;
int c = 8;
int d = 7;
int e = 6;
int f = 5;
int g = 4;
int h = 3;
int x = 0;
int y = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);
  pinMode(d, INPUT);
  pinMode(e, INPUT);
  pinMode(f, INPUT);
  pinMode(g, INPUT);
  pinMode(h, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(A1);
  y=analogRead(A0);
  if (x==0) {
    Keyboard.press(KEY_LEFT_ARROW);
  }else{
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if (x > 1000) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }else{
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  if (y==0) {
    Keyboard.press(KEY_UP_ARROW);
  }else{
    Keyboard.release(KEY_UP_ARROW);
  }
  if (y > 1000) {
    Keyboard.press(KEY_DOWN_ARROW);
  }else{
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if(digitalRead(a) == LOW){
    Keyboard.press('s');
  }else{
    Keyboard.release('s');
  }
  if(digitalRead(b) == LOW){
    Keyboard.press('d');
  }else{
    Keyboard.release('d');
  }
  if(digitalRead(c) == LOW){
    Keyboard.press('f');
  }else{
    Keyboard.release('f');
  }
  if(digitalRead(d) == LOW){
    Keyboard.press('k');
  }else{
    Keyboard.release('k');
  }
  if(digitalRead(e) == LOW){
    Keyboard.press('l');
  }else{
    Keyboard.release('l');
  }
  if(digitalRead(f) == LOW){
    Keyboard.press(KEY_LEFT_SHIFT);
  }else{
    Keyboard.release(KEY_LEFT_SHIFT);
  }
  if(digitalRead(g) == LOW){
    Keyboard.press(';');
  }else{
    Keyboard.release(';');
  }
  if(digitalRead(h) == LOW){
    Keyboard.press(KEY_RIGHT_SHIFT);
  }else{
    Keyboard.release(KEY_RIGHT_SHIFT);
  }
}

