#include <stdio.h>
int main() {
  int hr_i, hr_f, min_i, min_f, tem_i, tem_f, dur_jogo_hr, dur_jogo_min,
      real_dur_min, real_dur_hr;
  printf("Digite a hora do início do jogo: ");
  scanf("%d", &hr_i);
  printf("Digite a minutagem do início do jogo: ");
  scanf("%d", &min_i);
  printf("Digite a hora no final do jogo: ");
  scanf("%d", &hr_f);
  printf("Digite a minutagem no final do jogo: ");
  scanf("%d", &min_f);
  if (hr_f > hr_i && min_f > min_i) {
    dur_jogo_hr = hr_f - hr_i;
    dur_jogo_min = min_f - min_i;
    printf("A duracao do jogo foi de: %d:%d", dur_jogo_hr, dur_jogo_min);
  } else if (hr_f > hr_i && min_i > min_f) {
    dur_jogo_hr = hr_f - hr_i - 1;
    dur_jogo_min = (60 - min_i) + min_f;
    if (dur_jogo_min >= 60) {
      real_dur_min = dur_jogo_min - 60;
      real_dur_hr = dur_jogo_hr + 1;
      printf("A duracao do jogo foi de: %d:%d", real_dur_hr, real_dur_min);
    } else
      printf("A duracao do jogo foi de: %d:%d", dur_jogo_hr, dur_jogo_min);

  } else if (hr_i > hr_f && min_i > min_f) {
    dur_jogo_hr = (24 - hr_i) + hr_f;
    dur_jogo_min = (60 - min_i) + min_f;
    if (dur_jogo_min >= 60) {
      real_dur_min = dur_jogo_min - 60;
      real_dur_hr = dur_jogo_hr + 1;
      printf("A duracao do jogo foi de: %d:%d", real_dur_hr, real_dur_min);
    } else
      printf("A duracao do jogo foi de: %d:%d", dur_jogo_hr, dur_jogo_min);
  } else if (hr_i > hr_f && min_f > min_i) {
    dur_jogo_hr = (24 - hr_i) + hr_f;
    dur_jogo_min = min_f - min_i;
    printf("A duracao do jogo foi de: %d:%d", dur_jogo_hr, dur_jogo_min);
  } else if (hr_i == hr_f && min_f > min_i) {
    dur_jogo_min = min_f - min_i;
    printf("A duracao do jogo foi de: 00:%d", dur_jogo_min);
  } else if (hr_i == hr_f && min_i > min_f) {
    dur_jogo_min = (60 - min_i) + min_f;
    if (dur_jogo_min >= 60) {
      real_dur_min = dur_jogo_min - 60;
      printf("A duracao do jogo foi de: 01:%d", real_dur_min);
    } else
      printf("A duracao do jogo foi de: 00:%d", real_dur_min);
  } else if (hr_i == hr_f && min_i == min_f)
    printf("A duracao do jogo foi de: 24:00");
  else
    ("Insira um horario valido");
}
