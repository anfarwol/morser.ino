//MORSER.INO
//ITU standard Morse code string translation for Arduino's built-in LED by Anfarwol (@adrianvert)

//Supported characters:
//English alphabet letters;
//numbers from 0 to 9;
//symbols ".", ",", "?", "'", "!", "/", "(", ")", ":", ";", "=", "+", "-", """ and "@".

int dot_length = 417;
String message = "SOS";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot_length);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot_length);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot_length * 3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot_length);
}

void space() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot_length * 2);
}

void wordend() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot_length * 6);
}

void a() {
  dot(); dash(); space();
}

void b() {
  dash(); dot(); dot(); dot(); space();
}

void c() {
  dash(); dot(); dash(); dot(); space();
}

void d() {
  dash(); dot(); dot(); space();
}

void e() {
  dot(); space();
}

void f() {
  dot(); dot(); dash(); dot(); space();
}

void g() {
  dash(); dash(); dot(); space();
}

void h() {
  dot(); dot(); dot(); dot(); space();
}

void i() {
  dot(); dot(); space(); space();
}

void j() {
  dot(); dash(); dash(); dash(); space();
}

void k() {
  dash(); dot(); dash(); space();
}

void l() {
  dot(); dash(); dot(); dot(); space();
}

void m() {
  dash(); dash(); space();
}

void n() {
  dash(); dot(); space();
}

void o() {
  dash(); dash(); dash(); space();
}

void p() {
  dot(); dash(); dash(); dot(); space();
}

void q() {
  dash(); dash(); dot(); dash(); space();
}

void r() {
  dot(); dash(); dot(); space();
}

void s() {
  dot(); dot(); dot(); space();
}

void t() {
  dash(); space();
}

void u() {
  dot(); dot(); dash(); space();
}

void v() {
  dot(); dot(); dot(); dash(); space();
}

void w() {
  dot(); dash(); dash(); space();
}

void x() {
  dash(); dot(); dot(); dash(); space();
}

void y() {
  dash(); dot(); dash(); dash(); space();
}

void z(){ 
  dash(); dash(); dot(); dot(); space();
}

void zero() {
  dash(); dash(); dash(); dash(); dash(); space();
}

void one() {
  dot(); dash(); dash(); dash(); dash(); space();
}

void two() {
  dot(); dot(); dash(); dash(); dash(); space();
}

void three() {
  dot(); dot(); dot(); dash(); dash(); space();
}

void four() {
  dot(); dot(); dot(); dot(); dash(); space();
}

void five() {
  dot(); dot(); dot(); dot(); dot(); space();
}

void six() {
  dash(); dot(); dot(); dot(); dot(); space();
}

void seven() {
  dash(); dash(); dot(); dot(); dot(); space();
}

void eight() {
  dash(); dash(); dash(); dot(); dot(); space();
}

void nine() {
  dash(); dash(); dash(); dash(); dot(); space();
}

void period() {
  dot(); dash(); dot(); dash(); dot(); dash(); space();
}

void comma() {
  dash(); dash(); dot(); dot(); dash(); dash(); space();
}

void question() {
  dot(); dot(); dash(); dash(); dot(); dot(); space();
}

void apostrophe() {
  dot(); dash(); dash(); dash(); dash(); dot(); space();
}

void exclamation() {
  dash(); dot(); dash(); dot(); dash(); dash(); space();
}

void slash() {
  dash(); dot(); dot(); dash(); dot(); space();
}

void parenthesis_open() {
  dash(); dot(); dash(); dash(); dot(); space();
}

void parenthesis_close() {
  dash(); dot(); dash(); dash(); dot(); dash(); space();
}

void colon() {
  dash(); dash(); dash(); dot(); dot(); dot(); space;
}

void semicolon() {
  dash(); dot(); dash(); dot(); dash(); dot(); space();
}

void equal() {
  dash(); dot(); dot(); dot(); dash(); space();
}

void plus() {
  dot(); dash(); dot(); dash(); dot(); space();
}

void minus() {
  dash(); dot(); dot(); dot(); dot(); dash(); space();
}

void quotation() {
  dot(); dash(); dot(); dot(); dash(); dot(); space();
}

void at() {
  dot(); dash(); dash(); dot(); dash(); dot(); space();
}

void error() {
  e(); e(); e(); e(); e(); e(); e(); e(); space();
}

void morse(String message) {
  int message_length = message.length();
  for (int it = 0; it < message_length; it++) {
    char character = message[it];
    if (character == 'a' || character == 'A') {
      a();
    }
    else if (character == 'b' || character == 'B') {
      b();
    }
    else if (character == 'c' || character == 'C') {
      c();
    }
    else if (character == 'd' || character == 'D') {
      d();
    }
    else if (character == 'e' || character == 'E') {
      e();
    }
    else if (character == 'f' || character == 'F') {
      f();
    }
    else if (character == 'g' || character == 'G') {
      g();
    }
    else if (character == 'h' || character == 'H') {
      h();
    }
    else if (character == 'i' || character == 'I') {
      i();
    }
    else if (character == 'j' || character == 'J') {
      j();
    }
    else if (character == 'k' || character == 'K') {
      k();
    }
    else if (character == 'l' || character == 'l') {
      l();
    }
    else if (character == 'm' || character == 'M') {
      m();
    }
    else if (character == 'n' || character == 'N') {
      n();
    }
    else if (character == 'o' || character == 'O') {
      o();
    }
    else if (character == 'p' || character == 'P') {
      p();
    }
    else if (character == 'q' || character == 'Q') {
      q();
    }
    else if (character == 'r' || character == 'R') {
      r();
    }
    else if (character == 's' || character == 'S') {
      s();
    }
    else if (character == 't' || character == 'T') {
      t();
    }
    else if (character == 'u' || character == 'U') {
      u();
    }
    else if (character == 'v' || character == 'V') {
      v();
    }
    else if (character == 'w' || character == 'W') {
      w();
    }
    else if (character == 'x' || character == 'X') {
      x();
    }
    else if (character == 'y' || character == 'Y') {
      y();
    }
    else if (character == 'z' || character == 'Z') {
      z();
    }
    else if (character == '0') {
      zero();
    }
    else if (character == '1') {
      one();
    }
    else if (character == '2') {
      two();
    }
    else if (character == '3') {
      three();
    }
    else if (character == '4') {
      four();
    }
    else if (character == '5') {
      five();
    }
    else if (character == '6') {
      six();
    }
    else if (character == '7') {
      seven();
    }
    else if (character == '8') {
      eight();
    }
    else if (character == '9') {
      nine();
    }
    else if (character == ' ') {
      wordend();
    }
    else if (character == '.') {
      period();
    }
    else if (character == ',') {
      comma();
    }
    else if (character == '?') {
      question();
    }
    else if (character == '\'') {
      apostrophe();
    }
    else if (character == '!') {
      exclamation();
    }
    else if (character == '/') {
      slash();
    }
    else if (character == '(') {
      parenthesis_open();
    }
    else if (character == ')') {
      parenthesis_close();
    }
    else if (character == ':') {
      colon();
    }
    else if (character == ';') {
      semicolon();
    }
    else if (character == '=') {
      equal();
    }
    else if (character == '+') {
      plus();
    }
    else if (character == '-') {
      minus();
    }
    else if (character == '"') {
      quotation();
    }
    else if (character == '@') {
      at();
    }    
    else {
      error();
    }
  }
  wordend();
}

void loop() {    
  morse(message);  
}
