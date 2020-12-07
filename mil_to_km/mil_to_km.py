import subprocess

process = subprocess.Popen('./mil_to_km', stdout=subprocess.PIPE)

data = process.communicate()
print(data)
