extern void a();
extern void b();
extern void duplicated();

int main() {
  a();
  b();
  duplicated();
}
