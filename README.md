$ gcc -fPIC -shared MouseMover.cpp -framework JavaVM -framework ApplicationServices -o libhello.jnilib

$ scalac HelloJNI.scala
$ javac HelloJNI.java

$ javah HelloJNI

$ java -Djava.library.path=. HelloJNI
$ scala -Djava.library.path=. HelloJNI
