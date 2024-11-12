//input
var numberOfRepetition:Int = Int(readLine()!)!

var total:Double = 0

//utilizando for 
for _ in 1...numberOfRepetition{
    //inputs
    let id:Int = Int(readLine()!)!
    let quantity:Int = Int(readLine()!)!

    switch id {
        case 1001:
            total = total + (Double(quantity) * 1.50)
        case 1002:
            total = total + (Double(quantity) * 2.50)
        case 1003:
            total = total + (Double(quantity) * 3.50)
        case 1004:
            total = total + (Double(quantity) * 4.50)
        case 1005:
            total = total + (Double(quantity) * 5.50)
        default:
            print("invalid ID")
    }
}

//output
print(total)