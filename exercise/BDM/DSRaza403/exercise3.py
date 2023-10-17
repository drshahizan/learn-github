import pandas as pd

# Generate random data
data = pd.DataFrame({'Column 1': range(1, 101),
                     'Column 2': range(101, 201),
                     'Column 3': range(201, 301),
                     'Column 4': range(301, 401),
                     'Column 5': range(401, 501)})

# Save the data as a Markdown table
markdown_table = data.to_markdown(index=False)

# Save the Markdown table to a .md file
with open('random_data.md', 'w') as file:
    file.write(markdown_table)
