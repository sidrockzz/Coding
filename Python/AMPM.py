#!/usr/bin/python3
string = input()

time = string.split(":")
if string[-2:] == "PM":
    if time[0] != "12":
        time[0] = str(int(time[0])+12)
    else:
        if time[0] == "12":
            time[0] = "00"
    ntime = ':'.join(time)
    print(str(ntime[:-2]))