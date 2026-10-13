auto main() -> int {
  // you can't dereference pointer if it isn't attached to any address!
  int *errorPointer;
  *errorPointer = 5;
  // g++ will compile this code but the binary file will throw 'segmentation fault (core dumped)' after attempting to run it.
  return 0;
}
