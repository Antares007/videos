#include "oars.h"
#include <stdio.h>
// clang-format off
N(one) {
  A(1) C(1);
}
N(add) {
  R(long, r);
  R(long, l);
  A(l + r) C(1);
}
N(D3D1C2) {
  ρ += 3, ρ += 1, C(2);
}
N(D3U1O) {
  ρ += 3, A(σ[ρ++].v) O;
}
N(D3D1C0) {
  ρ += 3, ρ += 1, C(0);
}
N(and) {
  // Notice the last N-word "and" is removed by dOt.
  // Let's realize that we are now executing the
  // M-text of the "and" N-word.
  // So we need to move the connecting
  // N-word from the N-text space to S-pith.
  σ[--ρ].c = ο[--α].c;

  σ[--ρ].v = D3D1C2;
  σ[--ρ].v = D3U1O;
  σ[--ρ].v = D3D1C0;
  // Attach the adapter rays to S-pith.
  // The personality of the adapter is determined by its name.
  O;
};
N(two) {
  // We wrote the appropriate N-text and put a dOt at the end.
  // The dOt is the "macro" that takes the last N-word
  // from the N-text space and continues to execute the sentence
  // through it.
  A5(one, one, and, add, and) O;
}
N(seven) {
  A13(one, two, and, add, and, two, and, add, and, two, and, add, and) O;
}
N(gcd) {
  R(long, y);
  R(long, x);
  if (x < y)
    A3(x, y - x, gcd) O;
  else if (y < x)
    A3(x - y, y, gcd) O;
  else
    A(x) C(1);
}
N(test_gcd) {
  A3(18, 12, gcd) O;
}
N(rot) {
}
N(rod) {
  R(long, rez);
  printf("and: %ld\n", rez);
}
N(ror) {
}
int main() {
  p_t o[64], *s = o + (sizeof(o) / sizeof(*o));
  long a = 0, r = 0;
  // Here we allocated space and defined blank OarS.
  // The following comment line represents a state of OarS,
  // and the vertical bar divides N-text space from S-pith.
  s[--r].c = rot;
  s[--r].c = rod;
  s[--r].c = ror;
  // Here we put the final rays into "S-pith."
  // In which we find ourselves when the execution
  // of the sentence is completed.
  two(o, a, r, s);
  seven(o, a, r, s);
  test_gcd(o, a, r, s);
}
