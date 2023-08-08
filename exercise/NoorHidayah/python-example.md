gvyugy
# Import necessary libraries
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score

# Create a DataFrame with the dummy dataset
data = {
    "Name": ["Ahmad", "Nurul", "Ismail", "Siti", "Amirul", "Fatimah", "Rahman", "Aishah", "Faisal", "Norazura"],
    "Age": [28, 23, 35, 31, 40, 27, 22, 29, 33, 37],
    "Gender": ["Male", "Female", "Male", "Female", "Male", "Female", "Male", "Female", "Male", "Female"],
    "Location": ["Kuala Lumpur", "Penang", "Johor Bahru", "Selangor", "Kedah", "Kelantan", "Terengganu", "Pahang", "Perak", "Sabah"],
    "Occupation": ["Software Engineer", "Student", "Doctor", "Accountant", "Teacher", "Engineer", "Student", "Lawyer", "Business Owner", "Nurse"]
}

df = pd.DataFrame(data)

# Encode categorical features
df_encoded = pd.get_dummies(df, columns=["Gender", "Location", "Occupation"])

# Split the data into features and target
X = df_encoded.drop("Name", axis=1)
y = df_encoded["Name"]

# Split the data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Initialize and train the Decision Tree classifier
classifier = DecisionTreeClassifier(random_state=42)
classifier.fit(X_train, y_train)

# Make predictions on the test data
y_pred = classifier.predict(X_test)

# Calculate accuracy
accuracy = accuracy_score(y_test, y_pred)

print("Accuracy:", accuracy)
