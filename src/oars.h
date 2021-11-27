#pragma once
/*
               init                           next
   ...........................................................
        α|             |ρ        .            supp
     ο - 1B9GtuX7W1QAjkEcc - σ   .            ortm           
         YSmTFWuAxLbjetn8g       .          α|    |ρ   
               supp              . ο - 1B9GtuX7W1QAjkEcc - σ
               ortm              .     YSmTFWuAxLbjetn8g
               eple              .            eple
               ased              .            ased
               onat              .            onat
               eple              .            eple
               ase.              .            ase.
   ο + α <= σ + ρ | σ[ρ+2] = არა/not | σ[ρ+1] = და/and | σ[ρ+0] = ან/or
M-word.       Any instruction from the CPU instruction set.
M-text space. Continuous space in the random access memory (RAM) of a computer.
M-text.       A bunch of M-words in the M-text space.
              Let's visualize it as a vertical line of a cross.
OarS.         M-text space is used as two stack-like structures facing each other.
              From "ο" to "α" let's call it the N-text space,
          and from "σ" down to "ρ" let's call it S-pith.
              Let's visualize it as a horizontal line of a cross.
N-text.       A bunch of N-words is composed according to syntax rules.
N-word.       Void C function with four fixed parameters "ο," "α," "ρ," and "σ."
              Next, the M-text defines the N-word, and finally,
              the N-word must answer the question to act as a whole word.
              That means that the last M-word must be a jump (goto) into S-pith.
              In other words, the N-word must decide which junction ray/adapter
              to use to continue the execution of the sentence.
  "My first remark is that, although the programmer's activity ends
  when he has constructed a correct program, the process taking
  place under control of his program is the true subject matter
  of his activity, for it is this process that has to accomplish
  the desired effect; it is this process that in its dynamic
  behavior has to satisfy the desired specifications." Edsger Wybe Dijkstra.
*/
typedef struct p_s {
  union {
    void (*c)(struct p_s *, unsigned long, long, struct p_s *);
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
#define OARS p_t *ο, unsigned long α, long ρ, p_t *σ
#define CAT_(a, b) a##b
#define CAT(a, b) CAT_(a, b)

#define N(n) void n(OARS)
#define T(n) n##ο, n##α, n##ρ, n##σ
#define R(T, n) T n = (T)ο[--α].v;
#define As(T, n)                                                               \
  struct T n =                                                                 \
      (α += wordCountOf(struct T), (struct T *)&ο[α - wordCountOf(struct T)])
#define Rs(T, n) struct T n = ((struct T *)&ο[α -= wordCountOf(struct T)])

#define C(r) σ[ρ + (r)].c(ο, α, ρ, σ)
#define O ο[α - 1].c(ο, α - 1, ρ, σ)
#define A(a) ο[α++].v = (void *)(a),
#define X A2(os_next, და) O
#define S(T, σ) ((T *)&σ[-wordCountOf(T)])

typedef void (*n_t)(OARS);
typedef unsigned long Q_t;
typedef long q_t;
typedef unsigned int W_t;

#define wordCountOf(T)                                                         \
  ((sizeof(T) +                                                                \
    ((sizeof(void *) - (sizeof(T) % sizeof(void *))) % sizeof(void *))) /      \
   sizeof(void *))
/*
console.log(
  Array(21).fill()
           .map((_, a) => String.fromCharCode(a+0x61))
           .map((v, i, a) => `#define A${i}(${a.slice(0,i)})
${a.slice(0,i).map(v=>`A(${v})`).join('')}`) .slice(2) .join('\n')
)
*/
#define A2(a, b) A(a) A(b)
#define A3(a, b, c) A(a) A(b) A(c)
#define A4(a, b, c, d) A(a) A(b) A(c) A(d)
#define A5(a, b, c, d, e) A(a) A(b) A(c) A(d) A(e)
#define A6(a, b, c, d, e, f) A(a) A(b) A(c) A(d) A(e) A(f)
#define A7(a, b, c, d, e, f, g) A(a) A(b) A(c) A(d) A(e) A(f) A(g)
#define A8(a, b, c, d, e, f, g, h) A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h)
#define A9(a, b, c, d, e, f, g, h, i)                                          \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i)
#define A10(a, b, c, d, e, f, g, h, i, j)                                      \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j)
#define A11(a, b, c, d, e, f, g, h, i, j, k)                                   \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k)
#define A12(a, b, c, d, e, f, g, h, i, j, k, l)                                \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l)
#define A13(a, b, c, d, e, f, g, h, i, j, k, l, m)                             \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m)
#define A14(a, b, c, d, e, f, g, h, i, j, k, l, m, n)                          \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n)
#define A15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o)                       \
  A(a) A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o)
#define A16(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p)                    \
  A(a)                                                                         \
  A(b) A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p)
#define A17(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q)                 \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c) A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q)
#define A18(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r)              \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c)                                                                         \
  A(d) A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q) A(r)
#define A19(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s)           \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c)                                                                         \
  A(d)                                                                         \
  A(e) A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q) A(r) A(s)
#define A20(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t)        \
  A(a)                                                                         \
  A(b)                                                                         \
  A(c)                                                                         \
  A(d)                                                                         \
  A(e)                                                                         \
  A(f) A(g) A(h) A(i) A(j) A(k) A(l) A(m) A(n) A(o) A(p) A(q) A(r) A(s) A(t)
