import Foundation

//input
let hourString:String = readLine()!
var hour:String = String()
var minute:String = String()

//convert to array
var a:[Character] = []
for digit:Character in hourString{
    a.append(digit)
}

print(a[1])

