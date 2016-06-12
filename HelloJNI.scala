
object HelloJNI {
  def main(args: Array[String]): Unit = {
    System.loadLibrary("hello");
    
    hello;
  }

  @native def hello(): Unit
}
