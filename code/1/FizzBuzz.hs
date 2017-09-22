
fizzes = cycle ["", "", "fizz"]
buzzes = cycle ["", "", "", "", "buzz"]
pattern = zipWith (++) fizzes buzzes
naturals = map show [1..]
output = zipWith max naturals pattern