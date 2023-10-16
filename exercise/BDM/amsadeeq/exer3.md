import random
import faker

# Initialize Faker generator
fake = faker.Faker()

# Header for the table
table = "| Name          | Age | Country        | Email                           |\n"
table += "|---------------|-----|----------------|---------------------------------|\n"

# Generate 100 rows of dummy data
for i in range(100):
    name = fake.name()
    age = random.randint(18, 90)
    country = fake.country()
    email = fake.email()
    
    # Add row to the table
    table += f"| {name} | {age} | {country} | {email} |\n"

# Write the table to a markdown file
with open("dummy_data_table.md", "w") as file:
    file.write(table)
