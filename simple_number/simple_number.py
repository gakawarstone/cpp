import subprocess
process = subprocess.Popen('./simple_number', stdout=subprocess.PIPE)
data = process.communicate()
print(data)
