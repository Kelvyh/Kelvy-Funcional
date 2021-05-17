// Identity function
I = a => a
console.log("Identity: "+I(1))

// Curried function
add = a => b => a + b
console.log("\nCurried: "+add(1))
console.log("Curried: "+add(1)(2))

// Mockinbird function
M = f => f(f)
console.log("\nMockingbird: "+M(I))

//Kestrel function
K = a => b => a
console.log("\nKestrel: "+K(I)(M))
console.log("Kestrel: "+K(1)(2))

//Kite function
KI = a => b => b
console.log("\nKite: "+KI(1)(2))

//Cardinal function
C = f => a => b => f(b)(a)
console.log("\nCardinal: "+C(K)(I)(M))

// Boolean
T = K
F = KI
T.inspect = () => 'true'
F.inspect = () => 'false'

//NOT function
not = p => p(F)(T)
console.log("NOT: "+not(T))
console.log(C(F)('true')('false'))

//AND function
and = p => q => p(q)(p)
console.log("\nand:")
console.log("TRUE and TRUE: "+and(T)(T))
console.log("TRUE and FALSE: "+and(T)(F))
console.log("FALSE and TRUE: "+and(F)(T))
console.log("FALSE and FALSE: "+and(F)(F))

//OR function
or = p => q => p(p)(q)
console.log("\nor:")
console.log("TRUE or TRUE: "+or(T)(T))
console.log("TRUE or FALSE: "+or(T)(F))
console.log("FALSE or TRUE: "+or(F)(T))
console.log("FALSE or FALSE: "+or(F)(F))

//Boolean equality function
beq = p => q => p(q)(not(q))
console.log("\nbeq:")
console.log("TRUE or TRUE: "+beq(T)(T))
console.log("TRUE or FALSE: "+beq(T)(F))
console.log("FALSE or TRUE: "+beq(F)(T))
console.log("FALSE or FALSE: "+beq(F)(F))
