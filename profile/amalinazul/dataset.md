# Generate 10 dummy student records
students = [
    {"Name": "John Doe", "Age": 20, "GPA": 3.5},
    {"Name": "Jane Smith", "Age": 22, "GPA": 3.2},
    {"Name": "Alex Johnson", "Age": 21, "GPA": 3.8},
    {"Name": "Emily Brown", "Age": 19, "GPA": 3.0},
    {"Name": "Michael Lee", "Age": 23, "GPA": 3.7},
    {"Name": "Olivia White", "Age": 20, "GPA": 3.6},
    {"Name": "William Harris", "Age": 22, "GPA": 3.4},
    {"Name": "Sophia Martin", "Age": 21, "GPA": 3.9},
    {"Name": "Daniel Clark", "Age": 19, "GPA": 3.1},
    {"Name": "Ava Rodriguez", "Age": 23, "GPA": 3.5}
]

# Generate markdown code for each student record
markdown_records = []
for student in students:
    markdown_record = f"| {student['Name']} | {student['Age']} | {student['GPA']} |"
    markdown_records.append(markdown_record)

# Print the markdown records
for record in markdown_records:
    print(record)

