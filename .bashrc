e() {
  cd "/home/root/examples/chapter"*"$1/"*"$2"*
}
gb() {
  cd /tmp/b
}
gen() {
  cmake -B /tmp/b .
}
build() {
  cmake --build /tmp/b
}
b() {
  gen
  build
}
bb() {
  b
  gb
}
