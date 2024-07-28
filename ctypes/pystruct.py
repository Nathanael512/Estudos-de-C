import ctypes as ct

class TringleSTL(ct.Structure):
    _fields_ = [
        ("normal", ct.c_float * 3),
        ("v1", ct.c_float * 3),
        ("v2", ct.c_float * 3),
        ("v3", ct.c_float * 3),
        ("byte_count", ct.c_uint16)
    ]
    _pack_ = 1

t = TringleSTL(
    normal=(0,0,1), v1=(0,0.5,0), v2=(0.5,0,0), v3=(0.5,0.5,0),
    byte_count=0
)

print("normal", list(t.normal))
print("v1", list(t.v1))
print("v2", list(t.v2))
print("v3", list(t.v3))
print(t.byte_count)

print(ct.sizeof(TringleSTL))