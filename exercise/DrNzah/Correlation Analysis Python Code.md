```python
import pandas as pd
import numpy as np

# Create a sample dataset
data = {
    'Age': [25, 30, 35, 40, 45],
    'Income': [50000, 60000, 75000, 90000, 100000],
    'Savings': [10000, 15000, 20000, 25000, 30000]
}

df = pd.DataFrame(data)

# Calculate the correlation matrix
correlation_matrix = df.corr()

# Print the correlation matrix
print("Correlation Matrix:")
print(correlation_matrix)

# Access individual correlation values
correlation_income_savings = correlation_matrix.loc['Income', 'Savings']
print("\nCorrelation between Income and Savings:", correlation_income_savings)

