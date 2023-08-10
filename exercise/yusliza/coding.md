
### Processing Malaysian Names Data Using Python

```python
# Dummy dataset
data = [
    {"Name": "Ahmad Abdullah", "IC Number": "850201-14-5678", "Age": 35, "Address": "123 Jalan Merdeka, Kuala Lumpur", "Education Background": "B.Sc. in Computer Science", "Blood Type": "A+"},
    # ... (other data entries)
]

# Displaying the names and ages
for entry in data:
    print(f"Name: {entry['Name']}, Age: {entry['Age']}")
