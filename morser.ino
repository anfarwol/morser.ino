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
  for (int it = 0; it < message.length(); it++) {
    if (message[it] == 'a' || message[it] == 'A') {
      a();
    }
    else if (message[it] == 'b' || message[it] == 'B') {
      b();
    }
    else if (message[it] == 'c' || message[it] == 'C') {
      c();
    }
    else if (message[it] == 'd' || message[it] == 'D') {
      d();
    }
    else if (message[it] == 'e' || message[it] == 'E') {
      e();
    }
    else if (message[it] == 'f' || message[it] == 'F') {
      f();
    }
    else if (message[it] == 'g' || message[it] == 'G') {
      g();
    }
    else if (message[it] == 'h' || message[it] == 'H') {
      h();
    }
    else if (message[it] == 'i' || message[it] == 'I') {
      i();
    }
    else if (message[it] == 'j' || message[it] == 'J') {
      j();
    }
    else if (message[it] == 'k' || message[it] == 'K') {
      k();
    }
    else if (message[it] == 'l' || message[it] == 'l') {
      l();
    }
    else if (message[it] == 'm' || message[it] == 'M') {
      m();
    }
    else if (message[it] == 'n' || message[it] == 'N') {
      n();
    }
    else if (message[it] == 'o' || message[it] == 'O') {
      o();
    }
    else if (message[it] == 'p' || message[it] == 'P') {
      p();
    }
    else if (message[it] == 'q' || message[it] == 'Q') {
      q();
    }
    else if (message[it] == 'r' || message[it] == 'R') {
      r();
    }
    else if (message[it] == 's' || message[it] == 'S') {
      s();
    }
    else if (message[it] == 't' || message[it] == 'T') {
      t();
    }
    else if (message[it] == 'u' || message[it] == 'U') {
      u();
    }
    else if (message[it] == 'v' || message[it] == 'V') {
      v();
    }
    else if (message[it] == 'w' || message[it] == 'W') {
      w();
    }
    else if (message[it] == 'x' || message[it] == 'X') {
      x();
    }
    else if (message[it] == 'y' || message[it] == 'Y') {
      y();
    }
    else if (message[it] == 'z' || message[it] == 'Z') {
      z();
    }
    else if (message[it] == '0') {
      zero();
    }
    else if (message[it] == '1') {
      one();
    }
    else if (message[it] == '2') {
      two();
    }
    else if (message[it] == '3') {
      three();
    }
    else if (message[it] == '4') {
      four();
    }
    else if (message[it] == '5') {
      five();
    }
    else if (message[it] == '6') {
      six();
    }
    else if (message[it] == '7') {
      seven();
    }
    else if (message[it] == '8') {
      eight();
    }
    else if (message[it] == '9') {
      nine();
    }
    else if (message[it] == ' ') {
      wordend();
    }
    else if (message[it] == '.') {
      period();
    }
    else if (message[it] == ',') {
      comma();
    }
    else if (message[it] == '?') {
      question();
    }
    else if (message[it] == '\'') {
      apostrophe();
    }
    else if (message[it] == '!') {
      exclamation();
    }
    else if (message[it] == '/') {
      slash();
    }
    else if (message[it] == '(') {
      parenthesis_open();
    }
    else if (message[it] == ')') {
      parenthesis_close();
    }
    else if (message[it] == ':') {
      colon();
    }
    else if (message[it] == ';') {
      semicolon();
    }
    else if (message[it] == '=') {
      equal();
    }
    else if (message[it] == '+') {
      plus();
    }
    else if (message[it] == '-') {
      minus();
    }
    else if (message[it] == '"') {
      quotation();
    }
    else if (message[it] == '@') {
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
