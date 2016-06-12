
object HelloJNI {
  def main(args: Array[String]): Unit = {
    System.loadLibrary("hello");
    
    val h = new HelloJNI();
    h.hello
  }

}

class HelloJNI {
  @native def hello(): Unit
}
