package asd

fun main() {
    println(
        readLine()!!
            .split(" ")
            .sumBy {
                it.toInt()

            }
    )
}
