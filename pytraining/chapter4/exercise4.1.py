i = int(input())  ##　＝＝ static_cast<int> in C++

if i >= 90:
    print('優')

elif i < 90 and i >= 70:
    print('良')

elif i < 70 and i >= 50:
    print('可')

else:
    print('不可')

