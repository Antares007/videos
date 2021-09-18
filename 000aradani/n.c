#include <stdio.h>
#include <stdlib.h>
#pragma clang diagnostic ignored "-Wmultichar"
typedef struct p_s {
  union {
    void (*c)(struct p_s *, long, long, struct p_s *);
    void *v;
    char b;
    short w;
    int d;
    long q;
    unsigned char B;
    unsigned short W;
    unsigned int D;
    unsigned long Q;
  };
} p_t;
typedef void (*n_t)(p_t *, long, long, p_t *);

void one(p_t *ο, long α, long ρ, p_t *σ) {
  ο[α++].Q = 1;
  σ[ρ + 1].c(ο, α, ρ, σ);
}
void add(p_t *ο, long α, long ρ, p_t *σ) {
  long r = ο[--α].q;
  long l = ο[--α].q;
  ο[α++].q = l + r;
  σ[ρ + 1].c(ο, α, ρ, σ);
}
static void da_an(p_t *ο, long α, long ρ, p_t *σ) {
  ρ += 4;
  σ[ρ].c(ο, α, ρ, σ);
}
static void da_da(p_t *ο, long α, long ρ, p_t *σ) {
  ρ += 3;
  n_t n = σ[ρ++].c;
  n(ο, α, ρ, σ);
}
void da(p_t *ο, long α, long ρ, p_t *σ) {
  n_t araarkhi = σ[ρ + 2].c;
  σ[--ρ].c = ο[--α].c;
  σ[--ρ].c = araarkhi;
  σ[--ρ].c = da_da;
  σ[--ρ].c = da_an;
  ο[α - 1].c(ο, α - 1, ρ, σ);
}
static void aradani_ara(p_t *ο, long α, long ρ, p_t *σ) {
  ρ += 6;
  n_t n = σ[ρ - 3].c;
  n(ο, α, ρ, σ);
}
static void aradani_da(p_t *ο, long α, long ρ, p_t *σ) {
  ρ += 6;
  n_t n = σ[ρ - 2].c;
  n(ο, α, ρ, σ);
}
static void aradani_an(p_t *ο, long α, long ρ, p_t *σ) {
  ρ += 6;
  n_t n = σ[ρ - 1].c;
  n(ο, α, ρ, σ);
}
void aradani(p_t *ο, long α, long ρ, p_t *σ) {
  σ[--ρ].c = ο[--α].c;
  σ[--ρ].c = ο[--α].c;
  σ[--ρ].c = ο[--α].c;
  σ[--ρ].c = aradani_ara;
  σ[--ρ].c = aradani_da;
  σ[--ρ].c = aradani_an;
  n_t sgadasabmeli = ο[--α].c;
  sgadasabmeli(ο, α, ρ, σ);
}
void an_gadasvla(p_t *ο, long α, long ρ, p_t *σ) {
  printf("an\n"), σ[ρ + 0].c(ο, α, ρ, σ);
}
void da_gadasvla(p_t *ο, long α, long ρ, p_t *σ) {
  printf("da\n"), σ[ρ + 1].c(ο, α, ρ, σ);
}
void ara_gadasvla(p_t *ο, long α, long ρ, p_t *σ) {
  printf("ara\n"), σ[ρ + 2].c(ο, α, ρ, σ);
}
void test_aradani(p_t *ο, long α, long ρ, p_t *σ) {
  ο[α++].c = an_gadasvla;
  ο[α++].c = da_gadasvla;
  ο[α++].c = an_gadasvla;
  ο[α++].c = ara_gadasvla;
  ο[α++].c = aradani;
  ο[α++].c = da_gadasvla;
  ο[α++].c = an_gadasvla;
  ο[α++].c = ara_gadasvla;
  ο[α++].c = aradani;
  ο[α++].c = da_gadasvla;
  ο[α++].c = an_gadasvla;
  ο[α++].c = ara_gadasvla;
  aradani(ο, α, ρ, σ);
}

void two(p_t *ο, long α, long ρ, p_t *σ) {
  ο[α++].c = one;
  ο[α++].c = one;
  ο[α++].c = da;
  ο[α++].c = add;
  da(ο, α, ρ, σ);
}
void seven(p_t *ο, long α, long ρ, p_t *σ) {
  ο[α++].c = one;
  ο[α++].c = two;
  ο[α++].c = da;
  ο[α++].c = two;
  ο[α++].c = da;
  ο[α++].c = two;
  ο[α++].c = da;
  ο[α++].c = add;
  ο[α++].c = da;
  ο[α++].c = add;
  ο[α++].c = da;
  ο[α++].c = add;
  da(ο, α, ρ, σ);
}
void an_arkhi(p_t *ο, long α, long ρ, p_t *σ) { printf("an\n"); }
void da_arkhi(p_t *ο, long α, long ρ, p_t *σ) { printf("da\n"); }
void ara_arkhi(p_t *ο, long α, long ρ, p_t *σ) { printf("ara\n"); }
int main() {
  p_t *ο = malloc(1 << 13), *σ = &ο[(1 << 13)];
  long α = 0, ρ = 0;
  σ[--ρ].c = ara_arkhi;
  σ[--ρ].c = da_arkhi;
  σ[--ρ].c = an_arkhi;
  seven(ο, α, ρ, σ);
  test_aradani(ο, α, ρ, σ);
  free(ο);
}
