-- Suite arithmétique définie sur N de raison 3 et de premier terme -5
u :: Int -> Int
u 0 = -5
u n = u (n - 1) + 3

-- Suite arithmétique définie sur N de raison -7 et de premier terme 9
w :: Int -> Int
w 0 = 9
w n = w (n - 1) - 7

-- Suite géométrique définie sur N de raison -2 et de premier terme 4
p :: Int -> Int
p 0 = 4
p n = p (n - 1) * (-2)

main = do
    putStrLn "Suite u"
    print (u 1)
    print (u 37)

