
swap (a, b) = (b, a)

times x y = x * y

twotimes = (times 2)

threetimes = times 3

sixtimes = twotimes . threetimes

twelvetimes = sixtimes . twotimes