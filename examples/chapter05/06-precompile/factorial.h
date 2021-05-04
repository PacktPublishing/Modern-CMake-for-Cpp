template <int N> struct Fib_t {
    enum { value = Fib_t<N-1>::value + Fib_t<N-2>::value };
};

// Explicitly specialized for N==2
template <> struct Fib_t<2> {
    enum { value = 1 };
};

// Explicitly specialized for N==1
template <> struct Fib_t<1> {
    enum { value = 1 };
};

typedef Fib_t<45> fib45;
