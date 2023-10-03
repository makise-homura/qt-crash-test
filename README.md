* Use Qt 5.15.

* Do `cmake . && make`. It will generate `test-dec` that uses `--` to get previous value of iterator, and `test-std` that uses `std::prev`.

* Run `./test-dec; echo $?`; see 10 in stdout, as expected.

* Run `./test-std`; withess a segfault.
