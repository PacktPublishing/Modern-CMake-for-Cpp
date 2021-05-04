function e() {
  cd "/home/root/chapter"*"$1/"*"$2"*
}
function b() {
  cmake -B b .
  cmake --build b
}
