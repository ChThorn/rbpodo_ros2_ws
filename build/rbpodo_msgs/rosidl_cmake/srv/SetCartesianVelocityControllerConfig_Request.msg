# Arrival time to the destination (unit: sec. t1 >= 0.002)
float64 t1 

# Time to maintain the action after arrival (unit: sec. 0.02 < t2 < 0.2)
float64 t2

# Speed tracking rate (gain > 0)
float64 gain

# Low-pass filter gain (The smaller it is, the smoother the action becomes. 0 < alpha < 1)
float64 alpha
