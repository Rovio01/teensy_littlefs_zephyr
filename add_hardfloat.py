Import("env")
flags = [
   "-mfloat-abi=hard"
]
env.Append(CCFLAGS=flags, LINKFLAGS=flags)