**Function with Average**
```c++
void setup() {
  Serial.begin(9600);
}

void loop() {
  //define the numbers to take the avrage from
  int x1 = 15;
  int x2 = 30;
  int x3 = 60;

  // define avrage with three arguments insde ()
  int avg = avrage(x1, x2, x3); //can be variables themselves

  // print the avrage
  Serial.println(avg);
  delay(1000);
}
long avrage(int x, int y, int z) {
  int answer;
  answer = (x + y + z) / 3;
  return answer;
}
```
___
**Fritzing**
![alt text](https://github.com/sbelofsky/arduinoroboticssummer2017/blob/master/images/Screen%20Shot%202017-06-09%20at%206.09.59%20PM.png?raw=true)
I am still unclear with schematic view which is why it looks hard to understand. I plan to get a better understanding and revise this in the future.

